//#include <ps4.h>

#include "natives.h"
#include "huds.h"
#include "structs.h"

namespace str {
    int cmp(const char *s1, const char *s2) {
        for (; *s1 == *s2; s1++, s2++)
            if (*s1 == '\0')
                return 0;
        return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
    }
};

void spawnVehicle(char* name) {
    int hash = GET_HASH_KEY(name);
    if (IS_MODEL_IN_CDIMAGE(hash) && IS_MODEL_VALID(hash)) {
        REQUEST_MODEL(hash);
        if (HAS_MODEL_LOADED(hash)) {
            int ped_id = PLAYER_PED_ID();
            int old_vehicle = GET_VEHICLE_PED_IS_USING(ped_id);
            float speed = GET_ENTITY_SPEED(old_vehicle);
            if (old_vehicle) DELETE_VEHICLE(&old_vehicle);
            float *origin = GET_ENTITY_COORDS(ped_id, false);
            int new_vehicle = CREATE_VEHICLE(hash, origin, 0, 1, 0);
            if (new_vehicle) {
                SET_ENTITY_HEADING(new_vehicle, GET_ENTITY_HEADING(ped_id));
                SET_PED_INTO_VEHICLE(ped_id, new_vehicle, -1);
                SET_VEHICLE_ENGINE_ON(new_vehicle, 1, 0, false);
                SET_VEHICLE_FORWARD_SPEED(new_vehicle, speed);
            }
        }
    }
}

inline float optionOffset(int num) {
    return .1 + (.03 * num);
}

class __menu {
private:
    bool isOpen;
    int currentMenu;
    int currentIndex;
    int optionIndex;
    int totalOptions;

    enum SUBMENUS {
        MAIN_MENU
    };

    template<typename T>
    void addOption(char *text, T function) {
        if(!isOpen) return;

        bool selected = currentIndex == optionIndex;

        drawText(text, 4, .5, .5 - .05, optionOffset(optionIndex), Color(255, 255, 255, 255), left);

        if(selected) {
            drawText(">", 4, .5, .5 - .06, optionOffset(optionIndex), Color(0, 0, 255, 255), left);
            if(IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_X)) 
                function();
        }
        
        optionIndex++;
    }
    template<typename T>
    void _addOptionBool(char *text, bool value, T function) {
        if(!isOpen) return;
        
        bool selected = currentIndex == optionIndex;

        char *booltext = value ? "On" : "Off";
        Color textColor = value ? Color(0, 0, 255, 255) : Color(255, 0, 0, 255);

        drawText(booltext, 4, .5, .5 + .06, optionOffset(optionIndex), textColor, right);
        addOption(text, function);
    }
    #define addOptionBool(text, value, function) { \
        static bool value; \
        _addOptionBool(text, value, function); \
    }

    template<typename T, typename T1>
    void _addOptionBoolAlways(char *text, bool value, T function, T1 fnIfBool) {
        if(!isOpen) return;
        
        bool selected = currentIndex == optionIndex;

        char *booltext = value ? "On" : "Off";
        Color textColor = value ? Color(0, 0, 255, 255) : Color(255, 0, 0, 255);

        drawText(booltext, 4, .5, .5 + .06, optionOffset(optionIndex), textColor, right);
        addOption(text, function);

        if(selected && value && IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_X))
            fnIfBool();
    }
    #define addOptionBoolAlways(text, value, function, fnIfBool) { \
        static bool value; \
        _addOptionBoolAlways(text, value, function, fnIfBool); \
    }
    void setTotal(int num) {
        totalOptions = (num - 1);
    }
    void restore() {
        optionIndex = 0;
    }
    void monitor() {
        if(!isOpen) {
            isOpen = IS_DISABLED_CONTROL_PRESSED(0, Button_Dpad_Right) && IS_DISABLED_CONTROL_PRESSED(0, Button_Square);
        } else {          
            if(IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Up) && currentIndex > 0) {
                currentIndex--;
            }
            if(IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Down) && currentIndex < totalOptions) {
                currentIndex++;
            }
            if(IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Square)) {
                isOpen = false;
            }
        }
        restore();
        WAIT(100);        
    }
    void buildMenu() {
        int PED_ID = PLAYER_PED_ID();

        switch (currentMenu) {
            case MAIN_MENU: {
                setTotal(8);
                addOption("Give advanced rifle", [&]() { 
                    GIVE_DELAYED_WEAPON_TO_PED(PED_ID, GET_HASH_KEY("WEAPON_ADVANCEDRIFLE"), 9999, true); 
                });
                addOption("Spawn Adder", [&]() {
                    spawnVehicle("adder");
                });
                addOption("Spawn Tank", [&]() {
                    spawnVehicle("rhino");
                });
                addOption("Spawn Lazer", [&]() {
                    spawnVehicle("lazer");
                });
                addOption("Boost", [&]() {
                    SET_VEHICLE_FORWARD_SPEED(GET_VEHICLE_PED_IS_USING(PED_ID), 1000);
                });
                addOptionBool("Godmode", godmode, [&]() {
                    godmode = !godmode;
                    SET_PLAYER_INVINCIBLE(PLAYER_ID(), godmode);
                });
                addOptionBool("Unlimited ammo", ammo, [&]() {
                    ammo = !ammo;
                    SET_PED_INFINITE_AMMO_CLIP(PLAYER_PED_ID(), ammo);
                });
                addOptionBoolAlways("Explosive Ammo", expAmmo, [&]() {
                    expAmmo = !expAmmo;
                }, [&]() {
                    SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER_ID());
                });
            }
        };
    }
public:
    void runMenu() {
        monitor();
        buildMenu();
    }
} Menu;

extern "C" void loop() {
    char *script = GET_THIS_SCRIPT_NAME();
	if (!str::cmp(script, "ingamehud")) {
        Menu.runMenu();
	}
	if(!str::cmp(script, "freemode") || !NETWORK_IS_IN_SESSION()) {
        
	}
}