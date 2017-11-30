#pragma once

#include "invoker.h"
#include "structs.h"

static int GET_PLAYER_PED(int player) { return invoke<int>(0x43A66C31C68491C0, player); }
static int GET_PLAYER_PED_SCRIPT_INDEX(int player) { return invoke<int>(0x50FAC3A3E030A6E1, player); }
static void SET_PLAYER_MODEL(int player, int model) { invoke<void *>(0x00A1CADD00108836, player, model); }
static void CHANGE_PLAYER_PED(int player, int ped, bool b2, bool b3) { invoke<void *>(0x048189FAC643DEEE, player, ped, b2, b3); }
static void GET_PLAYER_RGB_COLOUR(int player, int *r, int *g, int *b) { invoke<void *>(0xE902EF951DCE178F, player, r, g, b); }
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x407C7F91DDB46C16); }
static int GET_PLAYER_TEAM(int player) { return invoke<int>(0x37039302F4E0A008, player); }
static void SET_PLAYER_TEAM(int player, int team) { invoke<void *>(0x0299FA38396A4940, player, team); }
static char *GET_PLAYER_NAME(int player) { return invoke<char *>(0x6D0DE6A7B5DA71F8, player); }
static float GET_WANTED_LEVEL_RADIUS(int player) { return invoke<float>(0x085DEB493BE80812, player); }
static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(int player) { return invoke<Vector3>(0x0C92BA89F1AF26F8, player); }
static void SET_PLAYER_WANTED_CENTRE_POSITION(int player, Vector3 *position, bool p2, bool p3) { invoke<void *>(0x520E541A97A13354, player, position, p2, p3); }
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xFDD179EAF45B556C, wantedLevel); }
static void SET_PLAYER_WANTED_LEVEL(int player, int wantedLevel, bool disableNoMission) { invoke<void *>(0x39FF19C64EF7DA5B, player, wantedLevel, disableNoMission); }
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(int player, int wantedLevel, bool p2) { invoke<void *>(0x340E61DE7F471565, player, wantedLevel, p2); }
static void SET_PLAYER_WANTED_LEVEL_NOW(int player, bool p1) { invoke<void *>(0xE0A7D1E497FFCD6F, player, p1); }
static bool ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(int player) { return invoke<bool>(0xAFAF86043E5874E9, player); }
static bool ARE_PLAYER_STARS_GREYED_OUT(int player) { return invoke<bool>(0x0A6EB355EE14A2DB, player); }
static void SET_DISPATCH_COPS_FOR_PLAYER(int player, bool toggle) { invoke<void *>(0xDB172424876553F4, player, toggle); }
static bool IS_PLAYER_WANTED_LEVEL_GREATER(int player, int wantedLevel) { return invoke<bool>(0x238DB2A2C23EE9EF, player, wantedLevel); }
static void CLEAR_PLAYER_WANTED_LEVEL(int player) { invoke<void *>(0xB302540597885499, player); }
static bool IS_PLAYER_DEAD(int player) { return invoke<bool>(0x424D4687FA1E5652, player); }
static bool IS_PLAYER_PRESSING_HORN(int player) { return invoke<bool>(0xFA1E2BF8B10598F9, player); }
static void SET_PLAYER_CONTROL(int player, bool toggle, int possiblyFlags) { invoke<void *>(0x8D32347D6D4C40A2, player, toggle, possiblyFlags); }
static int GET_PLAYER_WANTED_LEVEL(int player) { return invoke<int>(0xE28E54788CE8F12D, player); }
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<void *>(0xAA5F02DB48D704B9, maxWantedLevel); }
static void SET_POLICE_RADAR_BLIPS(bool toggle) { invoke<void *>(0x43286D561B72B8BF, toggle); }
static void SET_POLICE_IGNORE_PLAYER(int player, bool toggle) { invoke<void *>(0x32C62AA929C2DA6A, player, toggle); }
static bool IS_PLAYER_PLAYING(int player) { return invoke<bool>(0x5E9564D8246B909A, player); }
static void SET_EVERYONE_IGNORE_PLAYER(int player, bool toggle) { invoke<void *>(0x8EEDA153AD141BA4, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE(int player, bool toggle) { invoke<void *>(0x056E0FE8534C2949, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(int player) { invoke<void *>(0x471D2FF42A94B4F2, player); }
static void _SET_HUD_ANIMATION_STOP_LEVEL(int player, bool toggle) { invoke<void *>(0xDE45D1A1EF45EE61, player, toggle); }
static void _0xC3376F42B1FACCC6(int player) { invoke<void *>(0xC3376F42B1FACCC6, player); }
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(int player, bool toggle) { invoke<void *>(0x596976B02B6B5700, player, toggle); }
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<void *>(0x020E5F00CDA207BA, multiplier); }
static void SET_WANTED_LEVEL_DIFFICULTY(int player, float difficulty) { invoke<void *>(0x9B0BB33B04405E7A, player, difficulty); }
static void RESET_WANTED_LEVEL_DIFFICULTY(int player) { invoke<void *>(0xB9D0DD990DC141DD, player); }
static void START_FIRING_AMNESTY(int duration) { invoke<void *>(0xBF9BD71691857E48, duration); }
static void REPORT_CRIME(int player, int crimeType, int wantedLvlThresh) { invoke<void *>(0xE9B09589827545E7, player, crimeType, wantedLvlThresh); }
static void _SWITCH_CRIME_TYPE(int player, int p1) { invoke<void *>(0x9A987297ED8BD838, player, p1); }
static void _0xBC9490CA15AEA8FB(int player) { invoke<void *>(0xBC9490CA15AEA8FB, player); }
static void _0x4669B3ED80F24B4E(int player) { invoke<void *>(0x4669B3ED80F24B4E, player); }
static void _0xAD73CE5A09E42D12(int player) { invoke<void *>(0xAD73CE5A09E42D12, player); }
static void _0x36F1B38855F2A8DF(int player) { invoke<void *>(0x36F1B38855F2A8DF, player); }
static void _0xDC64D2C53493ED12(int player) { invoke<void *>(0xDC64D2C53493ED12, player); }
static void _0xB45EFF719D8427A6(float p0) { invoke<void *>(0xB45EFF719D8427A6, p0); }
static void _0x0032A6DBA562C518() { invoke<void *>(0x0032A6DBA562C518); }
static bool CAN_PLAYER_START_MISSION(int player) { return invoke<bool>(0xDE7465A27D403C06, player); }
static bool IS_PLAYER_READY_FOR_CUTSCENE(int player) { return invoke<bool>(0x908CBECC2CAA3690, player); }
static bool IS_PLAYER_TARGETTING_ENTITY(int player, int entity) { return invoke<bool>(0x7912F7FC4F6264B6, player, entity); }
static bool GET_PLAYER_TARGET_ENTITY(int player, int *entity) { return invoke<bool>(0x13EDE1A5DBF797C9, player, entity); }
static bool IS_PLAYER_FREE_AIMING(int player) { return invoke<bool>(0x2E397FD2ECD37C87, player); }
static bool IS_PLAYER_FREE_AIMING_AT_ENTITY(int player, int entity) { return invoke<bool>(0x3C06B5C839B38F7B, player, entity); }
static bool GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(int player, int *entity) { return invoke<bool>(0x2975C866E6713290, player, entity); }
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(int player, float range) { invoke<void *>(0x29961D490E5814FD, player, range); }
static void SET_PLAYER_CAN_DO_DRIVE_BY(int player, bool toggle) { invoke<void *>(0x6E8834B52EC20C77, player, toggle); }
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(int player, bool toggle) { invoke<void *>(0xD5E460AD7020A246, player, toggle); }
static void SET_PLAYER_CAN_USE_COVER(int player, bool toggle) { invoke<void *>(0xD465A8599DFF6814, player, toggle); }
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x462E0DB9B137DC5F); }
static bool IS_PLAYER_TARGETTING_ANYTHING(int player) { return invoke<bool>(0x78CFE51896B6B8A4, player); }
static void SET_PLAYER_SPRINT(int player, bool toggle) { invoke<void *>(0xA01B8075D8B92DF4, player, toggle); }
static void RESET_PLAYER_STAMINA(int player) { invoke<void *>(0xA6F312FCCE9C1DFE, player); }
static void RESTORE_PLAYER_STAMINA(int player, float p1) { invoke<void *>(0xA352C1B864CAFD33, player, p1); }
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(int player) { return invoke<float>(0x3F9F16F8E65A7ED7, player); }
static float GET_PLAYER_SPRINT_TIME_REMAINING(int player) { return invoke<float>(0x1885BC9B108B4C99, player); }
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(int player) { return invoke<float>(0xA1FCF8E6AF40B731, player); }
static int GET_PLAYER_GROUP(int player) { return invoke<int>(0x0D127585F77030AF, player); }
static int GET_PLAYER_MAX_ARMOUR(int player) { return invoke<int>(0x92659B4CE1863CB3, player); }
static bool IS_PLAYER_CONTROL_ON(int player) { return invoke<bool>(0x49C32D60007AFA47, player); }
static bool IS_PLAYER_SCRIPT_CONTROL_ON(int player) { return invoke<bool>(0x8A876A65283DD7D7, player); }
static bool IS_PLAYER_CLIMBING(int player) { return invoke<bool>(0x95E8F73DC65EFB9C, player); }
static bool IS_PLAYER_BEING_ARRESTED(int player, bool atArresting) { return invoke<bool>(0x388A47C51ABDAC8E, player, atArresting); }
static void RESET_PLAYER_ARREST_STATE(int player) { invoke<void *>(0x2D03E13C460760D6, player); }
static int GET_PLAYERS_LAST_VEHICLE() { return invoke<int>(0xB6997A7EB3F5C8C0); }
static int GET_PLAYER_INDEX() { return invoke<int>(0xA5EDC40EF369B48D); }
static int INT_TO_PLAYERINDEX(int value) { return invoke<int>(0x41BD2A6B006AF756, value); }
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0x9EC6603812C24710, value); }
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(int player) { return invoke<int>(0x5D35ECF3A81A0EE0, player); }
static int GET_TIME_SINCE_PLAYER_HIT_PED(int player) { return invoke<int>(0xE36A25322DC35F42, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(int player) { return invoke<int>(0xD559D2BE9E37853B, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(int player) { return invoke<int>(0xDB89591E290D9182, player); }
static bool IS_PLAYER_FREE_FOR_AMBIENT_TASK(int player) { return invoke<bool>(0xDCCFD3F106C36AB4, player); }
static int PLAYER_ID() { return invoke<int>(0x4F8644AF03D0E0D6); }
static int PLAYER_PED_ID() { return invoke<int>(0xD80958FC74E988A6); }
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xEE68096F9F37341E); }
static bool HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<bool>(0xC968670BFACE42D9, cleanupFlags); }
static void FORCE_CLEANUP(int cleanupFlags) { invoke<void *>(0xBC8983F38F78ED51, cleanupFlags); }
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char *name, int cleanupFlags) { invoke<void *>(0x4C68DDDDF0097317, name, cleanupFlags); }
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<void *>(0xF745B37630DF176B, id, cleanupFlags); }
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x9A41CF4674A12272); }
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(int player, int vehicle) { invoke<void *>(0x8026FF78F208978A, player, vehicle); }
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(int player) { invoke<void *>(0x1DE37BBF9E9CC14A, player); }
static bool GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<bool>(0xBEC7076D64130195, achievement); }
static bool HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<bool>(0x867365E111A3B6EB, achievement); }
static bool IS_PLAYER_ONLINE() { return invoke<bool>(0xF25D331DC2627BBC); }
static bool IS_PLAYER_LOGGING_IN_NP() { return invoke<bool>(0x74556E1420867ECA); }
static void DISPLAY_SYSTEM_SIGNIN_UI(bool unk) { invoke<void *>(0x94DD7888C10A979E, unk); }
static bool IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<bool>(0x5D511E3867C87139); }
static void SET_PLAYER_INVINCIBLE(int player, bool toggle) { invoke<void *>(0x239528EACDC3E7DE, player, toggle); }
static bool GET_PLAYER_INVINCIBLE(int player) { return invoke<bool>(0xB721981B2B939E07, player); }
static void _0xCAC57395B151135F(int player, bool p1) { invoke<void *>(0xCAC57395B151135F, player, p1); }
static void REMOVE_PLAYER_HELMET(int player, bool p2) { invoke<void *>(0xF3AC26D3CC576528, player, p2); }
static void GIVE_PLAYER_RAGDOLL_CONTROL(int player, bool toggle) { invoke<void *>(0x3C49C870E66F0A28, player, toggle); }
static void SET_PLAYER_LOCKON(int player, bool toggle) { invoke<void *>(0x5C8B2F450EE4328E, player, toggle); }
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<void *>(0xB1906895227793F3, targetMode); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(int player) { invoke<void *>(0xF0B67A4DE6AB5F98, player); }
static bool HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(int player) { return invoke<bool>(0x20CE80B0C2BF4ACC, player); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(int player) { invoke<void *>(0x4AACB96203D11A31, player); }
static bool HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(int player) { return invoke<bool>(0xE4B90F367BD81752, player); }
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(int player, float multiplier) { invoke<void *>(0xCA7DC8329F0A1E9E, player, multiplier); }
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(int player, float multiplier) { invoke<void *>(0xA91C6F0FF7D16A13, player, multiplier); }
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(int player, float multiplier) { invoke<void *>(0x6DB47AA77FD94E09, player, multiplier); }
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x5063F92F07C2A316); }
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xC7034807558DDFCA); }
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<void *>(0xAEBF081FFC0A0E5E); }
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<void *>(0x8621390F0CDCFE1F); }
static void SET_PLAYER_FORCED_AIM(int player, bool toggle) { invoke<void *>(0x0FEE4F80AC44A726, player, toggle); }
static void SET_PLAYER_FORCED_ZOOM(int player, bool toggle) { invoke<void *>(0x75E7D505F2B15902, player, toggle); }
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(int player, bool toggle) { invoke<void *>(0x7651BC64AE59E128, player, toggle); }
static void DISABLE_PLAYER_FIRING(int player, bool toggle) { invoke<void *>(0x5E6CC07646BBEAB8, player, toggle); }
static void SET_DISABLE_AMBIENT_MELEE_MOVE(int player, bool toggle) { invoke<void *>(0x2E8AABFA40A84F8C, player, toggle); }
static void SET_PLAYER_MAX_ARMOUR(int player, int value) { invoke<void *>(0x77DFCCF5948B8C71, player, value); }
static void SPECIAL_ABILITY_DEACTIVATE(int player) { invoke<void *>(0xD6A953C6D1492057, player); }
static void SPECIAL_ABILITY_DEACTIVATE_FAST(int player) { invoke<void *>(0x9CB5CE07A3968D5A, player); }
static void SPECIAL_ABILITY_RESET(int player) { invoke<void *>(0x375F0E738F861A94, player); }
static void _0xC9A763D8FE87436A(int player) { invoke<void *>(0xC9A763D8FE87436A, player); }
static void SPECIAL_ABILITY_CHARGE_SMALL(int player, bool p1, bool p2) { invoke<void *>(0x2E7B9B683481687D, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_MEDIUM(int player, bool p1, bool p2) { invoke<void *>(0xF113E3AA9BC54613, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_LARGE(int player, bool p1, bool p2) { invoke<void *>(0xF733F45FA4497D93, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(int player, int p2) { invoke<void *>(0xED481732DFF7E997, player, p2); }
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(int player, int p1, bool p2) { invoke<void *>(0xB7B0870EB531D08D, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(int player, float normalizedValue, bool p2) { invoke<void *>(0xA0696A65F009EE18, player, normalizedValue, p2); }
static void SPECIAL_ABILITY_FILL_METER(int player, bool p1) { invoke<void *>(0x3DACA8DDC6FD4980, player, p1); }
static void SPECIAL_ABILITY_DEPLETE_METER(int player, bool p1) { invoke<void *>(0x1D506DBBBC51E64B, player, p1); }
static void SPECIAL_ABILITY_LOCK(int playerModel) { invoke<void *>(0x6A09D0D590A47D13, playerModel); }
static void SPECIAL_ABILITY_UNLOCK(int playerModel) { invoke<void *>(0xF145F3BE2EFA9A3B, playerModel); }
static bool IS_SPECIAL_ABILITY_UNLOCKED(int playerModel) { return invoke<bool>(0xC6017F6A6CDFA694, playerModel); }
static bool IS_SPECIAL_ABILITY_ACTIVE(int player) { return invoke<bool>(0x3E5F7FC85D854E15, player); }
static bool IS_SPECIAL_ABILITY_METER_FULL(int player) { return invoke<bool>(0x05A1FE504B7F2587, player); }
static void ENABLE_SPECIAL_ABILITY(int player, bool toggle) { invoke<void *>(0x181EC197DAEFE121, player, toggle); }
static bool IS_SPECIAL_ABILITY_ENABLED(int player) { return invoke<bool>(0xB1D200FE26AEF3CB, player); }
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<void *>(0xA49C426ED0CA4AB7, multiplier); }
static void _0xFFEE8FA29AB9A18E(int player) { invoke<void *>(0xFFEE8FA29AB9A18E, player); }
static bool _0x5FC472C501CCADB3(int player) { return invoke<bool>(0x5FC472C501CCADB3, player); }
static bool _0xF10B44FD479D69F3(int player, int p1) { return invoke<bool>(0xF10B44FD479D69F3, player, p1); }
static bool _0xDD2620B7B9D16FF1(int player, float p1) { return invoke<bool>(0xDD2620B7B9D16FF1, player, p1); }
static void START_PLAYER_TELEPORT(int player, float x, float y, float z, float heading, bool p5, bool p6, bool p7) { invoke<void *>(0xAD15F075A4DA0FDE, player, x, y, z, heading, p5, p6, p7); }
static void STOP_PLAYER_TELEPORT() { invoke<void *>(0xC449EDED9D73009C); }
static bool IS_PLAYER_TELEPORT_ACTIVE() { return invoke<bool>(0x02B15662D7F8886F); }
static float GET_PLAYER_CURRENT_STEALTH_NOISE(int player) { return invoke<float>(0x2F395D61F3A1F877, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(int player, float regenRate) { invoke<void *>(0x5DB660B38DD98A31, player, regenRate); }
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(int player, float damageAmount) { invoke<void *>(0xCE07B9F7817AADA3, player, damageAmount); }
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(int player, float modifier) { invoke<void *>(0x2D83BC011CA14A3C, player, modifier); }
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(int player, float modifier) { invoke<void *>(0x4A3DC7ECCC321032, player, modifier); }
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(int player, float modifier) { invoke<void *>(0xAE540335B4ABC4E2, player, modifier); }
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(int player, float damageAmount) { invoke<void *>(0xA50E117CDDF82F0C, player, damageAmount); }
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(int player, float modifier) { invoke<void *>(0x4C60E6EFDAFF2462, player, modifier); }
static void SET_PLAYER_PARACHUTE_TINT_INDEX(int player, int tintIndex) { invoke<void *>(0xA3D0E54541D9A5E5, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_TINT_INDEX(int player, int *tintIndex) { invoke<void *>(0x75D3F7A1B0D9B145, player, tintIndex); }
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(int player, int index) { invoke<void *>(0xAF04C87F5DC1DF38, player, index); }
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(int player, int *index) { invoke<void *>(0xD5A016BC3C09CF40, player, index); }
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(int player, int tintIndex) { invoke<void *>(0x93B0FB27C9A04060, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(int player, int *tintIndex) { invoke<void *>(0x6E9C742F340CE5A2, player, tintIndex); }
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(int player) { invoke<void *>(0x7DDAB28D31FAC363, player); }
static bool GET_PLAYER_HAS_RESERVE_PARACHUTE(int player) { return invoke<bool>(0x5DDFE2FF727F3CA3, player); }
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(int player, bool enabled) { invoke<void *>(0xF401B182DBA8AF53, player, enabled); }
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(int player, int r, int g, int b) { invoke<void *>(0x8217FD371A4625CF, player, r, g, b); }
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(int player, int *r, int *g, int *b) { invoke<void *>(0xEF56DBABD3CD4887, player, r, g, b); }
static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(int player, int flags) { invoke<void *>(0x11D5F725F0E780E0, player, flags); }
static void SET_PLAYER_NOISE_MULTIPLIER(int player, float multiplier) { invoke<void *>(0xDB89EF50FF25FCE9, player, multiplier); }
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(int player, float multiplier) { invoke<void *>(0xB2C1A29588A9F47C, player, multiplier); }
static bool CAN_PED_HEAR_PLAYER(int player, int ped) { return invoke<bool>(0xF297383AA91DCA29, player, ped); }
static void SIMULATE_PLAYER_INPUT_GAIT(int player, float amount, int gaitType, float speed, bool p4, bool p5) { invoke<void *>(0x477D5D63E63ECA5D, player, amount, gaitType, speed, p4, p5); }
static void RESET_PLAYER_INPUT_GAIT(int player) { invoke<void *>(0x19531C47A2ABD691, player); }
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(int player, bool toggle) { invoke<void *>(0x9F343285A00B4BB6, player, toggle); }
static void _0xD2B315B6689D537D(int player, bool p1) { invoke<void *>(0xD2B315B6689D537D, player, p1); }
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(int player, float value) { invoke<void *>(0x4E9021C1FCDD507A, player, value); }
static bool _0x690A61A6D13583F6(int p0) { return invoke<bool>(0x690A61A6D13583F6, p0); }
static void _0x9EDD76E87D5D51BA(int player) { invoke<void *>(0x9EDD76E87D5D51BA, player); }
static void SET_PLAYER_SIMULATE_AIMING(int player, bool toggle) { invoke<void *>(0xC54C95DA968EC5B5, player, toggle); }
static void SET_PLAYER_CLOTH_PIN_FRAMES(int player, bool toggle) { invoke<void *>(0x749FADDF97DFE930, player, toggle); }
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<void *>(0x9F7BBA2EA6372500, index); }
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<void *>(0x14D913B777DFF5DA, value); }
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<void *>(0xED51733DC73AED51, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<void *>(0x1DD5897E2FA6E7C9); }
static bool HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(int player) { return invoke<bool>(0xD705740BB0A1CF4C, player); }
static bool _0x38D28DA81E4E9BF9(int player) { return invoke<bool>(0x38D28DA81E4E9BF9, player); }
static bool _0xBC0753C9CA14B506(int player, int p1, bool p2) { return invoke<bool>(0xBC0753C9CA14B506, player, p1, p2); }
static bool IS_PLAYER_RIDING_TRAIN(int player) { return invoke<bool>(0x4EC12697209F2196, player); }
static bool HAS_PLAYER_LEFT_THE_WORLD(int player) { return invoke<bool>(0xD55DDFB47991A294, player); }
static void _0xFF300C7649724A0B(int player, bool p1) { invoke<void *>(0xFF300C7649724A0B, player, p1); }
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(int player, int p1, int p2, int p3, bool p4) { invoke<void *>(0xD9284A8C0D48352C, player, p1, p2, p3, p4); }
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(int player) { invoke<void *>(0x0F4CC924CF8C7B21, player); }
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(int player, int model) { invoke<void *>(0x977DB4641F6FC3DB, player, model); }
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(int player) { invoke<void *>(0x8753997EB5F6EE3F, player); }
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(int player, int model) { invoke<void *>(0xDC80A4C2F18A2B64, player, model); }
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(int player) { invoke<void *>(0x10C54E4389C12B42, player); }
static void DISABLE_PLAYER_VEHICLE_REWARDS(int player) { invoke<void *>(0xC142BE3BB9CE125F, player); }
static void _0x2F7CEB6520288061(bool p0) { invoke<void *>(0x2F7CEB6520288061, p0); }
static bool DOES_ENTITY_EXIST(int entity) { return invoke<bool>(0x7239B21A38F536BA, entity); }
static bool DOES_ENTITY_BELONG_TO_THIS_SCRIPT(int entity, bool p1) { return invoke<bool>(0xDDE6DF5AE89981D2, entity, p1); }
static bool DOES_ENTITY_HAVE_DRAWABLE(int entity) { return invoke<bool>(0x060D6E96F8B8E48D, entity); }
static bool DOES_ENTITY_HAVE_PHYSICS(int entity) { return invoke<bool>(0xDA95EA3317CC5064, entity); }
static bool HAS_ENTITY_ANIM_FINISHED(int entity, char *animDict, char *animName, int p3) { return invoke<bool>(0x20B711662962B472, entity, animDict, animName, p3); }
static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(int entity) { return invoke<bool>(0x95EB9964FF5C5C65, entity); }
static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(int entity) { return invoke<bool>(0x605F5A140F202491, entity); }
static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(int entity) { return invoke<bool>(0xDFD5033FDBA0A9C8, entity); }
static bool HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(int entity1, int entity2, bool p2) { return invoke<bool>(0xC86D67D52A707CF8, entity1, entity2, p2); }
static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY(int entity1, int entity2, int traceType) { return invoke<bool>(0xFCDFF7B72D23A1AC, entity1, entity2, traceType); }
static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(int entity1, int entity2) { return invoke<bool>(0x0267D00AF114F17A, entity1, entity2); }
static bool HAS_ENTITY_COLLIDED_WITH_ANYTHING(int entity) { return invoke<bool>(0x8BAD02F0368D9E14, entity); }
static int GET_LAST_MATERIAL_HIT_BY_ENTITY(int entity) { return invoke<int>(0x5C3D0A935F535C4C, entity); }
static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(int entity) { return invoke<Vector3>(0xE465D4AB7CA6AE72, entity); }
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(int entity) { invoke<void *>(0x40FDEDB72F8293B2, entity); }
static float GET_ENTITY_ANIM_CURRENT_TIME(int entity, char *animDict, char *animName) { return invoke<float>(0x346D81500D088F42, entity, animDict, animName); }
static float GET_ENTITY_ANIM_TOTAL_TIME(int entity, char *animDict, char *animName) { return invoke<float>(0x50BD2730B191E360, entity, animDict, animName); }
static int GET_ENTITY_ATTACHED_TO(int entity) { return invoke<int>(0x48C2BED9180FE123, entity); }
static Vector3 GET_ENTITY_COORDS(int entity, bool alive) { return invoke<float *>(0x3FEF770D40960D5A, entity, alive); }
static Vector3 GET_ENTITY_FORWARD_VECTOR(int entity) { return invoke<Vector3>(0x0A794A5A57F8DF91, entity); }
static float GET_ENTITY_FORWARD_X(int entity) { return invoke<float>(0x8BB4EF4214E0E6D5, entity); }
static float GET_ENTITY_FORWARD_Y(int entity) { return invoke<float>(0x866A4A5FAE349510, entity); }
static float GET_ENTITY_HEADING(int entity) { return invoke<float>(0xE83D4F9BA2A38914, entity); }
static int GET_ENTITY_HEALTH(int entity) { return invoke<int>(0xEEF059FAD016D209, entity); }
static int GET_ENTITY_MAX_HEALTH(int entity) { return invoke<int>(0x15D757606D170C3C, entity); }
static void SET_ENTITY_MAX_HEALTH(int entity, int value) { invoke<void *>(0x166E7CF68597D8B5, entity, value); }
static float GET_ENTITY_HEIGHT(int entity, float X, float Y, float Z, bool atTop, bool inWorldCoords) { return invoke<float>(0x5A504562485944DD, entity, X, Y, Z, atTop, inWorldCoords); }
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(int entity) { return invoke<float>(0x1DD55701034110E5, entity); }
static void GET_ENTITY_MATRIX(int entity, Vector3 *rightVector, Vector3 *forwardVector, Vector3 *upVector, Vector3 *position) { invoke<void *>(0xECB2FC7235A7D137, entity, rightVector, forwardVector, upVector, position); }
static int GET_ENTITY_MODEL(int entity) { return invoke<int>(0x9F47B058362C84B5, entity); }
static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(int entity, float posX, float posY, float posZ) { return invoke<Vector3>(0x2274BC1C4885E333, entity, posX, posY, posZ); }
static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(int entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x1899F328B0E12848, entity, offsetX, offsetY, offsetZ); }
static float GET_ENTITY_PITCH(int entity) { return invoke<float>(0xD45DC2893621E1FE, entity); }
static void GET_ENTITY_QUATERNION(int entity, float *x, float *y, float *z, float *w) { invoke<void *>(0x7B3703D2D32DFA18, entity, x, y, z, w); }
static float GET_ENTITY_ROLL(int entity) { return invoke<float>(0x831E0242595560DF, entity); }
static Vector3 GET_ENTITY_ROTATION(int entity, int rotationOrder) { return invoke<Vector3>(0xAFBD61CC738D9EB9, entity, rotationOrder); }
static Vector3 GET_ENTITY_ROTATION_VELOCITY(int entity) { return invoke<Vector3>(0x213B91045D09B983, entity); }
static char *GET_ENTITY_SCRIPT(int entity, int *script) { return invoke<char *>(0xA6E9C38DB51D7748, entity, script); }
static float GET_ENTITY_SPEED(int entity) { return invoke<float>(0xD5037BA82E12416F, entity); }
static Vector3 GET_ENTITY_SPEED_VECTOR(int entity, bool relative) { return invoke<Vector3>(0x9A8D700A51CB7B0D, entity, relative); }
static float GET_ENTITY_UPRIGHT_VALUE(int entity) { return invoke<float>(0x95EED5A694951F9F, entity); }
static Vector3 GET_ENTITY_VELOCITY(int entity) { return invoke<Vector3>(0x4805D2B1D8CF94A9, entity); }
static int GET_OBJECT_INDEX_FROM_ENTITY_INDEX(int entity) { return invoke<int>(0xD7E3B9735C0F89D6, entity); }
static int GET_PED_INDEX_FROM_ENTITY_INDEX(int entity) { return invoke<int>(0x04A2A40C73395041, entity); }
static int GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(int entity) { return invoke<int>(0x4B53F92932ADFAC0, entity); }
static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(int entity, int boneIndex) { return invoke<Vector3>(0x44A8FCB8ED227738, entity, boneIndex); }
static int GET_NEAREST_PLAYER_TO_ENTITY(int entity) { return invoke<int>(0x7196842CB375CDB3, entity); }
static int GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(int entity, int team) { return invoke<int>(0x4DC9A62F844D9337, entity, team); }
static int GET_ENTITY_TYPE(int entity) { return invoke<int>(0x8ACD366038D14505, entity); }
static bool IS_AN_ENTITY(int handle) { return invoke<bool>(0x731EC8A916BD11A1, handle); }
static bool IS_ENTITY_A_PED(int entity) { return invoke<bool>(0x524AC5ECEA15343E, entity); }
static bool IS_ENTITY_A_MISSION_ENTITY(int entity) { return invoke<bool>(0x0A7B270912999B3C, entity); }
static bool IS_ENTITY_A_VEHICLE(int entity) { return invoke<bool>(0x6AC7003FA6E5575E, entity); }
static bool IS_ENTITY_AN_OBJECT(int entity) { return invoke<bool>(0x8D68C8FD0FACA94E, entity); }
static bool IS_ENTITY_AT_COORD(int entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, bool p7, bool p8, int p9) { return invoke<bool>(0x20B60995556D004F, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
static bool IS_ENTITY_AT_ENTITY(int entity1, int entity2, float xSize, float ySize, float zSize, bool p5, bool p6, int p7) { return invoke<bool>(0x751B70C3D034E187, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
static bool IS_ENTITY_ATTACHED(int entity) { return invoke<bool>(0xB346476EF1A64897, entity); }
static bool IS_ENTITY_ATTACHED_TO_ANY_OBJECT(int entity) { return invoke<bool>(0xCF511840CEEDE0CC, entity); }
static bool IS_ENTITY_ATTACHED_TO_ANY_PED(int entity) { return invoke<bool>(0xB1632E9A5F988D11, entity); }
static bool IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(int entity) { return invoke<bool>(0x26AA915AD89BFB4B, entity); }
static bool IS_ENTITY_ATTACHED_TO_ENTITY(int from, int to) { return invoke<bool>(0xEFBE71898A993728, from, to); }
static bool IS_ENTITY_DEAD(int entity) { return invoke<bool>(0x5F9532F3B5CC2551, entity); }
static bool IS_ENTITY_IN_AIR(int entity) { return invoke<bool>(0x886E37EC497200B6, entity); }
static bool IS_ENTITY_IN_ANGLED_AREA(int entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, bool p8, bool p9, int p10) { return invoke<bool>(0x51210CED3DA1C78A, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); }
static bool IS_ENTITY_IN_AREA(int entity, float x1, float y1, float z1, float x2, float y2, float z2, bool p7, bool p8, int p9) { return invoke<bool>(0x54736AA40E271165, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
static bool IS_ENTITY_IN_ZONE(int entity, char *zone) { return invoke<bool>(0xB6463CF6AF527071, entity, zone); }
static bool IS_ENTITY_IN_WATER(int entity) { return invoke<bool>(0xCFB0A0D8EDD145A3, entity); }
static float GET_ENTITY_SUBMERGED_LEVEL(int entity) { return invoke<float>(0xE81AFC1BC4CC41CE, entity); }
static void _0x694E00132F2823ED(int entity, bool p1) { invoke<void *>(0x694E00132F2823ED, entity, p1); }
static bool IS_ENTITY_ON_SCREEN(int entity) { return invoke<bool>(0xE659E47AF827484B, entity); }
static bool IS_ENTITY_PLAYING_ANIM(int entity, char *animDict, char *animName, int taskFlag) { return invoke<bool>(0x1F0B79228E461EC9, entity, animDict, animName, taskFlag); }
static bool IS_ENTITY_STATIC(int entity) { return invoke<bool>(0x1218E6886D3D8327, entity); }
static bool IS_ENTITY_TOUCHING_ENTITY(int entity, int targetint) { return invoke<bool>(0x17FFC1B2BA35A494, entity, targetint); }
static bool IS_ENTITY_TOUCHING_MODEL(int entity, int modelint) { return invoke<bool>(0x0F42323798A58C8C, entity, modelint); }
static bool IS_ENTITY_UPRIGHT(int entity, float angle) { return invoke<bool>(0x5333F526F6AB19AA, entity, angle); }
static bool IS_ENTITY_UPSIDEDOWN(int entity) { return invoke<bool>(0x1DBD58820FA61D71, entity); }
static bool IS_ENTITY_VISIBLE(int entity) { return invoke<bool>(0x47D6F43D77935C75, entity); }
static bool IS_ENTITY_VISIBLE_TO_SCRIPT(int entity) { return invoke<bool>(0xD796CB5BA8F20E32, entity); }
static bool IS_ENTITY_OCCLUDED(int entity) { return invoke<bool>(0xE31C2C72B8692B64, entity); }
static bool WOULD_ENTITY_BE_OCCLUDED(int entityModelint, float x, float y, float z, bool p4) { return invoke<bool>(0xEE5D2A122E09EC42, entityModelint, x, y, z, p4); }
static bool IS_ENTITY_WAITING_FOR_WORLD_COLLISION(int entity) { return invoke<bool>(0xD05BFF0C0A12C68F, entity); }
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(int entity, int forceType, float x, float y, float z, bool p5, bool isDirectionRel, bool isForceRel, bool p8) { invoke<void *>(0x18FF00FC7EFF559E, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); }
static void APPLY_FORCE_TO_ENTITY(int entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, bool isDirectionRel, bool ignoreUpVec, bool isForceRel, bool p12, bool p13) { invoke<void *>(0xC5F68BE9613E2D18, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); }
static void ATTACH_ENTITY_TO_ENTITY(int entity1, int entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, bool p9, bool useSoftPinning, bool collision, bool isint, int vertexIndex, bool fixedRot) { invoke<void *>(0x6B9BBD38AB0796DF, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isint, vertexIndex, fixedRot); }
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(int entity1, int entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, bool fixedRot, bool p15, bool collision, bool p17, int p18) { invoke<void *>(0xC3675780C92F90F9, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); }
static void PROCESS_ENTITY_ATTACHMENTS(int entity) { invoke<void *>(0xF4080490ADC51C6F, entity); }
static int GET_ENTITY_BONE_INDEX_BY_NAME(int entity, char *boneName) { return invoke<int>(0xFB71170B7E76ACBA, entity, boneName); }
static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(int entity) { invoke<void *>(0xA72CD9CA74A5ECBA, entity); }
static void DELETE_ENTITY(int *entity) { invoke<void *>(0xAE3CBE5BF394C9C9, entity); }
static void DETACH_ENTITY(int entity, bool p1, bool collision) { invoke<void *>(0x961AC54BF0613F5D, entity, p1, collision); }
static void FREEZE_ENTITY_POSITION(int entity, bool toggle) { invoke<void *>(0x428CA6DBD1094446, entity, toggle); }
static void _SET_ENTITY_SOMETHING(int entity, bool toggle) { invoke<void *>(0x3910051CCECDB00C, entity, toggle); }
static bool PLAY_ENTITY_ANIM(int entity, char *animName, char *animDict, float p3, bool loop, bool stayInAnim, bool p6, float delta, int bitset) { return invoke<bool>(0x7FB218262B810701, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); }
static bool PLAY_SYNCHRONIZED_ENTITY_ANIM(int entity, int syncedScene, char *animation, char *propName, float p4, float p5, int p6, float p7) { return invoke<bool>(0xC77720A12FE14A86, entity, syncedScene, animation, propName, p4, p5, p6, p7); }
static bool PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, int p4, int p5, int *p6, int *p7, float p8, float p9, int p10, float p11) { return invoke<bool>(0xB9C54555ED30FBC4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static bool STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, int p4, float p5) { return invoke<bool>(0x11E79CAB7183B6F5, p0, p1, p2, p3, p4, p5); }
static int STOP_ENTITY_ANIM(int entity, char *animation, char *animGroup, float p3) { return invoke<int>(0x28004F88151E03E0, entity, animation, animGroup, p3); }
static bool STOP_SYNCHRONIZED_ENTITY_ANIM(int entity, float p1, bool p2) { return invoke<bool>(0x43D3807C077261E3, entity, p1, p2); }
static bool HAS_ANIM_EVENT_FIRED(int entity, int actionint) { return invoke<bool>(0xEAF4CD9EA3E7E922, entity, actionint); }
static bool FIND_ANIM_EVENT_PHASE(char *animDictionary, char *animName, char *p2, int *p3, int *p4) { return invoke<bool>(0x07F1BE2BCCAA27A7, animDictionary, animName, p2, p3, p4); }
static void SET_ENTITY_ANIM_CURRENT_TIME(int entity, char *animDictionary, char *animName, float time) { invoke<void *>(0x4487C259F0F70977, entity, animDictionary, animName, time); }
static void SET_ENTITY_ANIM_SPEED(int entity, char *animDictionary, char *animName, float speedMultiplier) { invoke<void *>(0x28D1A16553C51776, entity, animDictionary, animName, speedMultiplier); }
static void SET_ENTITY_AS_MISSION_ENTITY(int entity, bool p1, bool p2) { invoke<void *>(0xAD738C3085FE7E11, entity, p1, p2); }
static void SET_ENTITY_AS_NO_LONGER_NEEDED(int *entity) { invoke<void *>(0xB736A491E64A32CF, entity); }
static void SET_PED_AS_NO_LONGER_NEEDED(int *ped) { invoke<void *>(0x2595DD4236549CE3, ped); }
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(int *vehicle) { invoke<void *>(0x629BFA74418D6239, vehicle); }
static void SET_OBJECT_AS_NO_LONGER_NEEDED(int *object) { invoke<void *>(0x3AE22DEB5BA5A3E6, object); }
static void SET_ENTITY_CAN_BE_DAMAGED(int entity, bool toggle) { invoke<void *>(0x1760FFA8AB074D66, entity, toggle); }
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(int entity, bool bCanBeDamaged, int relGroup) { invoke<void *>(0xE22D8FDE858B8119, entity, bCanBeDamaged, relGroup); }
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(int entity, bool toggle) { invoke<void *>(0xD3997889736FD899, entity, toggle); }
static void SET_ENTITY_COLLISION(int entity, bool toggle, bool keepPhysics) { invoke<void *>(0x1A9205C1B9EE827F, entity, toggle, keepPhysics); }
static void SET_ENTITY_COORDS(int entity, float xPos, float yPos, float zPos, bool xAxis, bool yAxis, bool zAxis, bool clearArea) { invoke<void *>(0x06843DA7060A026B, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static void SET_ENTITY_COORDS_NO_OFFSET(int entity, float xPos, float yPos, float zPos, bool xAxis, bool yAxis, bool zAxis) { invoke<void *>(0x239A3351AC1DA385, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); }
static void SET_ENTITY_DYNAMIC(int entity, bool toggle) { invoke<void *>(0x1718DE8E3F2823CA, entity, toggle); }
static void SET_ENTITY_HEADING(int entity, float heading) { invoke<void *>(0x8E2530AA8ADA980E, entity, heading); }
static void SET_ENTITY_HEALTH(int entity, int health) { invoke<void *>(0x6B76DC1F3AE6E6A3, entity, health); }
static void SET_ENTITY_INVINCIBLE(int entity, bool toggle) { invoke<void *>(0x3882114BDE571AD4, entity, toggle); }
static void SET_ENTITY_IS_TARGET_PRIORITY(int entity, bool p1, float p2) { invoke<void *>(0xEA02E132F5C68722, entity, p1, p2); }
static void SET_ENTITY_LIGHTS(int entity, bool toggle) { invoke<void *>(0x7CFBA6A80BDF3874, entity, toggle); }
static void SET_ENTITY_LOAD_COLLISION_FLAG(int entity, bool toggle) { invoke<void *>(0x0DC7CABAB1E9B67E, entity, toggle); }
static bool HAS_COLLISION_LOADED_AROUND_ENTITY(int entity) { return invoke<bool>(0xE9676F61BC0B3321, entity); }
static void SET_ENTITY_MAX_SPEED(int entity, float speed) { invoke<void *>(0x0E46A3FCBDE2A1B1, entity, speed); }
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(int entity, bool toggle) { invoke<void *>(0x79F020FF9EDC0748, entity, toggle); }
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(int entity, bool p1, int p2) { invoke<void *>(0x7022BD828FA0B082, entity, p1, p2); }
static void SET_ENTITY_PROOFS(int entity, bool bulletProof, bool fireProof, bool explosionProof, bool collisionProof, bool meleeProof, bool p6, bool p7, bool drownProof) { invoke<void *>(0xFAEE099C6F890BB8, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); }
static void SET_ENTITY_QUATERNION(int entity, float x, float y, float z, float w) { invoke<void *>(0x77B21BE7AC540F07, entity, x, y, z, w); }
static void SET_ENTITY_RECORDS_COLLISIONS(int entity, bool toggle) { invoke<void *>(0x0A50A1EEDAD01E65, entity, toggle); }
static void SET_ENTITY_ROTATION(int entity, float pitch, float roll, float yaw, int rotationOrder, bool p5) { invoke<void *>(0x8524A8B0171D5E07, entity, pitch, roll, yaw, rotationOrder, p5); }
static void SET_ENTITY_VISIBLE(int entity, bool toggle, bool unk) { invoke<void *>(0xEA1C610A04DB6BBB, entity, toggle, unk); }
static void SET_ENTITY_VELOCITY(int entity, float x, float y, float z) { invoke<void *>(0x1C99BB7B6E96D16F, entity, x, y, z); }
static void SET_ENTITY_HAS_GRAVITY(int entity, bool toggle) { invoke<void *>(0x4A4722448F18EEF5, entity, toggle); }
static void SET_ENTITY_LOD_DIST(int entity, int value) { invoke<void *>(0x5927F96A78577363, entity, value); }
static int GET_ENTITY_LOD_DIST(int entity) { return invoke<int>(0x4159C2762B5791D6, entity); }
static void SET_ENTITY_ALPHA(int entity, int alphaLevel, bool skin) { invoke<void *>(0x44A0870B7E92D7C0, entity, alphaLevel, skin); }
static int GET_ENTITY_ALPHA(int entity) { return invoke<int>(0x5A47B3B5E63E94C6, entity); }
static void RESET_ENTITY_ALPHA(int entity) { invoke<void *>(0x9B1E824FFBB7027A, entity); }
static void SET_ENTITY_ALWAYS_PRERENDER(int entity, bool toggle) { invoke<void *>(0xACAD101E1FB66689, entity, toggle); }
static void SET_ENTITY_RENDER_SCORCHED(int entity, bool toggle) { invoke<void *>(0x730F5F8D3F0F2050, entity, toggle); }
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(int entity, int state) { invoke<void *>(0x57C5DB656185EAC4, entity, state); }
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, int originalModel, int newModel, bool p6) { invoke<void *>(0x92C47782FDA8B2A3, x, y, z, radius, originalModel, newModel, p6); }
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, int originalModel, int newModel, bool p6) { invoke<void *>(0x033C0F9A64E229AE, x, y, z, radius, originalModel, newModel, p6); }
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, int model, bool p5) { invoke<void *>(0x8A97BCA30A0CE478, x, y, z, radius, model, p5); }
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, int model, bool p5) { invoke<void *>(0x3A52AE588830BF7F, x, y, z, radius, model, p5); }
static void REMOVE_MODEL_HIDE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0xD9E3006FB3CBD765, p0, p1, p2, p3, p4, p5); }
static void CREATE_FORCED_OBJECT(float x, float y, float z, int p3, int modelint, bool p5) { invoke<void *>(0x150E808B375A385A, x, y, z, p3, modelint, p5); }
static void REMOVE_FORCED_OBJECT(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x61B6775E83C0DB6F, p0, p1, p2, p3, p4); }
static void SET_ENTITY_NO_COLLISION_ENTITY(int entity1, int entity2, bool unknown) { invoke<void *>(0xA53ED5520C07654A, entity1, entity2, unknown); }
static void SET_ENTITY_MOTION_BLUR(int entity, bool toggle) { invoke<void *>(0x295D82A8559F9150, entity, toggle); }
static void _0xE12ABE5E3A389A6C(int entity, bool p1) { invoke<void *>(0xE12ABE5E3A389A6C, entity, p1); }
static void _0xA80AE305E0A3044F(int entity, bool p1) { invoke<void *>(0xA80AE305E0A3044F, entity, p1); }
static int CREATE_PED(int pedType, int modelint, float x, float y, float z, float heading, bool isNetwork, bool thisScriptCheck) { return invoke<int>(0xD49F9B0955C367DE, pedType, modelint, x, y, z, heading, isNetwork, thisScriptCheck); }
static void DELETE_PED(int *ped) { invoke<void *>(0x9614299DCB53E54B, ped); }
static int CLONE_PED(int ped, float heading, bool isNetwork, bool thisScriptCheck) { return invoke<int>(0xEF29A16337FACADB, ped, heading, isNetwork, thisScriptCheck); }
static void CLONE_PED_TO_TARGET(int ped, int targetint) { invoke<void *>(0xE952D6431689AD9A, ped, targetint); }
static bool IS_PED_IN_VEHICLE(int ped, int vehicle, bool atGetIn) { return invoke<bool>(0xA3EE4A07279BB9DB, ped, vehicle, atGetIn); }
static bool IS_PED_IN_MODEL(int ped, int modelint) { return invoke<bool>(0x796D90EFB19AA332, ped, modelint); }
static bool IS_PED_IN_ANY_VEHICLE(int ped, bool atGetIn) { return invoke<bool>(0x997ABD671D25CA0B, ped, atGetIn); }
static bool IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<bool>(0x16EC4839969F9F5E, x1, y1, z1, x2, y2, z2); }
static bool IS_PED_INJURED(int ped) { return invoke<bool>(0x84A2DD9AC37C35C1, ped); }
static bool IS_PED_HURT(int ped) { return invoke<bool>(0x5983BB449D7FDB12, ped); }
static bool IS_PED_FATALLY_INJURED(int ped) { return invoke<bool>(0xD839450756ED5A80, ped); }
static bool IS_PED_DEAD_OR_DYING(int ped, bool p1) { return invoke<bool>(0x3317DEDB88C95038, ped, p1); }
static bool IS_CONVERSATION_PED_DEAD(int ped) { return invoke<bool>(0xE0A0AEC214B1FABA, ped); }
static bool IS_PED_AIMING_FROM_COVER(int ped) { return invoke<bool>(0x3998B1276A3300E5, ped); }
static bool IS_PED_RELOADING(int ped) { return invoke<bool>(0x24B100C68C645951, ped); }
static bool IS_PED_A_PLAYER(int ped) { return invoke<bool>(0x12534C348C6CB68B, ped); }
static int CREATE_PED_INSIDE_VEHICLE(int vehicle, int pedType, int modelint, int seat, bool isNetwork, bool thisScriptCheck) { return invoke<int>(0x7DD959874C1FD534, vehicle, pedType, modelint, seat, isNetwork, thisScriptCheck); }
static void SET_PED_DESIRED_HEADING(int ped, float heading) { invoke<void *>(0xAA5A7ECE2AA8FE70, ped, heading); }
static void _FREEZE_PED_CAMERA_ROTATION(int ped) { invoke<void *>(0xFF287323B0E2C69A, ped); }
static bool IS_PED_FACING_PED(int ped, int otherint, float angle) { return invoke<bool>(0xD71649DB0A545AA3, ped, otherint, angle); }
static bool IS_PED_IN_MELEE_COMBAT(int ped) { return invoke<bool>(0x4E209B2C1EAD5159, ped); }
static bool IS_PED_STOPPED(int ped) { return invoke<bool>(0x530944F6F4B8A214, ped); }
static bool IS_PED_SHOOTING_IN_AREA(int ped, float x1, float y1, float z1, float x2, float y2, float z2, bool p7, bool p8) { return invoke<bool>(0x7E9DFE24AC1E58EF, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static bool IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool p6, bool p7) { return invoke<bool>(0xA0D3D71EA1086C55, x1, y1, z1, x2, y2, z2, p6, p7); }
static bool IS_PED_SHOOTING(int ped) { return invoke<bool>(0x34616828CD07F1A1, ped); }
static void SET_PED_ACCURACY(int ped, int accuracy) { invoke<void *>(0x7AEFB85C1D49DEB6, ped, accuracy); }
static int GET_PED_ACCURACY(int ped) { return invoke<int>(0x37F4AD56ECBC0CD6, ped); }
static bool IS_PED_MODEL(int ped, int modelint) { return invoke<bool>(0xC9D55B1A358A5BF7, ped, modelint); }
static void EXPLODE_PED_HEAD(int ped, int weaponint) { invoke<void *>(0x2D05CED3A38D0F3A, ped, weaponint); }
static void REMOVE_PED_ELEGANTLY(int *ped) { invoke<void *>(0xAC6D445B994DF95E, ped); }
static void ADD_ARMOUR_TO_PED(int ped, int amount) { invoke<void *>(0x5BA652A0CD14DF2F, ped, amount); }
static void SET_PED_ARMOUR(int ped, int amount) { invoke<void *>(0xCEA04D83135264CC, ped, amount); }
static void SET_PED_INTO_VEHICLE(int ped, int vehicle, int seatIndex) { invoke<void *>(0xF75B0D629E1C063D, ped, vehicle, seatIndex); }
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(int ped, bool toggle) { invoke<void *>(0x3C028C636A414ED9, ped, toggle); }
static bool CAN_CREATE_RANDOM_PED(bool unk) { return invoke<bool>(0x3E8349C08E4B82E4, unk); }
static int CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<int>(0xB4AC7D0CF06BFE8F, posX, posY, posZ); }
static int CREATE_RANDOM_PED_AS_DRIVER(int vehicle, bool returnHandle) { return invoke<int>(0x9B62392B474F44A0, vehicle, returnHandle); }
static bool CAN_CREATE_RANDOM_DRIVER() { return invoke<bool>(0xB8EB95E5B4E56978); }
static bool CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<bool>(0xEACEEDA81751915C); }
static void SET_PED_MOVE_ANIMS_BLEND_OUT(int ped) { invoke<void *>(0x9E8C908F41584ECD, ped); }
static void SET_PED_CAN_BE_DRAGGED_OUT(int ped, bool toggle) { invoke<void *>(0xC1670E958EEE24E5, ped, toggle); }
static void _0xF2BEBCDFAFDAA19E(bool toggle) { invoke<void *>(0xF2BEBCDFAFDAA19E, toggle); }
static bool IS_PED_MALE(int ped) { return invoke<bool>(0x6D9F5FAA7488BA46, ped); }
static bool IS_PED_HUMAN(int ped) { return invoke<bool>(0xB980061DA992779D, ped); }
static int GET_VEHICLE_PED_IS_IN(int ped, bool lastint) { return invoke<int>(0x9A9112A0FE9A4713, ped, lastint); }
static void RESET_PED_LAST_VEHICLE(int ped) { invoke<void *>(0xBB8DE8CF6A8DD8BB, ped); }
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<void *>(0x95E3D6257B166CF2, multiplier); }
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<void *>(0x7A556143A1C03898, p0, p1); }
static void _0x5A7F62FDA59759BD() { invoke<void *>(0x5A7F62FDA59759BD); }
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<void *>(0x5086C7843552CF85, x, y, z); }
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<void *>(0xEE01041D559983EA, x1, y1, z1, x2, y2, z2); }
static void CLEAR_PED_NON_CREATION_AREA() { invoke<void *>(0x2E05208086BA0651); }
static void _0x4759CC730F947C81() { invoke<void *>(0x4759CC730F947C81); }
static bool IS_PED_ON_MOUNT(int ped) { return invoke<bool>(0x460BC76A0E10655E, ped); }
static int GET_MOUNT(int ped) { return invoke<int>(0xE7E11B8DCBED1058, ped); }
static bool IS_PED_ON_VEHICLE(int ped) { return invoke<bool>(0x67722AEB798E5FAB, ped); }
static bool IS_PED_ON_SPECIFIC_VEHICLE(int ped, int vehicle) { return invoke<bool>(0xEC5F66E459AF3BB2, ped, vehicle); }
static void SET_PED_MONEY(int ped, int amount) { invoke<void *>(0xA9C8960E8684C1B5, ped, amount); }
static int GET_PED_MONEY(int ped) { return invoke<int>(0x3F69145BBA87BAE7, ped); }
static void _0xFF4803BC019852D9(float p0, int p1) { invoke<void *>(0xFF4803BC019852D9, p0, p1); }
static void _0x6B0E6172C9A4D902(bool p0) { invoke<void *>(0x6B0E6172C9A4D902, p0); }
static void _0x9911F4A24485F653(bool p0) { invoke<void *>(0x9911F4A24485F653, p0); }
static void SET_PED_SUFFERS_CRITICAL_HITS(int ped, bool toggle) { invoke<void *>(0xEBD76F2359F190AC, ped, toggle); }
static void _0xAFC976FD0580C7B3(int ped, bool toggle) { invoke<void *>(0xAFC976FD0580C7B3, ped, toggle); }
static bool IS_PED_SITTING_IN_VEHICLE(int ped, int vehicle) { return invoke<bool>(0xA808AA1D79230FC2, ped, vehicle); }
static bool IS_PED_SITTING_IN_ANY_VEHICLE(int ped) { return invoke<bool>(0x826AA586EDB9FEF8, ped); }
static bool IS_PED_ON_FOOT(int ped) { return invoke<bool>(0x01FEE67DB37F59B2, ped); }
static bool IS_PED_ON_ANY_BIKE(int ped) { return invoke<bool>(0x94495889E22C6479, ped); }
static bool IS_PED_PLANTING_BOMB(int ped) { return invoke<bool>(0xC70B5FAE151982D8, ped); }
static Vector3 GET_DEAD_PED_PICKUP_COORDS(int ped, float p1, float p2) { return invoke<Vector3>(0xCD5003B097200F36, ped, p1, p2); }
static bool IS_PED_IN_ANY_BOAT(int ped) { return invoke<bool>(0x2E0E1C2B4F6CB339, ped); }
static bool IS_PED_IN_ANY_SUB(int ped) { return invoke<bool>(0xFBFC01CCFB35D99E, ped); }
static bool IS_PED_IN_ANY_HELI(int ped) { return invoke<bool>(0x298B91AE825E5705, ped); }
static bool IS_PED_IN_ANY_PLANE(int ped) { return invoke<bool>(0x5FFF4CFC74D8FB80, ped); }
static bool IS_PED_IN_FLYING_VEHICLE(int ped) { return invoke<bool>(0x9134873537FA419C, ped); }
static void SET_PED_DIES_IN_WATER(int ped, bool toggle) { invoke<void *>(0x56CEF0AC79073BDE, ped, toggle); }
static void SET_PED_DIES_IN_SINKING_VEHICLE(int ped, bool toggle) { invoke<void *>(0xD718A22995E2B4BC, ped, toggle); }
static int GET_PED_ARMOUR(int ped) { return invoke<int>(0x9483AF821605B1D8, ped); }
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(int ped, bool toggle) { invoke<void *>(0xEDF4079F9D54C9A1, ped, toggle); }
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(int ped, bool toggle) { invoke<void *>(0xC7EF1BA83230BA07, ped, toggle); }
static bool GET_PED_LAST_DAMAGE_BONE(int ped, int *outBone) { return invoke<bool>(0xD75960F6BD9EA49C, ped, outBone); }
static void CLEAR_PED_LAST_DAMAGE_BONE(int ped) { invoke<void *>(0x8EF6B7AC68E2F01B, ped); }
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<void *>(0x1B1E2A40A65B8521, value); }
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<void *>(0xEA16670E7BA4743C); }
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<void *>(0x66460DEDDD417254, modifier); }
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<void *>(0x46E56A7CD1D63C3F); }
static void _0x2F3C3D9F50681DE4(int p0, bool p1) { invoke<void *>(0x2F3C3D9F50681DE4, p0, p1); }
static void SET_PED_CAN_BE_TARGETTED(int ped, bool toggle) { invoke<void *>(0x63F58F7C80513AAD, ped, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(int ped, int team, bool toggle) { invoke<void *>(0xBF1CA77833E58F2C, ped, team, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(int ped, int player, bool toggle) { invoke<void *>(0x66B57B72E0836A76, ped, player, toggle); }
static void _0x061CB768363D6424(int p0, bool p1) { invoke<void *>(0x061CB768363D6424, p0, p1); }
static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(int p0, bool p1) { invoke<void *>(0xFD325494792302D7, p0, p1); }
static bool IS_PED_IN_ANY_POLICE_VEHICLE(int ped) { return invoke<bool>(0x0BD04E29640C9C12, ped); }
static void FORCE_PED_TO_OPEN_PARACHUTE(int ped) { invoke<void *>(0x16E42E800B472221, ped); }
static bool IS_PED_IN_PARACHUTE_FREE_FALL(int ped) { return invoke<bool>(0x7DCE8BDA0F1C1200, ped); }
static bool IS_PED_FALLING(int ped) { return invoke<bool>(0xFB92A102F1C4DFA3, ped); }
static bool IS_PED_JUMPING(int ped) { return invoke<bool>(0xCEDABC5900A0BF97, ped); }
static bool IS_PED_CLIMBING(int ped) { return invoke<bool>(0x53E8CB4F48BFE623, ped); }
static bool IS_PED_VAULTING(int ped) { return invoke<bool>(0x117C70D1F5730B5E, ped); }
static bool IS_PED_DIVING(int ped) { return invoke<bool>(0x5527B8246FEF9B11, ped); }
static bool IS_PED_JUMPING_OUT_OF_VEHICLE(int ped) { return invoke<bool>(0x433DDFFE2044B636, ped); }
static int GET_PED_PARACHUTE_STATE(int ped) { return invoke<int>(0x79CFD9827CC979B6, ped); }
static int GET_PED_PARACHUTE_LANDING_TYPE(int ped) { return invoke<int>(0x8B9F1FC6AE8166C0, ped); }
static void SET_PED_PARACHUTE_TINT_INDEX(int ped, int tintIndex) { invoke<void *>(0x333FC8DB079B7186, ped, tintIndex); }
static void GET_PED_PARACHUTE_TINT_INDEX(int ped, int *outTintIndex) { invoke<void *>(0xEAF5F7E5AE7C6C9D, ped, outTintIndex); }
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(int ped, int p1) { invoke<void *>(0xE88DA0751C22A2AD, ped, p1); }
static void SET_PED_DUCKING(int ped, bool toggle) { invoke<void *>(0x030983CA930B692D, ped, toggle); }
static bool IS_PED_DUCKING(int ped) { return invoke<bool>(0xD125AE748725C6BC, ped); }
static bool IS_PED_IN_ANY_TAXI(int ped) { return invoke<bool>(0x6E575D6A898AB852, ped); }
static void SET_PED_ID_RANGE(int ped, float value) { invoke<void *>(0xF107E836A70DCE05, ped, value); }
static void _0x52D59AB61DDC05DD(int ped, bool p1) { invoke<void *>(0x52D59AB61DDC05DD, ped, p1); }
static void _0xEC4B4B3B9908052A(int ped, float unk) { invoke<void *>(0xEC4B4B3B9908052A, ped, unk); }
static void _0x733C87D4CE22BEA2(int p0) { invoke<void *>(0x733C87D4CE22BEA2, p0); }
static void SET_PED_SEEING_RANGE(int ped, float value) { invoke<void *>(0xF29CF591C4BF6CEE, ped, value); }
static void SET_PED_HEARING_RANGE(int ped, float value) { invoke<void *>(0x33A8F7F7D5F7F33C, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(int ped, float value) { invoke<void *>(0x2DB492222FB21E26, ped, value); }
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(int ped, float value) { invoke<void *>(0x70793BDCA1E854D4, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(int ped, float angle) { invoke<void *>(0x7A276EB2C224D70F, ped, angle); }
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(int ped, float angle) { invoke<void *>(0x78D0B67629D75856, ped, angle); }
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(int ped, float range) { invoke<void *>(0x9C74B0BC831B753A, ped, range); }
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(int ped, float angle) { invoke<void *>(0x3B6405E8AB34A907, ped, angle); }
static void SET_PED_STEALTH_MOVEMENT(int ped, bool p1, char *action) { invoke<void *>(0x88CBB5CEB96B7BD2, ped, p1, action); }
static bool GET_PED_STEALTH_MOVEMENT(int ped) { return invoke<bool>(0x7C2AC9CA66575FBF, ped); }
static int CREATE_GROUP(int unused) { return invoke<int>(0x90370EBE0FEE1A3D, unused); }
static void SET_PED_AS_GROUP_LEADER(int ped, int groupId) { invoke<void *>(0x2A7819605465FBCE, ped, groupId); }
static void SET_PED_AS_GROUP_MEMBER(int ped, int groupId) { invoke<void *>(0x9F3480FE65DB31B5, ped, groupId); }
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(int pedHandle, int groupHandle, bool toggle) { invoke<void *>(0x2E2F4240B3F24647, pedHandle, groupHandle, toggle); }
static void REMOVE_GROUP(int groupId) { invoke<void *>(0x8EB2F69076AF7053, groupId); }
static void REMOVE_PED_FROM_GROUP(int ped) { invoke<void *>(0xED74007FFB146BC2, ped); }
static bool IS_PED_GROUP_MEMBER(int ped, int groupId) { return invoke<bool>(0x9BB01E3834671191, ped, groupId); }
static bool IS_PED_HANGING_ON_TO_VEHICLE(int ped) { return invoke<bool>(0x1C86D8AEF8254B78, ped); }
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<void *>(0x4102C7858CFEE4E4, groupHandle, separationRange); }
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(int ped, int ms) { invoke<void *>(0xFA0675AB151073FA, ped, ms); }
static bool IS_PED_PRONE(int ped) { return invoke<bool>(0xD6A86331A537A7B9, ped); }
static bool IS_PED_IN_COMBAT(int ped, int target) { return invoke<bool>(0x4859F1FC66A6278E, ped, target); }
static bool CAN_PED_IN_COMBAT_SEE_TARGET(int ped, int target) { return invoke<bool>(0xEAD42DE3610D0721, ped, target); }
static bool IS_PED_DOING_DRIVEBY(int ped) { return invoke<bool>(0xB2C086CC1BF8F2BF, ped); }
static bool IS_PED_JACKING(int ped) { return invoke<bool>(0x4AE4FF911DFB61DA, ped); }
static bool IS_PED_BEING_JACKED(int ped) { return invoke<bool>(0x9A497FE2DF198913, ped); }
static bool IS_PED_BEING_STUNNED(int ped, int p1) { return invoke<bool>(0x4FBACCE3B4138EE8, ped, p1); }
static int GET_PEDS_JACKER(int ped) { return invoke<int>(0x9B128DC36C1E04CF, ped); }
static int GET_JACK_TARGET(int ped) { return invoke<int>(0x5486A79D9FBD342D, ped); }
static bool IS_PED_FLEEING(int ped) { return invoke<bool>(0xBBCCE00B381F8482, ped); }
static bool IS_PED_IN_COVER(int ped, bool exceptUseWeapon) { return invoke<bool>(0x60DFD0691A170B88, ped, exceptUseWeapon); }
static bool IS_PED_IN_COVER_FACING_LEFT(int ped) { return invoke<bool>(0x845333B3150583AB, ped); }
static bool IS_PED_GOING_INTO_COVER(int ped) { return invoke<bool>(0x9F65DBC537E59AD5, ped); }
static int SET_PED_PINNED_DOWN(int ped, bool pinned, int i) { return invoke<int>(0xAAD6D1ACF08F4612, ped, pinned, i); }
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(int ped) { return invoke<int>(0x6F4C85ACD641BCD2, ped); }
static int GET_VEHICLE_PED_IS_TRYING_TO_ENTER(int ped) { return invoke<int>(0x814FA8BE5449445D, ped); }
static int GET_PED_SOURCE_OF_DEATH(int ped) { return invoke<int>(0x93C8B64DEB84728C, ped); }
static int GET_PED_CAUSE_OF_DEATH(int ped) { return invoke<int>(0x16FFE42AB2D2DC59, ped); }
static int _0x5407B7288D0478B7(int p0) { return invoke<int>(0x5407B7288D0478B7, p0); }
static int _0x336B3D200AB007CB(int p0, float p1, float p2, float p3, float p4) { return invoke<int>(0x336B3D200AB007CB, p0, p1, p2, p3, p4); }
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(int ped, int hash) { invoke<void *>(0xADB3F206518799E8, ped, hash); }
static void SET_PED_RELATIONSHIP_GROUP_HASH(int ped, int hash) { invoke<void *>(0xC80A74AC829DDD92, ped, hash); }
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, int group1, int group2) { invoke<void *>(0xBF25EB89375A37AD, relationship, group1, group2); }
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, int group1, int group2) { invoke<void *>(0x5E29243FB56FC6D4, relationship, group1, group2); }
static int ADD_RELATIONSHIP_GROUP(char *name, int *groupint) { return invoke<int>(0xF372BC22FCB88606, name, groupint); }
static void REMOVE_RELATIONSHIP_GROUP(int groupint) { invoke<void *>(0xB6BA2444AB393DA2, groupint); }
static int GET_RELATIONSHIP_BETWEEN_PEDS(int ped1, int ped2) { return invoke<int>(0xEBA5AD3A0EAF7121, ped1, ped2); }
static int GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(int ped) { return invoke<int>(0x42FDD0F017B1E38E, ped); }
static int GET_PED_RELATIONSHIP_GROUP_HASH(int ped) { return invoke<int>(0x7DBDD04862D95F04, ped); }
static int GET_RELATIONSHIP_BETWEEN_GROUPS(int group1, int group2) { return invoke<int>(0x9E6B70061662AE5C, group1, group2); }
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(int ped, bool toggle) { invoke<void *>(0x4328652AE5769C71, ped, toggle); }
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(int ped, float radius, int maxFriends) { invoke<void *>(0x112942C6E708F70B, ped, radius, maxFriends); }
static bool IS_PED_RESPONDING_TO_EVENT(int ped, int event) { return invoke<bool>(0x625B774D75C87068, ped, event); }
static void SET_PED_FIRING_PATTERN(int ped, int patternint) { invoke<void *>(0x9AC577F5A12AD8A9, ped, patternint); }
static void SET_PED_SHOOT_RATE(int ped, int shootRate) { invoke<void *>(0x614DA022990752DC, ped, shootRate); }
static void SET_COMBAT_FLOAT(int ped, int combatType, float p2) { invoke<void *>(0xFF41B4B141ED981C, ped, combatType, p2); }
static float GET_COMBAT_FLOAT(int ped, int p1) { return invoke<float>(0x52DFF8A10508090A, ped, p1); }
static void GET_GROUP_SIZE(int groupID, int *unknown, int *sizeInMembers) { invoke<void *>(0x8DE69FE35CA09A45, groupID, unknown, sizeInMembers); }
static bool DOES_GROUP_EXIST(int groupId) { return invoke<bool>(0x7C6B0C22F9F40BBE, groupId); }
static int GET_PED_GROUP_INDEX(int ped) { return invoke<int>(0xF162E133B4E7A675, ped); }
static bool IS_PED_IN_GROUP(int ped) { return invoke<bool>(0x5891CAC5D4ACFF74, ped); }
static int GET_PLAYER_PED_IS_FOLLOWING(int ped) { return invoke<int>(0x6A3975DEA89F9A17, ped); }
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<void *>(0xCE2F5FC3AF7E8C1E, groupId, formationType); }
static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<void *>(0x1D9D45004C28C916, groupId, p1, p2, p3); }
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<void *>(0x63DAB4CCB3273205, groupHandle); }
static int GET_VEHICLE_PED_IS_USING(int ped) { return invoke<int>(0x6094AD011A2EA87D, ped); }
static int SET_EXCLUSIVE_PHONE_RELATIONSHIPS(int ped) { return invoke<int>(0xF92691AED837A5FC, ped); }
static void SET_PED_GRAVITY(int ped, bool toggle) { invoke<void *>(0x9FF447B6B6AD960A, ped, toggle); }
static void APPLY_DAMAGE_TO_PED(int ped, int damageAmount, bool p2) { invoke<void *>(0x697157CED63F18D4, ped, damageAmount, p2); }
static void SET_PED_ALLOWED_TO_DUCK(int ped, bool toggle) { invoke<void *>(0xDA1F1B7BE1A8766F, ped, toggle); }
static void SET_PED_NEVER_LEAVES_GROUP(int ped, bool toggle) { invoke<void *>(0x3DBFC55D5C9BB447, ped, toggle); }
static int GET_PED_TYPE(int ped) { return invoke<int>(0xFF059E1E4C01E63C, ped); }
static void SET_PED_AS_COP(int ped, bool toggle) { invoke<void *>(0xBB03C38DD3FB7FFD, ped, toggle); }
static void SET_PED_MAX_HEALTH(int ped, int value) { invoke<void *>(0xF5F6378C4F3419D3, ped, value); }
static int GET_PED_MAX_HEALTH(int ped) { return invoke<int>(0x4700A416E8324EF3, ped); }
static void SET_PED_MAX_TIME_IN_WATER(int ped, float value) { invoke<void *>(0x43C851690662113D, ped, value); }
static void SET_PED_MAX_TIME_UNDERWATER(int ped, float value) { invoke<void *>(0x6BA428C528D9E522, ped, value); }
static void _0x2735233A786B1BEF(int ped, float p1) { invoke<void *>(0x2735233A786B1BEF, ped, p1); }
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(int ped, int state) { invoke<void *>(0x7A6535691B477C48, ped, state); }
static bool CAN_KNOCK_PED_OFF_VEHICLE(int ped) { return invoke<bool>(0x51AC07A44D4F5B8A, ped); }
static void KNOCK_PED_OFF_VEHICLE(int ped) { invoke<void *>(0x45BBCBA77C29A841, ped); }
static void SET_PED_COORDS_NO_GANG(int ped, float posX, float posY, float posZ) { invoke<void *>(0x87052FE446E07247, ped, posX, posY, posZ); }
static int GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<int>(0x51455483CF23ED97, groupID, memberNumber); }
static void SET_PED_KEEP_TASK(int ped, bool toggle) { invoke<void *>(0x971D38760FBC02EF, ped, toggle); }
static void _0x49E50BDB8BA4DAB2(int ped, bool p1) { invoke<void *>(0x49E50BDB8BA4DAB2, ped, p1); }
static bool IS_PED_SWIMMING(int ped) { return invoke<bool>(0x9DE327631295B4C2, ped); }
static bool IS_PED_SWIMMING_UNDER_WATER(int ped) { return invoke<bool>(0xC024869A53992F34, ped); }
static void SET_PED_COORDS_KEEP_VEHICLE(int ped, float posX, float posY, float posZ) { invoke<void *>(0x9AFEFF481A85AB2E, ped, posX, posY, posZ); }
static void SET_PED_DIES_IN_VEHICLE(int ped, bool toggle) { invoke<void *>(0x2A30922C90C9B42C, ped, toggle); }
static void SET_CREATE_RANDOM_COPS(bool toggle) { invoke<void *>(0x102E68B2024D536D, toggle); }
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(bool toggle) { invoke<void *>(0x8A4986851C4EF6E7, toggle); }
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(bool toggle) { invoke<void *>(0x444CB7D7DBE6973D, toggle); }
static bool CAN_CREATE_RANDOM_COPS() { return invoke<bool>(0x5EE2CAFF7F17770D); }
static void SET_PED_AS_ENEMY(int ped, bool toggle) { invoke<void *>(0x02A0C9720B854BFA, ped, toggle); }
static void SET_PED_CAN_SMASH_GLASS(int ped, bool p1, bool p2) { invoke<void *>(0x1CCE141467FF42A2, ped, p1, p2); }
static bool IS_PED_IN_ANY_TRAIN(int ped) { return invoke<bool>(0x6F972C1AB75A1ED0, ped); }
static bool IS_PED_GETTING_INTO_A_VEHICLE(int ped) { return invoke<bool>(0xBB062B2B5722478E, ped); }
static bool IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(int ped) { return invoke<bool>(0x44D28D5DDFE5F68C, ped); }
static void SET_ENABLE_HANDCUFFS(int ped, bool toggle) { invoke<void *>(0xDF1AF8B5D56542FA, ped, toggle); }
static void SET_ENABLE_BOUND_ANKLES(int ped, bool toggle) { invoke<void *>(0xC52E0F855C58FC2E, ped, toggle); }
static void SET_ENABLE_SCUBA(int ped, bool toggle) { invoke<void *>(0xF99F62004024D506, ped, toggle); }
static void SET_CAN_ATTACK_FRIENDLY(int ped, bool toggle, bool p2) { invoke<void *>(0xB3B1CB349FF9C75D, ped, toggle, p2); }
static int GET_PED_ALERTNESS(int ped) { return invoke<int>(0xF6AA118530443FD2, ped); }
static void SET_PED_ALERTNESS(int ped, int value) { invoke<void *>(0xDBA71115ED9941A6, ped, value); }
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(int ped, bool toggle) { invoke<void *>(0xBC0ED94165A48BC2, ped, toggle); }
static void SET_PED_MOVEMENT_CLIPSET(int ped, char *clipSet, float p2) { invoke<void *>(0xAF8A94EDE7712BEF, ped, clipSet, p2); }
static void RESET_PED_MOVEMENT_CLIPSET(int ped, float p1) { invoke<void *>(0xAA74EC0CB0AAEA2C, ped, p1); }
static void SET_PED_STRAFE_CLIPSET(int ped, char *clipSet) { invoke<void *>(0x29A28F3F8CF6D854, ped, clipSet); }
static void RESET_PED_STRAFE_CLIPSET(int ped) { invoke<void *>(0x20510814175EA477, ped); }
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(int ped, char *clipSet) { invoke<void *>(0x2622E35B77D3ACA2, ped, clipSet); }
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(int ped) { invoke<void *>(0x97B0DB5B4AA74E77, ped); }
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(int ped, char *clipset) { invoke<void *>(0xED34AB6C5CB36520, ped, clipset); }
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(int ped) { invoke<void *>(0x4AFE3690D7E0B5AC, ped); }
static void SET_PED_IN_VEHICLE_CONTEXT(int ped, int context) { invoke<void *>(0x530071295899A8C6, ped, context); }
static void RESET_PED_IN_VEHICLE_CONTEXT(int ped) { invoke<void *>(0x22EF8FF8778030EB, ped); }
static bool IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(int ped, char *animDict, char *anim) { return invoke<bool>(0x6EC47A344923E1ED, ped, animDict, anim); }
static void SET_PED_ALTERNATE_WALK_ANIM(int ped, char *animDict, char *animName, float p3, bool p4) { invoke<void *>(0x6C60394CB4F75E9A, ped, animDict, animName, p3, p4); }
static void CLEAR_PED_ALTERNATE_WALK_ANIM(int ped, float p1) { invoke<void *>(0x8844BBFCE30AA9E9, ped, p1); }
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(int ped, int stance, char *animDictionary, char *animationName, float p4, bool p5) { invoke<void *>(0x90A43CC281FFAB46, ped, stance, animDictionary, animationName, p4, p5); }
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(int ped, int stance, float p2) { invoke<void *>(0xD8D19675ED5FBDCE, ped, stance, p2); }
static void SET_PED_GESTURE_GROUP(int ped, char *animGroupGesture) { invoke<void *>(0xDDF803377F94AAA8, ped, animGroupGesture); }
static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(char *animDict, char *animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xBE22B26DD764C040, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(char *animDict, char *animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0x4B805E6046EE9E47, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static int GET_PED_DRAWABLE_VARIATION(int ped, int componentId) { return invoke<int>(0x67F3780DD425D4FC, ped, componentId); }
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(int ped, int componentId) { return invoke<int>(0x27561561732A7842, ped, componentId); }
static int GET_PED_TEXTURE_VARIATION(int ped, int componentId) { return invoke<int>(0x04A355E041E004E6, ped, componentId); }
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(int ped, int componentId, int drawableId) { return invoke<int>(0x8F7156A3142A6BAD, ped, componentId, drawableId); }
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(int ped, int propId) { return invoke<int>(0x5FAF9754E789FB47, ped, propId); }
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(int ped, int propId, int drawableId) { return invoke<int>(0xA6E7F1CEB523E171, ped, propId, drawableId); }
static int GET_PED_PALETTE_VARIATION(int ped, int componentId) { return invoke<int>(0xE3DD5F2A84B42281, ped, componentId); }
static bool IS_PED_COMPONENT_VARIATION_VALID(int ped, int componentId, int drawableId, int textureId) { return invoke<bool>(0xE825F6B6CEA7671D, ped, componentId, drawableId, textureId); }
static void SET_PED_COMPONENT_VARIATION(int ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<void *>(0x262B14F48D29DE80, ped, componentId, drawableId, textureId, paletteId); }
static void SET_PED_RANDOM_COMPONENT_VARIATION(int ped, bool p1) { invoke<void *>(0xC8A9481A01E63C28, ped, p1); }
static void SET_PED_RANDOM_PROPS(int ped) { invoke<void *>(0xC44AA05345C992C6, ped); }
static void SET_PED_DEFAULT_COMPONENT_VARIATION(int ped) { invoke<void *>(0x45EEE61580806D63, ped); }
static void SET_PED_BLEND_FROM_PARENTS(int ped, int p1, int p2, float p3, float p4) { invoke<void *>(0x137BBD05230DB22D, ped, p1, p2, p3, p4); }
static void SET_PED_HEAD_BLEND_DATA(int ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, bool isParent) { invoke<void *>(0x9414E18B9434C2FE, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
static void UPDATE_PED_HEAD_BLEND_DATA(int ped, float shapeMix, float skinMix, float thirdMix) { invoke<void *>(0x723538F61C647C5A, ped, shapeMix, skinMix, thirdMix); }
static void SET_PED_HEAD_OVERLAY(int ped, int overlayID, int index, float opacity) { invoke<void *>(0x48F44967FA05CC1E, ped, overlayID, index, opacity); }
static int _GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) { return invoke<int>(0xCF1CE768BB43480E, overlayID); }
static bool HAS_PED_HEAD_BLEND_FINISHED(int ped) { return invoke<bool>(0x654CD0A825161131, ped); }
static void _0x4668D80430D6C299(int ped) { invoke<void *>(0x4668D80430D6C299, ped); }
static void _0xCC9682B8951C5229(int ped, int r, int g, int b, int p4) { invoke<void *>(0xCC9682B8951C5229, ped, r, g, b, p4); }
static void _0xA21C118553BBDF02(int p0) { invoke<void *>(0xA21C118553BBDF02, p0); }
static int _GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) { return invoke<int>(0x68D353AB88B97E0C, type); }
static int _GET_NUM_PARENT_PEDS_OF_TYPE(int type) { return invoke<int>(0x5EF37013A6539C9D, type); }
static int _0x39D55A620FCB6A3A(int ped, int p1, int drawableId, int textureId) { return invoke<int>(0x39D55A620FCB6A3A, ped, p1, drawableId, textureId); }
static bool _0x66680A92700F43DF(int p0) { return invoke<bool>(0x66680A92700F43DF, p0); }
static void _0x5AAB586FFEC0FD96(int p0) { invoke<void *>(0x5AAB586FFEC0FD96, p0); }
static bool _IS_PED_PROP_VALID(int ped, int componentId, int drawableId, int TextureId) { return invoke<bool>(0x2B16A3BFF1FBCE49, ped, componentId, drawableId, TextureId); }
static bool _0x784002A632822099(int ped) { return invoke<bool>(0x784002A632822099, ped); }
static void _0xF79F9DEF0AADE61A(int ped) { invoke<void *>(0xF79F9DEF0AADE61A, ped); }
static int GET_PED_PROP_INDEX(int ped, int componentId) { return invoke<int>(0x898CC20EA75BACD8, ped, componentId); }
static void SET_PED_PROP_INDEX(int ped, int componentId, int drawableId, int TextureId, bool attach) { invoke<void *>(0x93376B65A266EB5F, ped, componentId, drawableId, TextureId, attach); }
static void KNOCK_OFF_PED_PROP(int ped, bool p1, bool p2, bool p3, bool p4) { invoke<void *>(0x6FD7816A36615F48, ped, p1, p2, p3, p4); }
static void CLEAR_PED_PROP(int ped, int propId) { invoke<void *>(0x0943E5B8E078E76E, ped, propId); }
static void CLEAR_ALL_PED_PROPS(int ped) { invoke<void *>(0xCD8A7537A9B52F06, ped); }
static int GET_PED_PROP_TEXTURE_INDEX(int ped, int componentId) { return invoke<int>(0xE131A28626F81AB2, ped, componentId); }
static void _0x1280804F7CFD2D6C(int p0) { invoke<void *>(0x1280804F7CFD2D6C, p0); }
static void _0xB50EB4CCB29704AC(int p0) { invoke<void *>(0xB50EB4CCB29704AC, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(int ped, bool toggle) { invoke<void *>(0x9F8AA94D6D97DBF4, ped, toggle); }
static void SET_PED_BOUNDS_ORIENTATION(int ped, float p1, float p2, float p3, float p4, float p5) { invoke<void *>(0x4F5F651ACCC9C4CF, ped, p1, p2, p3, p4, p5); }
static void REGISTER_TARGET(int ped, int target) { invoke<void *>(0x2F25D9AEFA34FBA2, ped, target); }
static void REGISTER_HATED_TARGETS_AROUND_PED(int ped, float radius) { invoke<void *>(0x9222F300BF8354FE, ped, radius); }
static int GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<int>(0x876046A8E3A4B71C, x, y, z, xRadius, yRadius, zRadius, pedType); }
static bool GET_CLOSEST_PED(float x, float y, float z, float radius, bool p4, bool p5, int *outint, bool p7, bool p8, int pedType) { return invoke<bool>(0xC33AB876A77F8164, x, y, z, radius, p4, p5, outint, p7, p8, pedType); }
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(bool value) { invoke<void *>(0x14F19A8782C8071E, value); }
static bool _0x03EA03AF85A85CB7(int ped, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8) { return invoke<bool>(0x03EA03AF85A85CB7, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0xDED5AF5A0EA4B297(int driver, float p1) { invoke<void *>(0xDED5AF5A0EA4B297, driver, p1); }
static void SET_DRIVER_ABILITY(int driver, float ability) { invoke<void *>(0xB195FFA8042FC5C3, driver, ability); }
static void SET_DRIVER_AGGRESSIVENESS(int driver, float aggressiveness) { invoke<void *>(0xA731F608CA104E3C, driver, aggressiveness); }
static bool CAN_PED_RAGDOLL(int ped) { return invoke<bool>(0x128F79EDCECE4FD5, ped); }
static bool SET_PED_TO_RAGDOLL(int ped, int time1, int time2, int ragdollType, bool p4, bool p5, bool p6) { return invoke<bool>(0xAE99FB955581844A, ped, time1, time2, ragdollType, p4, p5, p6); }
static bool SET_PED_TO_RAGDOLL_WITH_FALL(int ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<bool>(0xD76632D99E4966C8, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); }
static void SET_PED_RAGDOLL_ON_COLLISION(int ped, bool toggle) { invoke<void *>(0xF0A4F1BBF4FA7497, ped, toggle); }
static bool IS_PED_RAGDOLL(int ped) { return invoke<bool>(0x47E4E977581C5B55, ped); }
static bool IS_PED_RUNNING_RAGDOLL_TASK(int ped) { return invoke<bool>(0xE3B6097CC25AA69E, ped); }
static void SET_PED_RAGDOLL_FORCE_FALL(int ped) { invoke<void *>(0x01F6594B923B9251, ped); }
static void RESET_PED_RAGDOLL_TIMER(int ped) { invoke<void *>(0x9FA4664CF62E47E8, ped); }
static void SET_PED_CAN_RAGDOLL(int ped, bool toggle) { invoke<void *>(0xB128377056A54E2A, ped, toggle); }
static bool IS_PED_RUNNING_MOBILE_PHONE_TASK(int ped) { return invoke<bool>(0x2AFE52F782F25775, ped); }
static bool _0xA3F3564A5B3646C0(int ped) { return invoke<bool>(0xA3F3564A5B3646C0, ped); }
static void _SET_PED_RAGDOLL_BLOCKING_FLAGS(int ped, int flags) { invoke<void *>(0x26695EC767728D84, ped, flags); }
static void _RESET_PED_RAGDOLL_BLOCKING_FLAGS(int ped, int flags) { invoke<void *>(0xD86D101FCFD00A4B, ped, flags); }
static void SET_PED_ANGLED_DEFENSIVE_AREA(int ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9) { invoke<void *>(0xC7F76DF27A5045A1, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_SPHERE_DEFENSIVE_AREA(int ped, float x, float y, float z, float radius, bool p5, bool p6) { invoke<void *>(0x9D3151A373974804, ped, x, y, z, radius, p5, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(int ped, int target, float xOffset, float yOffset, float zOffset, float radius, bool p6) { invoke<void *>(0xF9B8F91AAD3B953E, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void _0xE4723DB6E736CCFF(int ped, int p1, float p2, float p3, float p4, float p5, bool p6) { invoke<void *>(0xE4723DB6E736CCFF, ped, p1, p2, p3, p4, p5, p6); }
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(int ped, int attachint, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10) { invoke<void *>(0x4EF47FE21698A8B6, ped, attachint, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_PED_DEFENSIVE_AREA_DIRECTION(int ped, float p1, float p2, float p3, bool p4) { invoke<void *>(0x413C6C763A4AFFAD, ped, p1, p2, p3, p4); }
static void REMOVE_PED_DEFENSIVE_AREA(int ped, bool toggle) { invoke<void *>(0x74D4E028107450A9, ped, toggle); }
static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(int ped, bool p1) { return invoke<Vector3>(0x3C06B8786DD94CD1, ped, p1); }
static void SET_PED_PREFERRED_COVER_SET(int ped, int itemSet) { invoke<void *>(0x8421EB4DA7E391B9, ped, itemSet); }
static void REMOVE_PED_PREFERRED_COVER_SET(int ped) { invoke<void *>(0xFDDB234CF74073D9, ped); }
static void REVIVE_INJURED_PED(int ped) { invoke<void *>(0x8D8ACD8388CD99CE, ped); }
static void RESURRECT_PED(int ped) { invoke<void *>(0x71BC8E838B9C6035, ped); }
static void SET_PED_NAME_DEBUG(int ped, char *name) { invoke<void *>(0x98EFA132A4117BE1, ped, name); }
static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(int ped, bool worldSpace) { return invoke<Vector3>(0xE0AF41401ADF87E3, ped, worldSpace); }
static void SET_PED_DIES_WHEN_INJURED(int ped, bool toggle) { invoke<void *>(0x5BA7919BED300023, ped, toggle); }
static void SET_PED_ENABLE_WEAPON_BLOCKING(int ped, bool toggle) { invoke<void *>(0x97A790315D3831FD, ped, toggle); }
static void _0xF9ACF4A08098EA25(int ped, bool p1) { invoke<void *>(0xF9ACF4A08098EA25, ped, p1); }
static void RESET_PED_VISIBLE_DAMAGE(int ped) { invoke<void *>(0x3AC1F7B898F30C05, ped); }
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(int ped, int p1, float p2, float p3, int p4) { invoke<void *>(0x816F6981C60BF53B, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD(int ped, int boneIndex, float xRot, float yRot, float zRot, char *woundType) { invoke<void *>(0x83F7E01C7B769A26, ped, boneIndex, xRot, yRot, zRot, woundType); }
static void APPLY_PED_BLOOD_BY_ZONE(int ped, int p1, float p2, float p3, int *p4) { invoke<void *>(0x3311E47B91EDCBBC, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD_SPECIFIC(int ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, int *p8) { invoke<void *>(0xEF0D582CBF2D9B0F, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void APPLY_PED_DAMAGE_DECAL(int ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, bool p8, char *p9) { invoke<void *>(0x397C38AA7B4A5F83, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void APPLY_PED_DAMAGE_PACK(int ped, char *damagePack, float damage, float mult) { invoke<void *>(0x46DF918788CB093F, ped, damagePack, damage, mult); }
static void CLEAR_PED_BLOOD_DAMAGE(int ped) { invoke<void *>(0x8FE22675A5A45817, ped); }
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(int ped, int p1) { invoke<void *>(0x56E3B78C5408D9F4, ped, p1); }
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(int ped, int p1, bool p2) { invoke<void *>(0x62AB793144DE75DC, ped, p1, p2); }
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(int ped, int p1, char *p2) { invoke<void *>(0x523C79AEEFCC4A2A, ped, p1, p2); }
static int GET_PED_DECORATIONS_STATE(int ped) { return invoke<int>(0x71EAB450D86954A1, ped); }
static void CLEAR_PED_WETNESS(int ped) { invoke<void *>(0x9C720776DAA43E7E, ped); }
static void SET_PED_WETNESS_HEIGHT(int ped, float height) { invoke<void *>(0x44CB6447D2571AA0, ped, height); }
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(int ped) { invoke<void *>(0xB5485E4907B53019, ped); }
static void _0x6585D955A68452A5(int ped) { invoke<void *>(0x6585D955A68452A5, ped); }
static void SET_PED_SWEAT(int ped, float sweat) { invoke<void *>(0x27B0405F59637D1F, ped, sweat); }
static void _SET_PED_DECORATION(int ped, int collection, int overlay) { invoke<void *>(0x5F5D1665E352A839, ped, collection, overlay); }
static int _GET_TATTOO_ZONE(int collection, int overlay) { return invoke<int>(0x9FD452BFBE7A7A8B, collection, overlay); }
static void CLEAR_PED_DECORATIONS(int ped) { invoke<void *>(0x0E5173C163976E38, ped); }
static void _CLEAR_PED_FACIAL_DECORATIONS(int ped) { invoke<void *>(0xE3B27E70CEAB9F0C, ped); }
static bool WAS_PED_SKELETON_UPDATED(int ped) { return invoke<bool>(0x11B499C1E0FF8559, ped); }
static Vector3 GET_PED_BONE_COORDS(int ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x17C07FC640E86B4E, ped, boneId, offsetX, offsetY, offsetZ); }
static void CREATE_NM_MESSAGE(bool startImmediately, int messageId) { invoke<void *>(0x418EF2A1BCE56685, startImmediately, messageId); }
static void GIVE_PED_NM_MESSAGE(int ped) { invoke<void *>(0xB158DFCCC56E5C5B, ped); }
static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool p6, bool p7, bool p8, bool p9) { return invoke<int>(0x1B5C85C612E5256E, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<void *>(0xD37401D78A929A49); }
static void REMOVE_SCENARIO_BLOCKING_AREA(int p0, bool p1) { invoke<void *>(0x31D16B74C6E29D66, p0, p1); }
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<void *>(0x28157D43CF600981, x, y, z, range, p4); }
static bool IS_PED_USING_SCENARIO(int ped, char *scenario) { return invoke<bool>(0x1BF094736DD62C2E, ped, scenario); }
static bool IS_PED_USING_ANY_SCENARIO(int ped) { return invoke<bool>(0x57AB4A3080F85143, ped); }
static int _0xFE07FF6495D52E2A(int p0, int p1, int p2, int p3) { return invoke<int>(0xFE07FF6495D52E2A, p0, p1, p2, p3); }
static void _0x9A77DFD295E29B09(int p0, bool p1) { invoke<void *>(0x9A77DFD295E29B09, p0, p1); }
static int _0x25361A96E0F7E419(int p0, int p1, int p2, int p3) { return invoke<int>(0x25361A96E0F7E419, p0, p1, p2, p3); }
static int _0xEC6935EBE0847B90(int p0, int p1, int p2, int p3) { return invoke<int>(0xEC6935EBE0847B90, p0, p1, p2, p3); }
static void _0xA3A9299C4F2ADB98(int p0) { invoke<void *>(0xA3A9299C4F2ADB98, p0); }
static void _0xF1C03A5352243A30(int p0) { invoke<void *>(0xF1C03A5352243A30, p0); }
static int _0xEEED8FAFEC331A70(int p0, int p1, int p2, int p3) { return invoke<int>(0xEEED8FAFEC331A70, p0, p1, p2, p3); }
static void _0x425AECF167663F48(int ped, bool p1) { invoke<void *>(0x425AECF167663F48, ped, p1); }
static void PLAY_FACIAL_ANIM(int ped, char *animName, char *animDict) { invoke<void *>(0xE1E65CA8AC9C00ED, ped, animName, animDict); }
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(int ped, char *animName, char *animDict) { invoke<void *>(0xFFC24B988B938B38, ped, animName, animDict); }
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(int ped) { invoke<void *>(0x726256CC1EEB182F, ped); }
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(int ped, bool toggle) { invoke<void *>(0xBAF20C5432058024, ped, toggle); }
static void SET_PED_CAN_PLAY_VISEME_ANIMS(int ped, bool toggle, bool p2) { invoke<void *>(0xF833DDBA3B104D43, ped, toggle, p2); }
static void _SET_PED_CAN_PLAY_INJURED_ANIMS(int ped, bool p1) { invoke<void *>(0x33A60D8BDD6E508C, ped, p1); }
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(int ped, bool toggle) { invoke<void *>(0x6373D1349925A70E, ped, toggle); }
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(int ped, bool toggle) { invoke<void *>(0x0EB0585D15254740, ped, toggle); }
static void _0xC2EE020F5FB4DB53(int ped) { invoke<void *>(0xC2EE020F5FB4DB53, ped); }
static void SET_PED_CAN_ARM_IK(int ped, bool toggle) { invoke<void *>(0x6C3B4D6D13B4C841, ped, toggle); }
static void SET_PED_CAN_HEAD_IK(int ped, bool toggle) { invoke<void *>(0xC11C18092C5530DC, ped, toggle); }
static void SET_PED_CAN_LEG_IK(int ped, bool toggle) { invoke<void *>(0x73518ECE2485412B, ped, toggle); }
static void SET_PED_CAN_TORSO_IK(int ped, bool toggle) { invoke<void *>(0xF2B7106D37947CE0, ped, toggle); }
static void _0xF5846EDB26A98A24(int ped, bool p1) { invoke<void *>(0xF5846EDB26A98A24, ped, p1); }
static void _0x6647C5F6F5792496(int ped, bool p1) { invoke<void *>(0x6647C5F6F5792496, ped, p1); }
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(int ped, bool toggle) { invoke<void *>(0xEC4686EC06434678, ped, toggle); }
static bool IS_PED_HEADTRACKING_PED(int ped1, int ped2) { return invoke<bool>(0x5CD3CB88A7F8850D, ped1, ped2); }
static bool IS_PED_HEADTRACKING_ENTITY(int ped, int entity) { return invoke<bool>(0x813A0A7C9D2E831F, ped, entity); }
static void SET_PED_PRIMARY_LOOKAT(int ped, int lookAt) { invoke<void *>(0xCD17B554996A8D9E, ped, lookAt); }
static void _0x78C4E9961DB3EB5B(int p0, int p1) { invoke<void *>(0x78C4E9961DB3EB5B, p0, p1); }
static void SET_PED_CLOTH_PRONE(int p0, int p1) { invoke<void *>(0x82A3D6D9CC2CB8E3, p0, p1); }
static void SET_PED_CONFIG_FLAG(int ped, int flagId, bool value) { invoke<void *>(0x1913FE4CBF41C463, ped, flagId, value); }
static void SET_PED_RESET_FLAG(int ped, int flagId, bool doReset) { invoke<void *>(0xC1E8A365BF3B29F2, ped, flagId, doReset); }
static bool GET_PED_CONFIG_FLAG(int ped, int flagId, bool p2) { return invoke<bool>(0x7EE53118C892B513, ped, flagId, p2); }
static bool GET_PED_RESET_FLAG(int ped, int flagId) { return invoke<bool>(0xAF9E59B1B1FBF2A0, ped, flagId); }
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(int ped, int index) { invoke<void *>(0x0BDDB8D9EC6BCF3C, ped, index); }
static void SET_PED_CAN_EVASIVE_DIVE(int ped, bool toggle) { invoke<void *>(0x6B7A646C242A7059, ped, toggle); }
static bool IS_PED_EVASIVE_DIVING(int ped, int *evadingint) { return invoke<bool>(0x414641C26E105898, ped, evadingint); }
static void SET_PED_SHOOTS_AT_COORD(int ped, float x, float y, float z, bool toggle) { invoke<void *>(0x96A05E4FB321B1BA, ped, x, y, z, toggle); }
static void SET_PED_MODEL_IS_SUPPRESSED(int ped, bool toggle) { invoke<void *>(0xE163A4BCE4DE6F11, ped, toggle); }
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<void *>(0xB47BD05FA66B40CF); }
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(int ped, bool toggle) { invoke<void *>(0x638C03B0F9878F57, ped, toggle); }
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(int ped, bool toggle) { invoke<void *>(0x7FB17BA2E7DECA5B, ped, toggle); }
static void _0xE43A13C9E4CCCBCF(int ped, bool p1) { invoke<void *>(0xE43A13C9E4CCCBCF, ped, p1); }
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(int ped, bool toggle) { invoke<void *>(0xDF993EE5E90ABA25, ped, toggle); }
static void GIVE_PED_HELMET(int ped, bool cannotRemove, int helmetFlag, int textureIndex) { invoke<void *>(0x54C7C4A94367717E, ped, cannotRemove, helmetFlag, textureIndex); }
static void REMOVE_PED_HELMET(int ped, bool instantly) { invoke<void *>(0xA7B2458D0AD6DED8, ped, instantly); }
static void SET_PED_HELMET(int ped, bool canWearHelmet) { invoke<void *>(0x560A43136EB58105, ped, canWearHelmet); }
static void SET_PED_HELMET_FLAG(int ped, int helmetFlag) { invoke<void *>(0xC0E78D5C2CE3EB25, ped, helmetFlag); }
static void SET_PED_HELMET_PROP_INDEX(int ped, int propIndex) { invoke<void *>(0x26D83693ED99291C, ped, propIndex); }
static void SET_PED_HELMET_TEXTURE_INDEX(int ped, int textureIndex) { invoke<void *>(0xF1550C4BD22582E2, ped, textureIndex); }
static bool IS_PED_WEARING_HELMET(int ped) { return invoke<bool>(0xF33BDFE19B309B19, ped); }
static void _0x687C0B594907D2E8(int ped) { invoke<void *>(0x687C0B594907D2E8, ped); }
static int _0x451294E859ECC018(int p0) { return invoke<int>(0x451294E859ECC018, p0); }
static int _0x9D728C1E12BF5518(int p0) { return invoke<int>(0x9D728C1E12BF5518, p0); }
static bool _0xF2385935BFFD4D92(int p0) { return invoke<bool>(0xF2385935BFFD4D92, p0); }
static void SET_PED_TO_LOAD_COVER(int ped, bool toggle) { invoke<void *>(0x332B562EEDA62399, ped, toggle); }
static void SET_PED_CAN_COWER_IN_COVER(int ped, bool toggle) { invoke<void *>(0xCB7553CDCEF4A735, ped, toggle); }
static void SET_PED_CAN_PEEK_IN_COVER(int ped, bool toggle) { invoke<void *>(0xC514825C507E3736, ped, toggle); }
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(int ped, bool toggle) { invoke<void *>(0x94D94BF1A75AED3D, ped, toggle); }
static void SET_PED_LEG_IK_MODE(int ped, int mode) { invoke<void *>(0xC396F5B86FF9FEBD, ped, mode); }
static void SET_PED_MOTION_BLUR(int ped, bool toggle) { invoke<void *>(0x0A986918B102B448, ped, toggle); }
static void SET_PED_CAN_SWITCH_WEAPON(int ped, bool toggle) { invoke<void *>(0xED7F7EFE9FABF340, ped, toggle); }
static void SET_PED_DIES_INSTANTLY_IN_WATER(int ped, bool toggle) { invoke<void *>(0xEEB64139BA29A7CF, ped, toggle); }
static void _0x1A330D297AAC6BC1(int ped, int p1) { invoke<void *>(0x1A330D297AAC6BC1, ped, p1); }
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(int ped) { invoke<void *>(0xC158D28142A34608, ped); }
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(int ped, float p1) { invoke<void *>(0x5917BBA32D06C230, ped, p1); }
static void SET_PED_COMBAT_MOVEMENT(int ped, int combatMovement) { invoke<void *>(0x4D9CA1009AFBD057, ped, combatMovement); }
static int GET_PED_COMBAT_MOVEMENT(int ped) { return invoke<int>(0xDEA92412FCAEB3F5, ped); }
static void SET_PED_COMBAT_ABILITY(int ped, int p1) { invoke<void *>(0xC7622C0D36B2FDA8, ped, p1); }
static void SET_PED_COMBAT_RANGE(int ped, int p1) { invoke<void *>(0x3C606747B23E497B, ped, p1); }
static int GET_PED_COMBAT_RANGE(int ped) { return invoke<int>(0xF9D9F7F2DB8E2FA0, ped); }
static void SET_PED_COMBAT_ATTRIBUTES(int ped, int attributeIndex, bool enabled) { invoke<void *>(0x9F7794730795E019, ped, attributeIndex, enabled); }
static void SET_PED_TARGET_LOSS_RESPONSE(int ped, int responseType) { invoke<void *>(0x0703B9079823DA4A, ped, responseType); }
static bool _0xDCCA191DF9980FD7(int ped) { return invoke<bool>(0xDCCA191DF9980FD7, ped); }
static bool IS_PED_PERFORMING_STEALTH_KILL(int ped) { return invoke<bool>(0xFD4CCDBCC59941B7, ped); }
static bool _0xEBD0EDBA5BE957CF(int ped) { return invoke<bool>(0xEBD0EDBA5BE957CF, ped); }
static bool IS_PED_BEING_STEALTH_KILLED(int ped) { return invoke<bool>(0x863B23EFDE9C5DF2, ped); }
static int GET_MELEE_TARGET_FOR_PED(int ped) { return invoke<int>(0x18A3E9EE1297FD39, ped); }
static bool WAS_PED_KILLED_BY_STEALTH(int ped) { return invoke<bool>(0xF9800AA1A771B000, ped); }
static bool WAS_PED_KILLED_BY_TAKEDOWN(int ped) { return invoke<bool>(0x7F08E26039C7347C, ped); }
static bool _0x61767F73EACEED21(int ped) { return invoke<bool>(0x61767F73EACEED21, ped); }
static void SET_PED_FLEE_ATTRIBUTES(int ped, int attributes, bool p2) { invoke<void *>(0x70A2D1137C8ED7C9, ped, attributes, p2); }
static void SET_PED_COWER_HASH(int ped, char *p1) { invoke<void *>(0xA549131166868ED3, ped, p1); }
static void _0x2016C603D6B8987C(int p0, bool p1) { invoke<void *>(0x2016C603D6B8987C, p0, p1); }
static void SET_PED_STEERS_AROUND_PEDS(int ped, bool toggle) { invoke<void *>(0x46F2193B3AD1D891, ped, toggle); }
static void SET_PED_STEERS_AROUND_OBJECTS(int ped, bool toggle) { invoke<void *>(0x1509C089ADC208BF, ped, toggle); }
static void SET_PED_STEERS_AROUND_VEHICLES(int ped, bool toggle) { invoke<void *>(0xEB6FB9D48DDE23EC, ped, toggle); }
static void _0xA9B61A329BFDCBEA(int p0, bool p1) { invoke<void *>(0xA9B61A329BFDCBEA, p0, p1); }
static void _0x570389D1C3DE3C6B(int p0) { invoke<void *>(0x570389D1C3DE3C6B, p0); }
static void _0x576594E8D64375E2(int p0, bool p1) { invoke<void *>(0x576594E8D64375E2, p0, p1); }
static void _0xA52D5247A4227E14(int p0) { invoke<void *>(0xA52D5247A4227E14, p0); }
static bool IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<bool>(0x083961498679DC9F, x, y, z, radius); }
static void _0x2208438012482A1A(int ped, bool p1, bool p2) { invoke<void *>(0x2208438012482A1A, ped, p1, p2); }
static bool _0xFCF37A457CB96DC0(int p0, float p1, float p2, float p3, float p4) { return invoke<bool>(0xFCF37A457CB96DC0, p0, p1, p2, p3, p4); }
static void _0x7D7A2E43E74E2EB8(int p0) { invoke<void *>(0x7D7A2E43E74E2EB8, p0); }
static void GET_PED_FLOOD_INVINCIBILITY(int ped, bool p1) { invoke<void *>(0x2BC338A7B21F4608, ped, p1); }
static void _0x75BA1CB3B7D40CAF(int ped, bool p1) { invoke<void *>(0x75BA1CB3B7D40CAF, ped, p1); }
static bool IS_TRACKED_PED_VISIBLE(int ped) { return invoke<bool>(0x91C8E617F64188AC, ped); }
static int _0x511F1A683387C7E2(int p0) { return invoke<int>(0x511F1A683387C7E2, p0); }
static bool IS_PED_TRACKED(int ped) { return invoke<bool>(0x4C5E1F087CD10BB7, ped); }
static bool HAS_PED_RECEIVED_EVENT(int p0, int p1) { return invoke<bool>(0x8507BCB710FA6DC0, p0, p1); }
static bool _CAN_PED_SEE_PED(int ped1, int ped2) { return invoke<bool>(0x6CD5A433374D4CFB, ped1, ped2); }
static int GET_PED_BONE_INDEX(int ped, int boneId) { return invoke<int>(0x3F428D08BE5AAE31, ped, boneId); }
static int GET_PED_RAGDOLL_BONE_INDEX(int ped, int bone) { return invoke<int>(0x2057EF813397A772, ped, bone); }
static void SET_PED_ENVEFF_SCALE(int ped, float value) { invoke<void *>(0xBF29516833893561, ped, value); }
static float GET_PED_ENVEFF_SCALE(int ped) { return invoke<float>(0x9C14D30395A51A3C, ped); }
static void SET_ENABLE_PED_ENVEFF_SCALE(int ped, bool toggle) { invoke<void *>(0xD2C5AA0C0E8D0F1E, ped, toggle); }
static void _0x110F526AB784111F(int ped, float p1) { invoke<void *>(0x110F526AB784111F, ped, p1); }
static void _0xD69411AA0CEBF9E9(int ped, int p1, int p2, int p3) { invoke<void *>(0xD69411AA0CEBF9E9, ped, p1, p2, p3); }
static void _0x1216E0BFA72CC703(int p0, int p1) { invoke<void *>(0x1216E0BFA72CC703, p0, p1); }
static void _0x2B5AA717A181FB4C(int p0, bool p1) { invoke<void *>(0x2B5AA717A181FB4C, p0, p1); }
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0x8C18E0F9080ADD73, x, y, z, roll, pitch, yaw, p6); }
static int _CREATE_SYNCHRONIZED_SCENE_2(float x, float y, float z, float radius, int object) { return invoke<int>(0x62EC273D00187DCA, x, y, z, radius, object); }
static bool IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<bool>(0x25D39B935A038A26, sceneId); }
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, bool p7) { invoke<void *>(0x6ACF6B7225801CD7, sceneID, x, y, z, roll, pitch, yaw, p7); }
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<void *>(0x734292F4F0ABF6D0, sceneID, phase); }
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xE4A310B1D7FA73CC, sceneID); }
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<void *>(0xB6C49F8A5E295A5D, sceneID, rate); }
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xD80932D577274D40, sceneID); }
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, bool toggle) { invoke<void *>(0xD9A897A4C6C2974F, sceneID, toggle); }
static bool IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<bool>(0x62522002E0C391BA, sceneID); }
static void _SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(int sceneID, bool p1) { invoke<void *>(0x394B9CD12435C981, sceneID, p1); }
static bool _0x7F2F4F13AC5257EF(int p0) { return invoke<bool>(0x7F2F4F13AC5257EF, p0); }
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, int entity, int boneIndex) { invoke<void *>(0x272E4723B56A3B96, sceneID, entity, boneIndex); }
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<void *>(0x6D38F1F04CBB37EA, sceneID); }
static void _DISPOSE_SYNCHRONIZED_SCENE(int scene) { invoke<void *>(0xCD9CC7E200A52A6F, scene); }
static bool FORCE_PED_MOTION_STATE(int ped, int motionStateint, bool p2, bool p3, bool p4) { return invoke<bool>(0xF28965D04F570DCA, ped, motionStateint, p2, p3, p4); }
static void SET_PED_MAX_MOVE_BLEND_RATIO(int ped, float value) { invoke<void *>(0x433083750C5E064A, ped, value); }
static void SET_PED_MIN_MOVE_BLEND_RATIO(int ped, float value) { invoke<void *>(0x01A898D26E2333DD, ped, value); }
static void SET_PED_MOVE_RATE_OVERRIDE(int ped, float value) { invoke<void *>(0x085BF80FA50A39D1, ped, value); }
static bool _0x46B05BCAE43856B0(int ped, int flag) { return invoke<bool>(0x46B05BCAE43856B0, ped, flag); }
static int GET_PED_NEARBY_VEHICLES(int ped, int *sizeAndVehs) { return invoke<int>(0xCFF869CBFA210D82, ped, sizeAndVehs); }
static int GET_PED_NEARBY_PEDS(int ped, int *sizeAndints, int ignore) { return invoke<int>(0x23F8F5FC7E8C4A6B, ped, sizeAndints, ignore); }
static bool _0x7350823473013C02(int ped) { return invoke<bool>(0x7350823473013C02, ped); }
static bool IS_PED_USING_ACTION_MODE(int ped) { return invoke<bool>(0x00E73468D085F745, ped); }
static void SET_PED_USING_ACTION_MODE(int ped, bool p1, int p2, char *action) { invoke<void *>(0xD75ACCF5E0FB5367, ped, p1, p2, action); }
static void SET_PED_CAPSULE(int ped, float value) { invoke<void *>(0x364DF566EC833DE2, ped, value); }
static int REGISTER_PEDHEADSHOT(int ped) { return invoke<int>(0x4462658788425076, ped); }
static int _0x953563CE563143AF(int p0) { return invoke<int>(0x953563CE563143AF, p0); }
static void UNREGISTER_PEDHEADSHOT(int handle) { invoke<void *>(0x96B1361D9B24C2FF, handle); }
static bool IS_PEDHEADSHOT_VALID(int handle) { return invoke<bool>(0xA0A9668F158129A2, handle); }
static bool IS_PEDHEADSHOT_READY(int handle) { return invoke<bool>(0x7085228842B13A67, handle); }
static char *GET_PEDHEADSHOT_TXD_STRING(int handle) { return invoke<char *>(0xDB4EACD4AD0A5D6B, handle); }
static bool _0xF0DAEF2F545BEE25(int p0) { return invoke<bool>(0xF0DAEF2F545BEE25, p0); }
static void _0x5D517B27CF6ECD04(int p0) { invoke<void *>(0x5D517B27CF6ECD04, p0); }
static int _0xEBB376779A760AA8() { return invoke<int>(0xEBB376779A760AA8); }
static int _0x876928DDDFCCC9CD() { return invoke<int>(0x876928DDDFCCC9CD); }
static int _0xE8A169E666CBC541() { return invoke<int>(0xE8A169E666CBC541); }
static void _0xC1F6EBF9A3D55538(int p0, int p1) { invoke<void *>(0xC1F6EBF9A3D55538, p0, p1); }
static void _0x600048C60D5C2C51(int p0) { invoke<void *>(0x600048C60D5C2C51, p0); }
static void _0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<void *>(0x2DF9038C90AD5264, p0, p1, p2, p3, p4, interiorFlags, scale, duration); }
static void _0xB2AFF10216DEFA2F(float x, float y, float z, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration) { invoke<void *>(0xB2AFF10216DEFA2F, x, y, z, p3, p4, p5, p6, interiorFlags, scale, duration); }
static void _0xFEE4A5459472A9F8() { invoke<void *>(0xFEE4A5459472A9F8); }
static int _0x3C67506996001F5E() { return invoke<int>(0x3C67506996001F5E); }
static int _0xA586FBEB32A53DBB() { return invoke<int>(0xA586FBEB32A53DBB); }
static int _0xF445DE8DA80A1792() { return invoke<int>(0xF445DE8DA80A1792); }
static int _0xA635C11B8C44AFC2() { return invoke<int>(0xA635C11B8C44AFC2); }
static void _0x280C7E3AC7F56E90(int p0, int *p1, int *p2, int *p3) { invoke<void *>(0x280C7E3AC7F56E90, p0, p1, p2, p3); }
static void _0xB782F8238512BAD5(int p0, int *p1) { invoke<void *>(0xB782F8238512BAD5, p0, p1); }
static void SET_IK_TARGET(int ped, int p1, int targetint, int boneLookAt, float x, float y, float z, int p7, int duration, int duration1) { invoke<void *>(0xC32779C16FCEECD9, ped, p1, targetint, boneLookAt, x, y, z, p7, duration, duration1); }
static void _0xED3C76ADFA6D07C4(int p0) { invoke<void *>(0xED3C76ADFA6D07C4, p0); }
static void REQUEST_ACTION_MODE_ASSET(char *asset) { invoke<void *>(0x290E2780BB7AA598, asset); }
static bool HAS_ACTION_MODE_ASSET_LOADED(char *asset) { return invoke<bool>(0xE4B5F4BF2CB24E65, asset); }
static void REMOVE_ACTION_MODE_ASSET(char *asset) { invoke<void *>(0x13E940F88470FA51, asset); }
static void REQUEST_STEALTH_MODE_ASSET(char *asset) { invoke<void *>(0x2A0A62FCDEE16D4F, asset); }
static bool HAS_STEALTH_MODE_ASSET_LOADED(char *asset) { return invoke<bool>(0xE977FC5B08AF3441, asset); }
static void REMOVE_STEALTH_MODE_ASSET(char *asset) { invoke<void *>(0x9219857D21F0E842, asset); }
static void SET_PED_LOD_MULTIPLIER(int ped, float multiplier) { invoke<void *>(0xDC2C5C242AAC342B, ped, multiplier); }
static void _0xE861D0B05C7662B8(int p0, int p1, int *p2) { invoke<void *>(0xE861D0B05C7662B8, p0, p1, p2); }
static void _0x129466ED55140F8D(int ped, bool toggle) { invoke<void *>(0x129466ED55140F8D, ped, toggle); }
static void _0xCB968B53FC7F916D(int p0, bool p1, int p2, int p3) { invoke<void *>(0xCB968B53FC7F916D, p0, p1, p2, p3); }
static bool _0x68772DB2B2526F9F(int ped, float x, float y, float z, float range) { return invoke<bool>(0x68772DB2B2526F9F, ped, x, y, z, range); }
static bool _0x06087579E7AA85A9(int p0, int p1, float p2, float p3, float p4, float p5) { return invoke<bool>(0x06087579E7AA85A9, p0, p1, p2, p3, p4, p5); }
static void _0xD8C3BE3EE94CAF2D(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0xD8C3BE3EE94CAF2D, p0, p1, p2, p3, p4); }
static void _0xD33DAA36272177C4(int ped) { invoke<void *>(0xD33DAA36272177C4, ped); }
static int CREATE_VEHICLE(int modelint, Vector3 origin, float heading, bool isNetwork, bool thisScriptCheck) { return invoke<int>(0xAF35D0D2583051B0, modelint, origin.x, origin.y, origin.z, heading, isNetwork, thisScriptCheck); }
static void DELETE_VEHICLE(int *vehicle) { invoke<void *>(0xEA386986E786A54F, vehicle); }
static void _0x7D6F9A3EF26136A0(int vehicle, bool p1, bool p2) { invoke<void *>(0x7D6F9A3EF26136A0, vehicle, p1, p2); }
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(int veh, bool toggle) { invoke<void *>(0x5D14D4154BFE7B2C, veh, toggle); }
static int _0xE6B0E8CFC3633BF0(int vehicle) { return invoke<int>(0xE6B0E8CFC3633BF0, vehicle); }
static bool IS_VEHICLE_MODEL(int vehicle, int model) { return invoke<bool>(0x423E8DE37D934D89, vehicle, model); }
static bool DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<bool>(0xF6086BC836400876, vehicleGenerator); }
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, int modelint, int p7, int p8, int p9, int p10, bool p11, bool p12, bool p13, bool p14, bool p15, int p16) { return invoke<int>(0x9DEF883114668116, x, y, z, heading, p4, p5, modelint, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<void *>(0x22102C9ABFCF125D, vehicleGenerator); }
static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, bool enabled) { invoke<void *>(0xD9D620E0AC6DC4B0, vehicleGenerator, enabled); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool p6, bool p7) { invoke<void *>(0xC12321827687FE4D, x1, y1, z1, x2, y2, z2, p6, p7); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<void *>(0x34AD89078831A4BC); }
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(bool active) { invoke<void *>(0x608207E7A8FB787C, active); }
static void _0x9A75585FB2E54FAD(float p0, float p1, float p2, float p3) { invoke<void *>(0x9A75585FB2E54FAD, p0, p1, p2, p3); }
static void _0x0A436B8643716D14() { invoke<void *>(0x0A436B8643716D14); }
static bool SET_VEHICLE_ON_GROUND_PROPERLY(int vehicle) { return invoke<bool>(0x49733E92263139D1, vehicle); }
static int SET_ALL_VEHICLES_SPAWN(int p0, bool p1, bool p2, bool p3) { return invoke<int>(0xE023E8AC4EF7C117, p0, p1, p2, p3); }
static bool IS_VEHICLE_STUCK_ON_ROOF(int vehicle) { return invoke<bool>(0xB497F06B288DCFDF, vehicle); }
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(int vehicle) { invoke<void *>(0xB72E26D81006005B, vehicle); }
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(int vehicle) { invoke<void *>(0xC53EB42A499A7E90, vehicle); }
static bool IS_VEHICLE_STOPPED(int vehicle) { return invoke<bool>(0x5721B434AD84D57A, vehicle); }
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(int vehicle) { return invoke<int>(0x24CB2137731FFE89, vehicle); }
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(int vehicle) { return invoke<int>(0xA7C4F2C6E744A550, vehicle); }
static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(int modelint) { return invoke<int>(0x2AD93716F184EDA4, modelint); }
static bool _0xF7F203E31F96F6A1(int vehicle, bool flag) { return invoke<bool>(0xF7F203E31F96F6A1, vehicle, flag); }
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<void *>(0x245A6883D966D537, multiplier); }
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<void *>(0xB3B3359379FE77D3, multiplier); }
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<void *>(0xEAE6DCC7EEE3DB1D, multiplier); }
static void _0xD4B8E3D1917BC86B(bool toggle) { invoke<void *>(0xD4B8E3D1917BC86B, toggle); }
static void _SET_SOME_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float value) { invoke<void *>(0x90B6DA738A9A25DA, value); }
static void SET_FAR_DRAW_VEHICLES(bool toggle) { invoke<void *>(0x26324F33423F3CC3, toggle); }
static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<void *>(0xCAA15F13EBD417FF, value); }
static void SET_VEHICLE_DOORS_LOCKED(int vehicle, int doorLockStatus) { invoke<void *>(0xB664292EAECF7FA6, vehicle, doorLockStatus); }
static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(int vehicle, int vehicleComponent, int destroyType) { invoke<void *>(0xBE70724027F85BCD, vehicle, vehicleComponent, destroyType); }
static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(int vehicle, bool toggle) { invoke<void *>(0xD8050E0EB60CF274, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(int vehicle, int player, bool toggle) { invoke<void *>(0x517AAF684BB50CD1, vehicle, player, toggle); }
static bool GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(int vehicle, int player) { return invoke<bool>(0xF6AF6CB341349015, vehicle, player); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(int vehicle, bool toggle) { invoke<void *>(0xA2F80B8D040727CC, vehicle, toggle); }
static void _0x9737A37136F07E75(int vehicle, bool toggle) { invoke<void *>(0x9737A37136F07E75, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(int vehicle, int team, bool toggle) { invoke<void *>(0xB81F6D4A8F5EEBA8, vehicle, team, toggle); }
static void EXPLODE_VEHICLE(int vehicle, bool isAudible, bool isInvisible) { invoke<void *>(0xBA71116ADF5B514C, vehicle, isAudible, isInvisible); }
static void SET_VEHICLE_OUT_OF_CONTROL(int vehicle, bool killDriver, bool explodeOnImpact) { invoke<void *>(0xF19D095E42D430CC, vehicle, killDriver, explodeOnImpact); }
static void SET_VEHICLE_TIMED_EXPLOSION(int vehicle, int ped, bool toggle) { invoke<void *>(0x2E0A74E1002380B1, vehicle, ped, toggle); }
static void _0x99AD4CCCB128CBC9(int vehicle) { invoke<void *>(0x99AD4CCCB128CBC9, vehicle); }
static int _0x6ADAABD3068C5235() { return invoke<int>(0x6ADAABD3068C5235); }
static void _0xEF49CF0270307CBE() { invoke<void *>(0xEF49CF0270307CBE); }
static bool _0xAE3FEE8709B39DCB(int vehicle) { return invoke<bool>(0xAE3FEE8709B39DCB, vehicle); }
static void SET_TAXI_LIGHTS(int vehicle, bool state) { invoke<void *>(0x598803E85E8448D9, vehicle, state); }
static bool IS_TAXI_LIGHT_ON(int vehicle) { return invoke<bool>(0x7504C0F113AB50FC, vehicle); }
static bool IS_VEHICLE_IN_GARAGE_AREA(char *garageName, int vehicle) { return invoke<bool>(0xCEE4490CD57BB3C2, garageName, vehicle); }
static void SET_VEHICLE_COLOURS(int vehicle, int colorPrimary, int colorSecondary) { invoke<void *>(0x4F1D4BE3A7F24601, vehicle, colorPrimary, colorSecondary); }
static void SET_VEHICLE_FULLBEAM(int vehicle, bool toggle) { invoke<void *>(0x8B7FD87F0DDB421E, vehicle, toggle); }
static void STEER_UNLOCK_BIAS(int vehicle, bool toggle) { invoke<void *>(0x07116E24E9D1929D, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle, int r, int g, int b) { invoke<void *>(0x7141766F91D15BEA, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle, int *r, int *g, int *b) { invoke<void *>(0xB64CF2CCA9D95F52, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(int vehicle) { invoke<void *>(0x55E1D2758F34E437, vehicle); }
static bool GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(int vehicle) { return invoke<bool>(0xF095C0405307B21B, vehicle); }
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(int vehicle, int r, int g, int b) { invoke<void *>(0x36CED73BFED89754, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(int vehicle, int *r, int *g, int *b) { invoke<void *>(0x8389CD56CA8072DC, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(int vehicle) { invoke<void *>(0x5FFBDEEC3E8E2009, vehicle); }
static bool GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(int vehicle) { return invoke<bool>(0x910A32E7AAD2656C, vehicle); }
static void SET_VEHICLE_ENVEFF_SCALE(int vehicle, float fade) { invoke<void *>(0x3AFDC536C3D01674, vehicle, fade); }
static float GET_VEHICLE_ENVEFF_SCALE(int vehicle) { return invoke<float>(0xA82819CAC9C4C403, vehicle); }
static void SET_CAN_RESPRAY_VEHICLE(int vehicle, bool state) { invoke<void *>(0x52BBA29D5EC69356, vehicle, state); }
static void _0x33506883545AC0DF(int vehicle, bool p1) { invoke<void *>(0x33506883545AC0DF, vehicle, p1); }
static void _JITTER_VEHICLE(int vehicle, bool p1, float yaw, float pitch, float roll) { invoke<void *>(0xC59872A5134879C7, vehicle, p1, yaw, pitch, roll); }
static void SET_BOAT_ANCHOR(int vehicle, bool toggle) { invoke<void *>(0x75DBEC174AEEAD10, vehicle, toggle); }
static void _0xE3EBAAE484798530(int vehicle, bool p1) { invoke<void *>(0xE3EBAAE484798530, vehicle, p1); }
static void _0xB28B1FE5BFADD7F5(int vehicle, bool p1) { invoke<void *>(0xB28B1FE5BFADD7F5, vehicle, p1); }
static void _0xE842A9398079BD82(int vehicle, float p1) { invoke<void *>(0xE842A9398079BD82, vehicle, p1); }
static void _0x8F719973E1445BA2(int vehicle, int p1) { invoke<void *>(0x8F719973E1445BA2, vehicle, p1); }
static void SET_VEHICLE_SIREN(int vehicle, bool toggle) { invoke<void *>(0xF4924635A19EB37D, vehicle, toggle); }
static bool IS_VEHICLE_SIREN_ON(int vehicle) { return invoke<bool>(0x4C9BF537BE2634B2, vehicle); }
static void SET_VEHICLE_STRONG(int vehicle, bool toggle) { invoke<void *>(0x3E8C8727991A8A0B, vehicle, toggle); }
static void REMOVE_VEHICLE_STUCK_CHECK(int vehicle) { invoke<void *>(0x8386BFB614D06749, vehicle); }
static void GET_VEHICLE_COLOURS(int vehicle, int *colorPrimary, int *colorSecondary) { invoke<void *>(0xA19435F193E081AC, vehicle, colorPrimary, colorSecondary); }
static bool IS_VEHICLE_SEAT_FREE(int vehicle, int seatIndex) { return invoke<bool>(0x22AC59A870E6A669, vehicle, seatIndex); }
static int GET_PED_IN_VEHICLE_SEAT(int vehicle, int index) { return invoke<int>(0xBB40DD2270B65366, vehicle, index); }
static int GET_LAST_PED_IN_VEHICLE_SEAT(int vehicle, int seatIndex) { return invoke<int>(0x83F969AA1EE2A664, vehicle, seatIndex); }
static bool GET_VEHICLE_LIGHTS_STATE(int vehicle, bool *lightsOn, bool *highbeamsOn) { return invoke<bool>(0xB91B4C20085BD12F, vehicle, lightsOn, highbeamsOn); }
static bool IS_VEHICLE_TYRE_BURST(int vehicle, int wheelID, bool completely) { return invoke<bool>(0xBA291848A0815CA9, vehicle, wheelID, completely); }
static void SET_VEHICLE_FORWARD_SPEED(int vehicle, float speed) { invoke<void *>(0xAB54A438726D25D5, vehicle, speed); }
static void _SET_VEHICLE_HALT(int vehicle, float distance, int killEngine, bool unknown) { invoke<void *>(0x260BE8F09E326A20, vehicle, distance, killEngine, unknown); }
static void _0x37EBBF3117BD6A25(int vehicle, float height) { invoke<void *>(0x37EBBF3117BD6A25, vehicle, height); }
static bool SET_PED_ENABLED_BIKE_RINGTONE(int vehicle, int entity) { return invoke<bool>(0x57715966069157AD, vehicle, entity); }
static bool _0x62CA17B74C435651(int vehicle) { return invoke<bool>(0x62CA17B74C435651, vehicle); }
static int _GET_VEHICLE_ATTACHED_TO_ENTITY(int object) { return invoke<int>(0x375E7FC44F21C8AB, object); }
static bool _0x89D630CF5EA96D23(int vehicle, int entity) { return invoke<bool>(0x89D630CF5EA96D23, vehicle, entity); }
static void _0x6A98C2ECF57FA5D4(int vehicle, int entity) { invoke<void *>(0x6A98C2ECF57FA5D4, vehicle, entity); }
static void _0x7C0043FDFF6436BC(int vehicle) { invoke<void *>(0x7C0043FDFF6436BC, vehicle); }
static void _0x8AA9180DE2FEDD45(int vehicle, bool p1) { invoke<void *>(0x8AA9180DE2FEDD45, vehicle, p1); }
static void _0x0A6A279F3AA4FD70(int vehicle, bool p1) { invoke<void *>(0x0A6A279F3AA4FD70, vehicle, p1); }
static bool _0x634148744F385576(int vehicle) { return invoke<bool>(0x634148744F385576, vehicle); }
static void _0xE6F13851780394DA(int vehicle, float p1) { invoke<void *>(0xE6F13851780394DA, vehicle, p1); }
static void SET_VEHICLE_TYRE_BURST(int vehicle, int index, bool onRim, float p3) { invoke<void *>(0xEC6A202EE4960385, vehicle, index, onRim, p3); }
static void SET_VEHICLE_DOORS_SHUT(int vehicle, bool closeInstantly) { invoke<void *>(0x781B3D62BB013EF5, vehicle, closeInstantly); }
static void SET_VEHICLE_TYRES_CAN_BURST(int vehicle, bool toggle) { invoke<void *>(0xEB9DC3C7D8596C46, vehicle, toggle); }
static bool GET_VEHICLE_TYRES_CAN_BURST(int vehicle) { return invoke<bool>(0x678B9BB8C3F58FEB, vehicle); }
static void SET_VEHICLE_WHEELS_CAN_BREAK(int vehicle, bool enabled) { invoke<void *>(0x29B18B4FD460CA8F, vehicle, enabled); }
static void SET_VEHICLE_DOOR_OPEN(int vehicle, int doorIndex, bool loose, bool openInstantly) { invoke<void *>(0x7C65DAC73C35C862, vehicle, doorIndex, loose, openInstantly); }
static void REMOVE_VEHICLE_WINDOW(int vehicle, int windowIndex) { invoke<void *>(0xA711568EEDB43069, vehicle, windowIndex); }
static void ROLL_DOWN_WINDOWS(int vehicle) { invoke<void *>(0x85796B0549DDE156, vehicle); }
static void ROLL_DOWN_WINDOW(int vehicle, int windowIndex) { invoke<void *>(0x7AD9E6CE657D69E3, vehicle, windowIndex); }
static void ROLL_UP_WINDOW(int vehicle, int windowIndex) { invoke<void *>(0x602E548F46E24D59, vehicle, windowIndex); }
static void SMASH_VEHICLE_WINDOW(int vehicle, int index) { invoke<void *>(0x9E5B5E4D2CCD2259, vehicle, index); }
static void FIX_VEHICLE_WINDOW(int vehicle, int index) { invoke<void *>(0x772282EBEB95E682, vehicle, index); }
static void _DETACH_VEHICLE_WINDSCREEN(int vehicle) { invoke<void *>(0x6D645D59FB5F5AD3, vehicle); }
static void _EJECT_JB700_ROOF(int vehicle, float x, float y, float z) { invoke<void *>(0xE38CB9D7D39FDBCC, vehicle, x, y, z); }
static void SET_VEHICLE_LIGHTS(int vehicle, int state) { invoke<void *>(0x34E710FF01247C5A, vehicle, state); }
static void _0xC45C27EF50F36ADC(int vehicle, bool p1) { invoke<void *>(0xC45C27EF50F36ADC, vehicle, p1); }
static void SET_VEHICLE_ALARM(int vehicle, bool state) { invoke<void *>(0xCDE5E70C1DDB954C, vehicle, state); }
static void START_VEHICLE_ALARM(int vehicle) { invoke<void *>(0xB8FF7AB45305C345, vehicle); }
static bool IS_VEHICLE_ALARM_ACTIVATED(int vehicle) { return invoke<bool>(0x4319E335B71FFF34, vehicle); }
static void SET_VEHICLE_INTERIORLIGHT(int vehicle, bool toggle) { invoke<void *>(0xBC2042F090AF6AD3, vehicle, toggle); }
static void SET_VEHICLE_LIGHT_MULTIPLIER(int vehicle, float multiplier) { invoke<void *>(0xB385454F8791F57C, vehicle, multiplier); }
static void ATTACH_VEHICLE_TO_TRAILER(int vehicle, int trailer, float radius) { invoke<void *>(0x3C7D42D58F770B54, vehicle, trailer, radius); }
static void _0x16B5E274BDE402F8(int vehicle, int trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<void *>(0x16B5E274BDE402F8, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _0x374706271354CB18(int vehicle, int p1, float p2) { invoke<void *>(0x374706271354CB18, vehicle, p1, p2); }
static void DETACH_VEHICLE_FROM_TRAILER(int vehicle) { invoke<void *>(0x90532EDF0D2BDD86, vehicle); }
static bool IS_VEHICLE_ATTACHED_TO_TRAILER(int vehicle) { return invoke<bool>(0xE7CF3C4F9F489F0C, vehicle); }
static void _0x2A8F319B392E7B3F(int vehicle, float p1) { invoke<void *>(0x2A8F319B392E7B3F, vehicle, p1); }
static void _0x95CF53B3D687F9FA(int vehicle) { invoke<void *>(0x95CF53B3D687F9FA, vehicle); }
static void SET_VEHICLE_TYRE_FIXED(int vehicle, int tyreIndex) { invoke<void *>(0x6E13FC662B882D1D, vehicle, tyreIndex); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT(int vehicle, char *plateText) { invoke<void *>(0x95A88F0B409CDA47, vehicle, plateText); }
static char *GET_VEHICLE_NUMBER_PLATE_TEXT(int vehicle) { return invoke<char *>(0x7CE1CCB9B293020E, vehicle); }
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0x4C4D6B2644F458CB); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(int vehicle, int plateIndex) { invoke<void *>(0x9088EB5A43FFB0A1, vehicle, plateIndex); }
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(int vehicle) { return invoke<int>(0xF11BC2DD9A3E7195, vehicle); }
static void SET_RANDOM_TRAINS(bool toggle) { invoke<void *>(0x80D9F74197EA47D9, toggle); }
static int CREATE_MISSION_TRAIN(int variation, float x, float y, float z, bool direction) { return invoke<int>(0x63C6CCA8E68AE8C8, variation, x, y, z, direction); }
static void SWITCH_TRAIN_TRACK(int intersectionId, bool state) { invoke<void *>(0xFD813BB7DB977F20, intersectionId, state); }
static void _0x21973BBF8D17EDFA(int p0, int p1) { invoke<void *>(0x21973BBF8D17EDFA, p0, p1); }
static void DELETE_ALL_TRAINS() { invoke<void *>(0x736A718577F39C7D); }
static void SET_TRAIN_SPEED(int train, float speed) { invoke<void *>(0xAA0BC91BE0B796E3, train, speed); }
static void SET_TRAIN_CRUISE_SPEED(int train, float speed) { invoke<void *>(0x16469284DB8C62B5, train, speed); }
static void SET_RANDOM_BOATS(bool toggle) { invoke<void *>(0x84436EC293B1415F, toggle); }
static void SET_GARBAGE_TRUCKS(bool toggle) { invoke<void *>(0x2AFD795EEAC8D30D, toggle); }
static bool DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(int vehicle) { return invoke<bool>(0x57E4C39DE5EE8470, vehicle); }
static int GET_VEHICLE_RECORDING_ID(int p0, char *p1) { return invoke<int>(0x21543C612379DB3C, p0, p1); }
static void REQUEST_VEHICLE_RECORDING(int i, char *name) { invoke<void *>(0xAF514CABE74CBF15, i, name); }
static bool HAS_VEHICLE_RECORDING_BEEN_LOADED(int p0, int *p1) { return invoke<bool>(0x300D614A4C785FC4, p0, p1); }
static void REMOVE_VEHICLE_RECORDING(int p0, int *p1) { invoke<void *>(0xF1160ACCF98A3FC8, p0, p1); }
static Vector3 _0x92523B76657A517D(int p0, float p1) { return invoke<Vector3>(0x92523B76657A517D, p0, p1); }
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int p0, float p1, char *p2) { return invoke<Vector3>(0xD242728AA6F0FBA2, p0, p1, p2); }
static Vector3 _0xF0F2103EFAF8CBA7(int p0, float p1) { return invoke<Vector3>(0xF0F2103EFAF8CBA7, p0, p1); }
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int p0, float p1, int *p2) { return invoke<Vector3>(0x2058206FBE79A8AD, p0, p1, p2); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int p0) { return invoke<float>(0x102D125411A7B6E6, p0); }
static int GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int p0, int p1) { return invoke<int>(0x0E48D1C262390950, p0, p1); }
static float GET_POSITION_IN_RECORDING(int p0) { return invoke<float>(0x2DACD605FC681475, p0); }
static float GET_TIME_POSITION_IN_RECORDING(int p0) { return invoke<float>(0x5746F3A7AB7FE544, p0); }
static void START_PLAYBACK_RECORDED_VEHICLE(int vehicle, int p1, char *playback, bool p3) { invoke<void *>(0x3F878F92B3A7A071, vehicle, p1, playback, p3); }
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(int vehicle, int p1, char *playback, int p3, int p4, int p5) { invoke<void *>(0x7D80FD645D4DA346, vehicle, p1, playback, p3, p4, p5); }
static void _0x1F2E4E06DEA8992B(int p0, bool p1) { invoke<void *>(0x1F2E4E06DEA8992B, p0, p1); }
static void STOP_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void *>(0x54833611C17ABDEA, p0); }
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void *>(0x632A689BF42301B1, p0); }
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void *>(0x8879EE09268305D5, p0); }
static bool IS_PLAYBACK_GOING_ON_FOR_VEHICLE(int p0) { return invoke<bool>(0x1C8A4C2C19E68EEC, p0); }
static bool IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(int p0) { return invoke<bool>(0xAEA8FD591FAD4106, p0); }
static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(int p0) { return invoke<int>(0x42BC05C27A946054, p0); }
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(int p0) { invoke<void *>(0xAB8E2EDA0C0A5883, p0); }
static void SET_PLAYBACK_SPEED(int vehicle, float speed) { invoke<void *>(0x6683AB880E427778, vehicle, speed); }
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(int p0, int p1, int *p2, float p3, int p4) { invoke<void *>(0x29DE5FA52D00428C, p0, p1, p2, p3, p4); }
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(int p0, float p1) { invoke<void *>(0x9438F7AD68771A20, p0, p1); }
static void SET_PLAYBACK_TO_USE_AI(int vehicle, int flag) { invoke<void *>(0xA549C3B37EA28131, vehicle, flag); }
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(int p0, int p1, int p2, bool p3) { invoke<void *>(0x6E63860BBB190730, p0, p1, p2, p3); }
static void _0x5845066D8A1EA7F7(int vehicle, float x, float y, float z, int p4) { invoke<void *>(0x5845066D8A1EA7F7, vehicle, x, y, z, p4); }
static void _0x796A877E459B99EA(int p0, float p1, float p2, float p3) { invoke<void *>(0x796A877E459B99EA, p0, p1, p2, p3); }
static void _0xFAF2A78061FD9EF4(int p0, float p1, float p2, float p3) { invoke<void *>(0xFAF2A78061FD9EF4, p0, p1, p2, p3); }
static void _0x063AE2B2CC273588(int p0, bool p1) { invoke<void *>(0x063AE2B2CC273588, p0, p1); }
static void EXPLODE_VEHICLE_IN_CUTSCENE(int vehicle, bool p1) { invoke<void *>(0x786A4EB67B01BF0B, vehicle, p1); }
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(int p0, float p1, int p2, bool p3, bool p4, bool p5, int p6) { invoke<void *>(0x2FA9923062DD396C, p0, p1, p2, p3, p4, p5, p6); }
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(int model, bool suppressed) { invoke<void *>(0x0FC2D89AC25A5814, model, suppressed); }
static int GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, int modelint, int flags) { return invoke<int>(0x386F6CE5BAF6091C, x, y, z, radius, modelint, flags); }
static int GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<int>(0xC5574E0AEB86BA68, p0, p1, p2, p3, p4, p5, p6); }
static int GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<int>(0xB50807EABE20A8DC, p0, p1, p2, p3, p4, p5, p6); }
static int GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, int modelint, int flags) { return invoke<int>(0xF73EB622C4F1689B, x, y, z, radius, modelint, flags); }
static int GET_TRAIN_CARRIAGE(int train, int trailerNumber) { return invoke<int>(0x08AAFD0814722BC3, train, trailerNumber); }
static void DELETE_MISSION_TRAIN(int *train) { invoke<void *>(0x5B76B14AE875C795, train); }
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(int *train, bool p1) { invoke<void *>(0xBBE7648349B49BE8, train, p1); }
static void SET_MISSION_TRAIN_COORDS(int train, float x, float y, float z) { invoke<void *>(0x591CA673AA6AB736, train, x, y, z); }
static bool IS_THIS_MODEL_A_BOAT(int model) { return invoke<bool>(0x45A9187928F4B9E3, model); }
static bool IS_THIS_MODEL_A_PLANE(int model) { return invoke<bool>(0xA0948AB42D7BA0DE, model); }
static bool IS_THIS_MODEL_A_HELI(int model) { return invoke<bool>(0xDCE4334788AF94EA, model); }
static bool IS_THIS_MODEL_A_CAR(int model) { return invoke<bool>(0x7F6DB52EEFC96DF8, model); }
static bool IS_THIS_MODEL_A_TRAIN(int model) { return invoke<bool>(0xAB935175B22E822B, model); }
static bool IS_THIS_MODEL_A_BIKE(int model) { return invoke<bool>(0xB50C0B0CEDC6CE84, model); }
static bool IS_THIS_MODEL_A_BICYCLE(int model) { return invoke<bool>(0xBF94DD42F63BDED2, model); }
static bool IS_THIS_MODEL_A_QUADBIKE(int model) { return invoke<bool>(0x39DAC362EE65FA28, model); }
static void SET_HELI_BLADES_FULL_SPEED(int vehicle) { invoke<void *>(0xA178472EBB8AE60D, vehicle); }
static void SET_HELI_BLADES_SPEED(int vehicle, float speed) { invoke<void *>(0xFD280B4D7F3ABC4D, vehicle, speed); }
static void _0x99CAD8E7AFDB60FA(int vehicle, float p1, float p2) { invoke<void *>(0x99CAD8E7AFDB60FA, vehicle, p1, p2); }
static void SET_VEHICLE_CAN_BE_TARGETTED(int vehicle, bool state) { invoke<void *>(0x3750146A28097A82, vehicle, state); }
static void _0xDBC631F109350B8C(int vehicle, bool p1) { invoke<void *>(0xDBC631F109350B8C, vehicle, p1); }
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(int vehicle, bool state) { invoke<void *>(0x4C7028F78FFD3681, vehicle, state); }
static void _0x1AA8A837D2169D94(int vehicle, bool p1) { invoke<void *>(0x1AA8A837D2169D94, vehicle, p1); }
static void _0x2311DD7159F00582(int vehicle, bool p1) { invoke<void *>(0x2311DD7159F00582, vehicle, p1); }
static float GET_VEHICLE_DIRT_LEVEL(int vehicle) { return invoke<float>(0x8F17BC8BA08DA62B, vehicle); }
static void SET_VEHICLE_DIRT_LEVEL(int vehicle, float dirtLevel) { invoke<void *>(0x79D3B596FE44EE8B, vehicle, dirtLevel); }
static bool _IS_VEHICLE_DAMAGED(int vehicle) { return invoke<bool>(0xBCDC5017D3CE1E9E, vehicle); }
static bool IS_VEHICLE_DOOR_FULLY_OPEN(int vehicle, int doorIndex) { return invoke<bool>(0x3E933CFF7B111C22, vehicle, doorIndex); }
static void SET_VEHICLE_ENGINE_ON(int vehicle, bool value, bool instantly, bool otherwise) { invoke<void *>(0x2497C4717C8B881E, vehicle, value, instantly, otherwise); }
static void SET_VEHICLE_UNDRIVEABLE(int vehicle, bool toggle) { invoke<void *>(0x8ABA6AF54B942B95, vehicle, toggle); }
static void SET_VEHICLE_PROVIDES_COVER(int vehicle, bool toggle) { invoke<void *>(0x5AFEEDD9BB2899D7, vehicle, toggle); }
static void SET_VEHICLE_DOOR_CONTROL(int vehicle, int doorIndex, int speed, float angle) { invoke<void *>(0xF2BFA0430F0A0FCB, vehicle, doorIndex, speed, angle); }
static void SET_VEHICLE_DOOR_LATCHED(int vehicle, int doorIndex, bool p2, bool p3, bool p4) { invoke<void *>(0xA5A9653A8D2CAF48, vehicle, doorIndex, p2, p3, p4); }
static float GET_VEHICLE_DOOR_ANGLE_RATIO(int vehicle, int door) { return invoke<float>(0xFE3F9C29F7B32BD5, vehicle, door); }
static void SET_VEHICLE_DOOR_SHUT(int vehicle, int doorIndex, bool closeInstantly) { invoke<void *>(0x93D9BD300D7789E5, vehicle, doorIndex, closeInstantly); }
static void SET_VEHICLE_DOOR_BROKEN(int vehicle, int doorIndex, bool deleteDoor) { invoke<void *>(0xD4D4F6A4AB575A33, vehicle, doorIndex, deleteDoor); }
static void SET_VEHICLE_CAN_BREAK(int vehicle, bool toggle) { invoke<void *>(0x59BF8C3D52C92F66, vehicle, toggle); }
static bool DOES_VEHICLE_HAVE_ROOF(int vehicle) { return invoke<bool>(0x8AC862B0B32C5B80, vehicle); }
static bool IS_BIG_VEHICLE(int vehicle) { return invoke<bool>(0x9F243D3919F442FE, vehicle); }
static int GET_NUMBER_OF_VEHICLE_COLOURS(int vehicle) { return invoke<int>(0x3B963160CD65D41E, vehicle); }
static void SET_VEHICLE_COLOUR_COMBINATION(int vehicle, int colorCombination) { invoke<void *>(0x33E8CD3322E2FE31, vehicle, colorCombination); }
static int GET_VEHICLE_COLOUR_COMBINATION(int vehicle) { return invoke<int>(0x6A842D197F845D56, vehicle); }
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(int vehicle, bool toggle) { invoke<void *>(0x31B927BBC44156CD, vehicle, toggle); }
static void _0xBE5C1255A1830FF5(int vehicle, bool toggle) { invoke<void *>(0xBE5C1255A1830FF5, vehicle, toggle); }
static void _0x9BECD4B9FEF3F8A6(int vehicle, bool p1) { invoke<void *>(0x9BECD4B9FEF3F8A6, vehicle, p1); }
static void _0x88BC673CA9E0AE99(int vehicle, bool p1) { invoke<void *>(0x88BC673CA9E0AE99, vehicle, p1); }
static void _0xE851E480B814D4BA(int vehicle, bool p1) { invoke<void *>(0xE851E480B814D4BA, vehicle, p1); }
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(bool p0, int *modelint, int *p2) { invoke<void *>(0x055BF0AC0C34F4FD, p0, modelint, p2); }
static int GET_VEHICLE_DOOR_LOCK_STATUS(int vehicle) { return invoke<int>(0x25BC98A59C2EA962, vehicle); }
static bool IS_VEHICLE_DOOR_DAMAGED(int veh, int doorID) { return invoke<bool>(0xB8E181E559464527, veh, doorID); }
static void _SET_VEHICLE_DOOR_CAN_BREAK(int vehicle, int doorIndex, bool isBreakable) { invoke<void *>(0x2FA133A4A9D37ED8, vehicle, doorIndex, isBreakable); }
static bool _0x27B926779DEB502D(int vehicle, bool frontBumper) { return invoke<bool>(0x27B926779DEB502D, vehicle, frontBumper); }
static bool IS_VEHICLE_BUMPER_BROKEN_OFF(int vehicle, bool front) { return invoke<bool>(0x468056A6BB6F3846, vehicle, front); }
static bool IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<bool>(0x7EEF65D5F153E26A, x1, x2, y1, y2, z1, z2); }
static bool IS_VEHICLE_ON_ALL_WHEELS(int vehicle) { return invoke<bool>(0xB104CD1BABF302E2, vehicle); }
static int GET_VEHICLE_LAYOUT_HASH(int vehicle) { return invoke<int>(0x28D37D4F71AC5C58, vehicle); }
static void SET_RENDER_TRAIN_AS_DERAILED(int train, bool toggle) { invoke<void *>(0x317B11A312DF5534, train, toggle); }
static void SET_VEHICLE_EXTRA_COLOURS(int vehicle, int pearlescentColor, int wheelColor) { invoke<void *>(0x2036F561ADD12E33, vehicle, pearlescentColor, wheelColor); }
static void GET_VEHICLE_EXTRA_COLOURS(int vehicle, int *pearlescentColor, int *wheelColor) { invoke<void *>(0x3BC4245933A166F7, vehicle, pearlescentColor, wheelColor); }
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<void *>(0x0F87E938BDF29D66); }
static void SET_VEHICLE_FIXED(int vehicle) { invoke<void *>(0x115722B1B9C14C1C, vehicle); }
static void SET_VEHICLE_DEFORMATION_FIXED(int vehicle) { invoke<void *>(0x953DA1E1B12C0491, vehicle); }
static void _0x51BB2D88D31A914B(int vehicle, bool p1) { invoke<void *>(0x51BB2D88D31A914B, vehicle, p1); }
static void _0x192547247864DFDD(int vehicle, bool p1) { invoke<void *>(0x192547247864DFDD, vehicle, p1); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(int vehicle, bool toggle) { invoke<void *>(0x465BF26AB9684352, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(int vehicle, bool toggle) { invoke<void *>(0x37C8252A7C92D017, vehicle, toggle); }
static void _0x91A0BD635321F145(int vehicle, bool p1) { invoke<void *>(0x91A0BD635321F145, vehicle, p1); }
static void _0xC50CE861B55EAB8B(int vehicle, bool p1) { invoke<void *>(0xC50CE861B55EAB8B, vehicle, p1); }
static void _0x6EBFB22D646FFC18(int vehicle, bool p1) { invoke<void *>(0x6EBFB22D646FFC18, vehicle, p1); }
static void _0x25367DE49D64CF16(int vehicle, bool p1) { invoke<void *>(0x25367DE49D64CF16, vehicle, p1); }
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int unk) { invoke<void *>(0x46A1E1A299EC4BBA, x1, y1, z1, x2, y2, z2, unk); }
static void SET_VEHICLE_STEER_BIAS(int vehicle, float value) { invoke<void *>(0x42A8EC77D5150CBE, vehicle, value); }
static bool IS_VEHICLE_EXTRA_TURNED_ON(int vehicle, int extraId) { return invoke<bool>(0xD2E6822DBFD6C8BD, vehicle, extraId); }
static void SET_VEHICLE_EXTRA(int vehicle, int extraId, bool disable) { invoke<void *>(0x7EE3A3C5E4A40CC9, vehicle, extraId, disable); }
static bool DOES_EXTRA_EXIST(int vehicle, int extraId) { return invoke<bool>(0x1262D55792428154, vehicle, extraId); }
static void SET_CONVERTIBLE_ROOF(int vehicle, bool p1) { invoke<void *>(0xF39C4F538B5124C2, vehicle, p1); }
static void LOWER_CONVERTIBLE_ROOF(int vehicle, bool instantlyLower) { invoke<void *>(0xDED51F703D0FA83D, vehicle, instantlyLower); }
static void RAISE_CONVERTIBLE_ROOF(int vehicle, bool instantlyRaise) { invoke<void *>(0x8F5FB35D7E88FC70, vehicle, instantlyRaise); }
static int GET_CONVERTIBLE_ROOF_STATE(int vehicle) { return invoke<int>(0xF8C397922FC03F41, vehicle); }
static bool IS_VEHICLE_A_CONVERTIBLE(int vehicle, bool p1) { return invoke<bool>(0x52F357A30698BCCE, vehicle, p1); }
static bool IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(int vehicle) { return invoke<bool>(0x2959F696AE390A99, vehicle); }
static void SET_VEHICLE_DAMAGE(int vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, bool p6) { invoke<void *>(0xA1DD317EA8FD4F29, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); }
static float GET_VEHICLE_ENGINE_HEALTH(int vehicle) { return invoke<float>(0xC45D23BAF168AAB8, vehicle); }
static void SET_VEHICLE_ENGINE_HEALTH(int vehicle, float health) { invoke<void *>(0x45F6D8EEF34ABEF1, vehicle, health); }
static float GET_VEHICLE_PETROL_TANK_HEALTH(int vehicle) { return invoke<float>(0x7D5DABE888D2D074, vehicle); }
static void SET_VEHICLE_PETROL_TANK_HEALTH(int vehicle, float health) { invoke<void *>(0x70DB57649FA8D0D8, vehicle, health); }
static bool IS_VEHICLE_STUCK_TIMER_UP(int vehicle, int p1, int p2) { return invoke<bool>(0x679BE1DAF71DA874, vehicle, p1, p2); }
static void RESET_VEHICLE_STUCK_TIMER(int vehicle, int nullAttributes) { invoke<void *>(0xD7591B0065AFAA7A, vehicle, nullAttributes); }
static bool IS_VEHICLE_DRIVEABLE(int vehicle, bool isOnFireCheck) { return invoke<bool>(0x4C241E39B23DF959, vehicle, isOnFireCheck); }
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(int vehicle, bool owned) { invoke<void *>(0x2B5F9D2AF1F1722D, vehicle, owned); }
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(int vehicle, bool toggle) { invoke<void *>(0xFBA550EA44404EE6, vehicle, toggle); }
static void START_VEHICLE_HORN(int vehicle, int duration, int mode, bool forever) { invoke<void *>(0x9C8C6504B5B63D2C, vehicle, duration, mode, forever); }
static void _SET_VEHICLE_SILENT(int vehicle, bool toggle) { invoke<void *>(0x9D44FCCE98450843, vehicle, toggle); }
static void SET_VEHICLE_HAS_STRONG_AXLES(int vehicle, bool toggle) { invoke<void *>(0x92F0CF722BC4202F, vehicle, toggle); }
static char *GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(int modelint) { return invoke<char *>(0xB215AAC32D25D019, modelint); }
static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(int vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x4EC6CFBC7B2E9536, vehicle, offsetX, offsetY, offsetZ); }
static void SET_VEHICLE_LIVERY(int vehicle, int livery) { invoke<void *>(0x60BF608F1B8CD1B6, vehicle, livery); }
static int GET_VEHICLE_LIVERY(int vehicle) { return invoke<int>(0x2BB9230590DA5E8A, vehicle); }
static int GET_VEHICLE_LIVERY_COUNT(int vehicle) { return invoke<int>(0x87B63E25A529D526, vehicle); }
static bool IS_VEHICLE_WINDOW_INTACT(int vehicle, int windowIndex) { return invoke<bool>(0x46E571A0E20D01F1, vehicle, windowIndex); }
static bool ARE_ALL_VEHICLE_WINDOWS_INTACT(int vehicle) { return invoke<bool>(0x11D862A3E977A9EF, vehicle); }
static bool ARE_ANY_VEHICLE_SEATS_FREE(int vehicle) { return invoke<bool>(0x2D34FC3BC4ADB780, vehicle); }
static void RESET_VEHICLE_WHEELS(int vehicle, bool toggle) { invoke<void *>(0x21D2E5662C1F6FED, vehicle, toggle); }
static bool IS_HELI_PART_BROKEN(int vehicle, bool p1, bool p2, bool p3) { return invoke<bool>(0xBC74B4BE25EB6C8A, vehicle, p1, p2, p3); }
static float _GET_HELI_MAIN_ROTOR_HEALTH(int vehicle) { return invoke<float>(0xE4CB7541F413D2C5, vehicle); }
static float _GET_HELI_TAIL_ROTOR_HEALTH(int vehicle) { return invoke<float>(0xAE8CE82A4219AC8C, vehicle); }
static float _GET_HELI_ENGINE_HEALTH(int vehicle) { return invoke<float>(0xAC51915D27E4A5F7, vehicle); }
static bool WAS_COUNTER_ACTIVATED(int vehicle, int p1) { return invoke<bool>(0x3EC8BF18AA453FE9, vehicle, p1); }
static void SET_VEHICLE_NAME_DEBUG(int vehicle, char *name) { invoke<void *>(0xBFDF984E2C22B94F, vehicle, name); }
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(int vehicle, bool toggle) { invoke<void *>(0x71B0892EC081D60A, vehicle, toggle); }
static void _0x3441CAD2F2231923(int vehicle, bool p1) { invoke<void *>(0x3441CAD2F2231923, vehicle, p1); }
static void _0x2B6747FAA9DB9D6B(int vehicle, bool p1) { invoke<void *>(0x2B6747FAA9DB9D6B, vehicle, p1); }
static void CONTROL_LANDING_GEAR(int vehicle, int state) { invoke<void *>(0xCFC8BE9A5E1FE575, vehicle, state); }
static int GET_LANDING_GEAR_STATE(int vehicle) { return invoke<int>(0x9B0F3DCA3DB0F4CD, vehicle); }
static bool IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<bool>(0x61E1DD6125A3EEE6, x, y, z, radius); }
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(int vehicle) { invoke<void *>(0xA6E9FDCB2C76785E, vehicle); }
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(int vehicle) { invoke<void *>(0x00689CDE5F7C6787, vehicle); }
static bool IS_VEHICLE_HIGH_DETAIL(int vehicle) { return invoke<bool>(0x1F25887F3C104278, vehicle); }
static void REQUEST_VEHICLE_ASSET(int vehicleint, int vehicleAsset) { invoke<void *>(0x81A15811460FAB3A, vehicleint, vehicleAsset); }
static bool HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<bool>(0x1BBE0523B8DB9A21, vehicleAsset); }
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<void *>(0xACE699C71AB9DEB5, vehicleAsset); }
static void _SET_TOW_TRUCK_CRANE_HEIGHT(int towTruck, float height) { invoke<void *>(0xFE54B92A344583CA, towTruck, height); }
static void ATTACH_VEHICLE_TO_TOW_TRUCK(int towTruck, int vehicle, bool rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<void *>(0x29A16F8D621C4508, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
static void DETACH_VEHICLE_FROM_TOW_TRUCK(int towTruck, int vehicle) { invoke<void *>(0xC2DB6B6708350ED8, towTruck, vehicle); }
static bool DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(int vehicle) { return invoke<bool>(0xD0E9CE05A1E68CD8, vehicle); }
static bool IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(int towTruck, int vehicle) { return invoke<bool>(0x146DF9EC4C4B9FD4, towTruck, vehicle); }
static int GET_ENTITY_ATTACHED_TO_TOW_TRUCK(int towTruck) { return invoke<int>(0xEFEA18DCF10F8F75, towTruck); }
static int SET_VEHICLE_AUTOMATICALLY_ATTACHES(int vehicle, bool p1, int p2) { return invoke<int>(0x8BA6F76BC53A1493, vehicle, p1, p2); }
static void _0xF8EBCCC96ADB9FB7(int p0, float p1, bool p2) { invoke<void *>(0xF8EBCCC96ADB9FB7, p0, p1, p2); }
static void _0x56B94C6D7127DFBA(int p0, float p1, bool p2) { invoke<void *>(0x56B94C6D7127DFBA, p0, p1, p2); }
static void _0x1093408B4B9D1146(int p0, float p1) { invoke<void *>(0x1093408B4B9D1146, p0, p1); }
static void _0x30D779DE7C4F6DD3(int p0, float p1) { invoke<void *>(0x30D779DE7C4F6DD3, p0, p1); }
static void _0x9AA47FFF660CB932(int p0, float p1) { invoke<void *>(0x9AA47FFF660CB932, p0, p1); }
static bool _0xA4822F1CF23F4810(Vector3 *outVec, int p1, Vector3 *outVec1, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<bool>(0xA4822F1CF23F4810, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
static void SET_VEHICLE_BURNOUT(int vehicle, bool toggle) { invoke<void *>(0xFB8794444A7D60FB, vehicle, toggle); }
static bool IS_VEHICLE_IN_BURNOUT(int vehicle) { return invoke<bool>(0x1297A88E081430EB, vehicle); }
static void SET_VEHICLE_REDUCE_GRIP(int vehicle, bool toggle) { invoke<void *>(0x222FF6A823D122E2, vehicle, toggle); }
static void SET_VEHICLE_INDICATOR_LIGHTS(int vehicle, int turnSignal, bool toggle) { invoke<void *>(0xB5D45264751B7DF0, vehicle, turnSignal, toggle); }
static void SET_VEHICLE_BRAKE_LIGHTS(int vehicle, bool toggle) { invoke<void *>(0x92B35082E0B42F66, vehicle, toggle); }
static void SET_VEHICLE_HANDBRAKE(int vehicle, bool toggle) { invoke<void *>(0x684785568EF26A22, vehicle, toggle); }
static void _0x48ADC8A773564670() { invoke<void *>(0x48ADC8A773564670); }
static bool _0x91D6DD290888CBAB() { return invoke<bool>(0x91D6DD290888CBAB); }
static void _0x51DB102F4A3BA5E0(bool p0) { invoke<void *>(0x51DB102F4A3BA5E0, p0); }
static bool GET_VEHICLE_TRAILER_VEHICLE(int vehicle, int *trailer) { return invoke<bool>(0x1CDD6BADC297830D, vehicle, trailer); }
static void _0xCAC66558B944DA67(int vehicle, bool p1) { invoke<void *>(0xCAC66558B944DA67, vehicle, p1); }
static void SET_VEHICLE_RUDDER_BROKEN(int vehicle, bool p1) { invoke<void *>(0x09606148B6C71DEF, vehicle, p1); }
static void _0x1A78AD3D8240536F(int vehicle, bool p1) { invoke<void *>(0x1A78AD3D8240536F, vehicle, p1); }
static float _GET_VEHICLE_MAX_SPEED(int vehicle) { return invoke<float>(0x53AF99BAA671CA47, vehicle); }
static float GET_VEHICLE_MAX_BRAKING(int vehicle) { return invoke<float>(0xAD7E85FC227197C4, vehicle); }
static float GET_VEHICLE_MAX_TRACTION(int vehicle) { return invoke<float>(0xA132FB5370554DB0, vehicle); }
static float GET_VEHICLE_ACCELERATION(int vehicle) { return invoke<float>(0x5DD35C8D074E57AE, vehicle); }
static float _GET_VEHICLE_MODEL_MAX_SPEED(int modelint) { return invoke<float>(0xF417C2502FFFED43, modelint); }
static float GET_VEHICLE_MODEL_MAX_BRAKING(int modelint) { return invoke<float>(0xDC53FD41B4ED944C, modelint); }
static float _0xBFBA3BA79CFF7EBF(int modelint) { return invoke<float>(0xBFBA3BA79CFF7EBF, modelint); }
static float GET_VEHICLE_MODEL_MAX_TRACTION(int modelint) { return invoke<float>(0x539DE94D44FDFD0D, modelint); }
static float GET_VEHICLE_MODEL_ACCELERATION(int modelint) { return invoke<float>(0x8C044C5C84505B6A, modelint); }
static float _0x53409B5163D5B846(int modelint) { return invoke<float>(0x53409B5163D5B846, modelint); }
static float _0xC6AD107DDC9054CC(int modelint) { return invoke<float>(0xC6AD107DDC9054CC, modelint); }
static float _0x5AA3F878A178C4FC(int modelint) { return invoke<float>(0x5AA3F878A178C4FC, modelint); }
static float _0x00C09F246ABEDD82(int vehicleClass) { return invoke<float>(0x00C09F246ABEDD82, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0xDBC86D85C5059461, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0x4F930AD022D6DE3B, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0x2F83E7E45D9EA7AE, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0x4BF54C16EC8FEC03, vehicleClass); }
static int _0x2CE544C68FB812A0(float p0, float p1, float p2, float p3, float p4, bool p5) { return invoke<int>(0x2CE544C68FB812A0, p0, p1, p2, p3, p4, p5); }
static bool _0x1033371FC8E842A7(int p0) { return invoke<bool>(0x1033371FC8E842A7, p0); }
static void OPEN_BOMB_BAY_DOORS(int vehicle) { invoke<void *>(0x87E7F24270732CB1, vehicle); }
static void CLOSE_BOMB_BAY_DOORS(int vehicle) { invoke<void *>(0x3556041742A0DC74, vehicle); }
static bool IS_VEHICLE_SEARCHLIGHT_ON(int vehicle) { return invoke<bool>(0xC0F97FCE55094987, vehicle); }
static void SET_VEHICLE_SEARCHLIGHT(int heli, bool toggle, bool canBeUsedByAI) { invoke<void *>(0x14E85C5EE7A4D542, heli, toggle, canBeUsedByAI); }
static bool _0x639431E895B9AA57(int ped, int vehicle, bool p2, bool p3, bool p4) { return invoke<bool>(0x639431E895B9AA57, ped, vehicle, p2, p3, p4); }
static bool CAN_SHUFFLE_SEAT(int vehicle, int p1) { return invoke<bool>(0x30785D90C956BF35, vehicle, p1); }
static int GET_NUM_MOD_KITS(int vehicle) { return invoke<int>(0x33F2E3FE70EAAE1D, vehicle); }
static void SET_VEHICLE_MOD_KIT(int vehicle, int modKit) { invoke<void *>(0x1F2AA07F00B3217A, vehicle, modKit); }
static int GET_VEHICLE_MOD_KIT(int vehicle) { return invoke<int>(0x6325D1A044AE510D, vehicle); }
static int GET_VEHICLE_MOD_KIT_TYPE(int vehicle) { return invoke<int>(0xFC058F5121E54C32, vehicle); }
static int GET_VEHICLE_WHEEL_TYPE(int vehicle) { return invoke<int>(0xB3ED1BFB4BE636DC, vehicle); }
static void SET_VEHICLE_WHEEL_TYPE(int vehicle, int WheelType) { invoke<void *>(0x487EB21CC7295BA1, vehicle, WheelType); }
static int GET_NUM_MOD_COLORS(int p0, bool p1) { return invoke<int>(0xA551BE18C11A476D, p0, p1); }
static void SET_VEHICLE_MOD_COLOR_1(int vehicle, int paintType, int color, int p3) { invoke<void *>(0x43FEB945EE7F85B8, vehicle, paintType, color, p3); }
static void SET_VEHICLE_MOD_COLOR_2(int vehicle, int paintType, int color) { invoke<void *>(0x816562BADFDEC83E, vehicle, paintType, color); }
static void GET_VEHICLE_MOD_COLOR_1(int vehicle, int *paintType, int *color, int *p3) { invoke<void *>(0xE8D65CA700C9A693, vehicle, paintType, color, p3); }
static void GET_VEHICLE_MOD_COLOR_2(int vehicle, int *paintType, int *color) { invoke<void *>(0x81592BE4E3878728, vehicle, paintType, color); }
static char *GET_VEHICLE_MOD_COLOR_1_NAME(int vehicle, bool p1) { return invoke<char *>(0xB45085B721EFD38C, vehicle, p1); }
static char *GET_VEHICLE_MOD_COLOR_2_NAME(int vehicle) { return invoke<char *>(0x4967A516ED23A5A1, vehicle); }
static bool _IS_VEHICLE_MOD_LOAD_DONE(int vehicle) { return invoke<bool>(0x9A83F5F9963775EF, vehicle); }
static void SET_VEHICLE_MOD(int vehicle, int modType, int modIndex, bool customTires) { invoke<void *>(0x6AF0636DDEDCB6DD, vehicle, modType, modIndex, customTires); }
static int GET_VEHICLE_MOD(int vehicle, int modType) { return invoke<int>(0x772960298DA26FDB, vehicle, modType); }
static bool GET_VEHICLE_MOD_VARIATION(int vehicle, int modType) { return invoke<bool>(0xB3924ECD70E095DC, vehicle, modType); }
static int GET_NUM_VEHICLE_MODS(int vehicle, int modType) { return invoke<int>(0xE38E9162A2500646, vehicle, modType); }
static void REMOVE_VEHICLE_MOD(int vehicle, int modType) { invoke<void *>(0x92D619E420858204, vehicle, modType); }
static void TOGGLE_VEHICLE_MOD(int vehicle, int modType, bool toggle) { invoke<void *>(0x2A1F4F37F95BAD08, vehicle, modType, toggle); }
static bool IS_TOGGLE_MOD_ON(int vehicle, int modType) { return invoke<bool>(0x84B233A8C8FC8AE7, vehicle, modType); }
static char *GET_MOD_TEXT_LABEL(int vehicle, int modType, int modValue) { return invoke<char *>(0x8935624F8C5592CC, vehicle, modType, modValue); }
static char *GET_MOD_SLOT_NAME(int vehicle, int modType) { return invoke<char *>(0x51F0FEB9F6AE98C0, vehicle, modType); }
static char *GET_LIVERY_NAME(int vehicle, int liveryIndex) { return invoke<char *>(0xB4C7A93837C91A1F, vehicle, liveryIndex); }
static float GET_VEHICLE_MOD_MODIFIER_VALUE(int vehicle, int modType, int modIndex) { return invoke<float>(0x90A38E9838E0A8C1, vehicle, modType, modIndex); }
static int _GET_VEHICLE_MOD_DATA(int vehicle, int modType, int modIndex) { return invoke<int>(0x4593CF82AA179706, vehicle, modType, modIndex); }
static void PRELOAD_VEHICLE_MOD(int p0, int modType, int p2) { invoke<void *>(0x758F49C24925568A, p0, modType, p2); }
static bool HAS_PRELOAD_MODS_FINISHED(int p0) { return invoke<bool>(0x06F43E5175EB6D96, p0); }
static void RELEASE_PRELOAD_MODS(int vehicle) { invoke<void *>(0x445D79F995508307, vehicle); }
static void SET_VEHICLE_TYRE_SMOKE_COLOR(int vehicle, int r, int g, int b) { invoke<void *>(0xB5BA80F839791C0F, vehicle, r, g, b); }
static void GET_VEHICLE_TYRE_SMOKE_COLOR(int vehicle, int *r, int *g, int *b) { invoke<void *>(0xB635392A4938B3C3, vehicle, r, g, b); }
static void SET_VEHICLE_WINDOW_TINT(int vehicle, int tint) { invoke<void *>(0x57C51E6BAD752696, vehicle, tint); }
static int GET_VEHICLE_WINDOW_TINT(int vehicle) { return invoke<int>(0x0EE21293DAD47C95, vehicle); }
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x9D1224004B3A6707); }
static void GET_VEHICLE_COLOR(int vehicle, int *r, int *g, int *b) { invoke<void *>(0xF3CC740D36221548, vehicle, r, g, b); }
static int _0xEEBFC7A7EFDC35B4(int vehicle) { return invoke<int>(0xEEBFC7A7EFDC35B4, vehicle); }
static int GET_VEHICLE_CAUSE_OF_DESTRUCTION(int vehicle) { return invoke<int>(0xE495D1EF4C91FD20, vehicle); }
static bool GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(int vehicle) { return invoke<bool>(0x5EF77C9ADD3B11A3, vehicle); }
static bool GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(int vehicle) { return invoke<bool>(0xA7ECB73355EB2F20, vehicle); }
static void _SET_VEHICLE_ENGINE_POWER_MULTIPLIER(int vehicle, float value) { invoke<void *>(0x93A3996368C94158, vehicle, value); }
static void _SET_VEHICLE_SUKA(int vehicle, bool toggle) { invoke<void *>(0x1CF38D529D7441D9, vehicle, toggle); }
static void _0x1F9FB66F3A3842D2(int vehicle, bool p1) { invoke<void *>(0x1F9FB66F3A3842D2, vehicle, p1); }
static int _0x54B0F614960F4A5F(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0x54B0F614960F4A5F, p0, p1, p2, p3, p4, p5, p6); }
static void _0xE30524E1871F481D(int p0) { invoke<void *>(0xE30524E1871F481D, p0); }
static bool _ANY_PASSENGERS_RAPPELING(int vehicle) { return invoke<bool>(0x291E373D483E7EE7, vehicle); }
static void _SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(int vehicle, float value) { invoke<void *>(0xB59E4BD37AE292DB, vehicle, value); }
static void _0x0AD9E8F87FF7C16F(int p0, bool p1) { invoke<void *>(0x0AD9E8F87FF7C16F, p0, p1); }
static void SET_VEHICLE_IS_WANTED(int vehicle, bool state) { invoke<void *>(0xF7EC25A3EBEEC726, vehicle, state); }
static void _0xF488C566413B4232(int p0, float p1) { invoke<void *>(0xF488C566413B4232, p0, p1); }
static void _0xC1F981A6F74F0C23(int p0, bool p1) { invoke<void *>(0xC1F981A6F74F0C23, p0, p1); }
static void _0x0F3B4D4E43177236(int p0, bool p1) { invoke<void *>(0x0F3B4D4E43177236, p0, p1); }
static float _0x6636C535F6CC2725(int vehicle) { return invoke<float>(0x6636C535F6CC2725, vehicle); }
static void DISABLE_PLANE_AILERON(int vehicle, bool p1, bool p2) { invoke<void *>(0x23428FC53C60919C, vehicle, p1, p2); }
static bool GET_IS_VEHICLE_ENGINE_RUNNING(int vehicle) { return invoke<bool>(0xAE31E7DF9B5B132E, vehicle); }
static void _0x1D97D1E3A70A649F(int vehicle, bool p1) { invoke<void *>(0x1D97D1E3A70A649F, vehicle, p1); }
static void _SET_BIKE_LEAN_ANGLE(int vehicle, float x, float y) { invoke<void *>(0x9CFA4896C3A53CBB, vehicle, x, y); }
static void _0xAB04325045427AAE(int vehicle, bool p1) { invoke<void *>(0xAB04325045427AAE, vehicle, p1); }
static void _0xCFD778E7904C255E(int vehicle) { invoke<void *>(0xCFD778E7904C255E, vehicle); }
static void SET_LAST_DRIVEN_VEHICLE(int vehicle) { invoke<void *>(0xACFB2463CC22BED2, vehicle); }
static int GET_LAST_DRIVEN_VEHICLE() { return invoke<int>(0xB2D06FAEDE65B577); }
static void _0x02398B627547189C(int p0, bool p1) { invoke<void *>(0x02398B627547189C, p0, p1); }
static void _SET_PLANE_MIN_HEIGHT_ABOVE_GROUND(int plane, int height) { invoke<void *>(0xB893215D8D4C015B, plane, height); }
static void SET_VEHICLE_LOD_MULTIPLIER(int vehicle, float multiplier) { invoke<void *>(0x93AE6A61BE015BF1, vehicle, multiplier); }
static void _0x428BACCDF5E26EAD(int vehicle, bool p1) { invoke<void *>(0x428BACCDF5E26EAD, vehicle, p1); }
static int _0x42A4BEB35D372407(int p0) { return invoke<int>(0x42A4BEB35D372407, p0); }
static int _0x2C8CBFE1EA5FC631(int p0) { return invoke<int>(0x2C8CBFE1EA5FC631, p0); }
static void _0x4D9D109F63FEE1D4(int p0, bool p1) { invoke<void *>(0x4D9D109F63FEE1D4, p0, p1); }
static void _0x279D50DE5652D935(int p0, bool p1) { invoke<void *>(0x279D50DE5652D935, p0, p1); }
static void _0xE44A982368A4AF23(int vehicle, int vehicle2) { invoke<void *>(0xE44A982368A4AF23, vehicle, vehicle2); }
static void _0xF25E02CB9C5818F8() { invoke<void *>(0xF25E02CB9C5818F8); }
static void _0xBC3CCA5844452B06(float p0) { invoke<void *>(0xBC3CCA5844452B06, p0); }
static void SET_VEHICLE_SHOOT_AT_TARGET(int driver, int entity, float xTarget, float yTarget, float zTarget) { invoke<void *>(0x74CD9A9327A282EA, driver, entity, xTarget, yTarget, zTarget); }
static bool _GET_VEHICLE_OWNER(int vehicle, int *entity) { return invoke<bool>(0x8F5EBAB1F260CFCE, vehicle, entity); }
static void SET_FORCE_HD_VEHICLE(int vehicle, bool toggle) { invoke<void *>(0x97CE68CB032583F0, vehicle, toggle); }
static void _0x182F266C2D9E2BEB(int vehicle, float p1) { invoke<void *>(0x182F266C2D9E2BEB, vehicle, p1); }
static int GET_VEHICLE_PLATE_TYPE(int vehicle) { return invoke<int>(0x9CCC9525BF2408E0, vehicle); }
static void TRACK_VEHICLE_VISIBILITY(int vehicle) { invoke<void *>(0x64473AEFDCF47DCA, vehicle); }
static bool IS_VEHICLE_VISIBLE(int vehicle) { return invoke<bool>(0xAA0A52D24FB98293, vehicle); }
static void SET_VEHICLE_GRAVITY(int vehicle, bool toggle) { invoke<void *>(0x89F149B6131E57DA, vehicle, toggle); }
static void _0xE6C0C80B8C867537(bool p0) { invoke<void *>(0xE6C0C80B8C867537, p0); }
static int _0x36492C2F0D134C56(int p0) { return invoke<int>(0x36492C2F0D134C56, p0); }
static void _0x06582AFF74894C75(int vehicle, bool p1) { invoke<void *>(0x06582AFF74894C75, vehicle, p1); }
static void _0xDFFCEF48E511DB48(int p0, bool p1) { invoke<void *>(0xDFFCEF48E511DB48, p0, p1); }
static bool _IS_VEHICLE_SHOP_RESPRAY_ALLOWED(int vehicle) { return invoke<bool>(0x8D474C8FAEFF6CDE, vehicle); }
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(int vehicle, bool toggle) { invoke<void *>(0x983765856F2564F9, vehicle, toggle); }
static void _0xF0E4BA16D1DB546C(int vehicle, int p1, int p2) { invoke<void *>(0xF0E4BA16D1DB546C, vehicle, p1, p2); }
static void _0xF87D9F2301F7D206(int p0) { invoke<void *>(0xF87D9F2301F7D206, p0); }
static bool _VEHICLE_HAS_LANDING_GEAR(int vehicle) { return invoke<bool>(0x4198AB0022B15F87, vehicle); }
static bool _ARE_PROPELLERS_UNDAMAGED(int vehicle) { return invoke<bool>(0x755D6D5267CBBD7E, vehicle); }
static void _0x0CDDA42F9E360CA6(int vehicle, bool p1) { invoke<void *>(0x0CDDA42F9E360CA6, vehicle, p1); }
static bool IS_VEHICLE_STOLEN(int vehicle) { return invoke<bool>(0x4AF9BD80EEBEB453, vehicle); }
static void SET_VEHICLE_IS_STOLEN(int vehicle, bool isStolen) { invoke<void *>(0x67B2C79AA7FF5738, vehicle, isStolen); }
static void _0xAD2D28A1AFDFF131(int vehicle, float value) { invoke<void *>(0xAD2D28A1AFDFF131, vehicle, value); }
static bool _ARE_VEHICLE_WINGS_INTACT(int vehicle) { return invoke<bool>(0x5991A01434CE9677, vehicle); }
static void _0xB264C4D2F2B0A78B(int vehicle) { invoke<void *>(0xB264C4D2F2B0A78B, vehicle); }
static void DETACH_VEHICLE_FROM_CARGOBOB(int vehicle, int cargobob) { invoke<void *>(0x0E21D3DF1051399D, vehicle, cargobob); }
static bool DETACH_VEHICLE_FROM_ANY_CARGOBOB(int vehicle) { return invoke<bool>(0xADF7BE450512C12F, vehicle); }
static bool IS_VEHICLE_ATTACHED_TO_CARGOBOB(int cargobob, int vehicleAttached) { return invoke<bool>(0xD40148F22E81A1D9, cargobob, vehicleAttached); }
static int GET_VEHICLE_ATTACHED_TO_CARGOBOB(int cargobob) { return invoke<int>(0x873B82D42AC2B9E5, cargobob); }
static void ATTACH_VEHICLE_TO_CARGOBOB(int vehicle, int cargobob, int p2, float x, float y, float z) { invoke<void *>(0x4127F1D84E347769, vehicle, cargobob, p2, x, y, z); }
static bool DOES_CARGOBOB_HAVE_PICK_UP_ROPE(int cargobob) { return invoke<bool>(0x1821D91AD4B56108, cargobob); }
static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(int cargobob, int state) { invoke<void *>(0x7BEB0C7A235F6F3B, cargobob, state); }
static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(int cargobob) { invoke<void *>(0x9768CF648F54C804, cargobob); }
static void _SET_CARGOBOB_HOOK_POSITION(int p0, float p1, float p2, int state) { invoke<void *>(0x877C1EAEAC531023, p0, p1, p2, state); }
static bool DOES_VEHICLE_HAVE_WEAPONS(int vehicle) { return invoke<bool>(0x25ECB9F8017D98E0, vehicle); }
static void _0x2C4A1590ABF43E8B(int vehicle, bool p1) { invoke<void *>(0x2C4A1590ABF43E8B, vehicle, p1); }
static void DISABLE_VEHICLE_WEAPON(bool disabled, int weaponint, int vehicle, int owner) { invoke<void *>(0xF4FC6A6F67D8D856, disabled, weaponint, vehicle, owner); }
static void _0xE05DD0E9707003A3(int p0, bool p1) { invoke<void *>(0xE05DD0E9707003A3, p0, p1); }
static void _0x21115BCD6E44656A(int p0, bool p1) { invoke<void *>(0x21115BCD6E44656A, p0, p1); }
static int GET_VEHICLE_CLASS(int vehicle) { return invoke<int>(0x29439776AAA00A62, vehicle); }
static int GET_VEHICLE_CLASS_FROM_NAME(int modelint) { return invoke<int>(0xDEDF1C8BD47C2200, modelint); }
static void SET_PLAYERS_LAST_VEHICLE(int vehicle) { invoke<void *>(0xBCDF8BAF56C87B6A, vehicle); }
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(int vehicle, bool toggle) { invoke<void *>(0x300504B23BD3B711, vehicle, toggle); }
static void _0xE5810AC70602F2F5(int vehicle, float p1) { invoke<void *>(0xE5810AC70602F2F5, vehicle, p1); }
static void _SET_VEHICLE_CREATES_MONEY_PICKUPS_WHEN_EXPLODED(int vehicle, bool toggle) { invoke<void *>(0x068F64F2470F9656, vehicle, toggle); }
static void _SET_VEHICLE_JET_ENGINE_ON(int vehicle, bool toggle) { invoke<void *>(0xB8FBC8B1330CA9B4, vehicle, toggle); }
static void _0x79DF7E806202CE01(int p0, int p1) { invoke<void *>(0x79DF7E806202CE01, p0, p1); }
static void _0x9007A2F21DC108D4(int p0, float p1) { invoke<void *>(0x9007A2F21DC108D4, p0, p1); }
static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(int helicopter, float multiplier) { invoke<void *>(0x6E0859B530A365CC, helicopter, multiplier); }
static void SET_VEHICLE_FRICTION_OVERRIDE(int vehicle, float friction) { invoke<void *>(0x1837AF7C627009BA, vehicle, friction); }
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(int vehicle, bool toggle) { invoke<void *>(0xA37B9A517B133349, vehicle, toggle); }
static void SET_VEHICLE_CEILING_HEIGHT(int vehicle, float p1) { invoke<void *>(0xA46413066687A328, vehicle, p1); }
static void _0x5E569EC46EC21CAE(int vehicle, bool toggle) { invoke<void *>(0x5E569EC46EC21CAE, vehicle, toggle); }
static void _0x6D6AF961B72728AE(int vehicle) { invoke<void *>(0x6D6AF961B72728AE, vehicle); }
static bool DOES_VEHICLE_EXIST_WITH_DECORATOR(char *decorator) { return invoke<bool>(0x956B409B984D9BF7, decorator); }
static void SET_VEHICLE_EXCLUSIVE_DRIVER(int vehicle, bool p1) { invoke<void *>(0x41062318F23ED854, vehicle, p1); }
static void _DISPLAY_DISTANT_VEHICLES(bool toggle) { invoke<void *>(0xF796359A959DF65D, toggle); }
static float GET_VEHICLE_BODY_HEALTH(int vehicle) { return invoke<float>(0xF271147EB7B40F12, vehicle); }
static void SET_VEHICLE_BODY_HEALTH(int vehicle, float value) { invoke<void *>(0xB77D05AC8C78AADB, vehicle, value); }
static float _GET_VEHICLE_SUSPENSION_HEIGHT(int vehicle) { return invoke<float>(0x53952FD2BAA19F17, vehicle); }
static int CREATE_OBJECT(int modelint, float x, float y, float z, bool isNetwork, bool thisScriptCheck, bool dynamic) { return invoke<int>(0x509D5878EB39E842, modelint, x, y, z, isNetwork, thisScriptCheck, dynamic); }
static int CREATE_OBJECT_NO_OFFSET(int modelint, float x, float y, float z, bool isNetwork, bool thisScriptCheck, bool dynamic) { return invoke<int>(0x9A294B2138ABB884, modelint, x, y, z, isNetwork, thisScriptCheck, dynamic); }
static void DELETE_OBJECT(int *object) { invoke<void *>(0x539E0AE3E6634B9F, object); }
static bool PLACE_OBJECT_ON_GROUND_PROPERLY(int object) { return invoke<bool>(0x58A850EAEE20FAA3, object); }
static bool SLIDE_OBJECT(int object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, bool collision) { return invoke<bool>(0x2FDFF4107B8C1147, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
static void SET_OBJECT_TARGETTABLE(int object, bool targettable) { invoke<void *>(0x8A7391690F5AFD81, object, targettable); }
static void _SET_OBJECT_SOMETHING(int object, bool p1) { invoke<void *>(0x77F33F2CCF64B3AA, object, p1); }
static int GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, int modelint, bool isMission, bool p6, bool p7) { return invoke<int>(0xE143FA2249364369, x, y, z, radius, modelint, isMission, p6, p7); }
static bool HAS_OBJECT_BEEN_BROKEN(int object) { return invoke<bool>(0x8ABFB70C49CC43E2, object); }
static bool HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, int modelint, int p5) { return invoke<bool>(0x761B0E69AC4D007E, p0, p1, p2, p3, modelint, p5); }
static bool _0x46494A2475701343(float p0, float p1, float p2, float p3, int modelint, bool p5) { return invoke<bool>(0x46494A2475701343, p0, p1, p2, p3, modelint, p5); }
static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0x163E252DE035A133, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
static int _0x163F8B586BC95F2A(int coords, float radius, int modelint, float x, float y, float z, Vector3 *p6, int p7) { return invoke<int>(0x163F8B586BC95F2A, coords, radius, modelint, x, y, z, p6, p7); }
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(int type, float x, float y, float z, bool locked, float heading, bool p6) { invoke<void *>(0xF82D8F1926A02C3D, type, x, y, z, locked, heading, p6); }
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(int type, float x, float y, float z, bool *locked, float *heading) { invoke<void *>(0xEDC1A5B84AEF33FF, type, x, y, z, locked, heading); }
static void _DOOR_CONTROL(int doorint, float x, float y, float z, bool locked, float xRotMult, float yRotMult, float zRotMult) { invoke<void *>(0x9B12F9A24FABEDB0, doorint, x, y, z, locked, xRotMult, yRotMult, zRotMult); }
static void ADD_DOOR_TO_SYSTEM(int doorint, int modelint, float x, float y, float z, bool p5, bool p6, bool p7) { invoke<void *>(0x6F8838D03D1DC226, doorint, modelint, x, y, z, p5, p6, p7); }
static void REMOVE_DOOR_FROM_SYSTEM(int doorint) { invoke<void *>(0x464D8E1427156FE4, doorint); }
static void _SET_DOOR_ACCELERATION_LIMIT(int doorint, int limit, bool p2, bool p3) { invoke<void *>(0x6BAB9442830C7F53, doorint, limit, p2, p3); }
static int _0x160AA1B32F6139B8(int doorint) { return invoke<int>(0x160AA1B32F6139B8, doorint); }
static int _0x4BC2854478F3A749(int doorint) { return invoke<int>(0x4BC2854478F3A749, doorint); }
static void _0x03C27E13B42A0E82(int doorint, float p1, bool p2, bool p3) { invoke<void *>(0x03C27E13B42A0E82, doorint, p1, p2, p3); }
static void _0x9BA001CB45CBF627(int doorint, float heading, bool p2, bool p3) { invoke<void *>(0x9BA001CB45CBF627, doorint, heading, p2, p3); }
static void _SET_DOOR_AJAR_ANGLE(int doorint, float ajar, bool p2, bool p3) { invoke<void *>(0xB6E6FBA95C7324AC, doorint, ajar, p2, p3); }
static float _0x65499865FCA6E5EC(int doorint) { return invoke<float>(0x65499865FCA6E5EC, doorint); }
static void _0xC485E07E4F0B7958(int doorint, bool p1, bool p2, bool p3) { invoke<void *>(0xC485E07E4F0B7958, doorint, p1, p2, p3); }
static void _0xD9B71952F78A2640(int doorint, bool p1) { invoke<void *>(0xD9B71952F78A2640, doorint, p1); }
static void _0xA85A21582451E951(int doorint, bool p1) { invoke<void *>(0xA85A21582451E951, doorint, p1); }
static bool _DOES_DOOR_EXIST(int doorint) { return invoke<bool>(0xC153C43EA202C8C1, doorint); }
static bool IS_DOOR_CLOSED(int door) { return invoke<bool>(0xC531EE8A1145A149, door); }
static void _0xC7F29CA00F46350E(bool p0) { invoke<void *>(0xC7F29CA00F46350E, p0); }
static void _0x701FDA1E82076BA4() { invoke<void *>(0x701FDA1E82076BA4); }
static bool _0xDF97CDD4FC08FD34(int p0) { return invoke<bool>(0xDF97CDD4FC08FD34, p0); }
static bool _0x589F80B325CC82C5(float p0, float p1, float p2, int p3, int *p4) { return invoke<bool>(0x589F80B325CC82C5, p0, p1, p2, p3, p4); }
static bool IS_GARAGE_EMPTY(int garage, bool p1, int p2) { return invoke<bool>(0x90E47239EA1980B8, garage, p1, p2); }
static bool _0x024A60DEB0EA69F0(int p0, int player, float p2, int p3) { return invoke<bool>(0x024A60DEB0EA69F0, p0, player, p2, p3); }
static bool _0x1761DC5D8471CBAA(int p0, int player, int p2) { return invoke<bool>(0x1761DC5D8471CBAA, p0, player, p2); }
static bool _0x85B6C850546FDDE2(int p0, bool p1, bool p2, bool p3, int p4) { return invoke<bool>(0x85B6C850546FDDE2, p0, p1, p2, p3, p4); }
static bool _0x673ED815D6E323B7(int p0, bool p1, bool p2, bool p3, int p4) { return invoke<bool>(0x673ED815D6E323B7, p0, p1, p2, p3, p4); }
static bool _0x372EF6699146A1E4(int p0, int entity, float p2, int p3) { return invoke<bool>(0x372EF6699146A1E4, p0, entity, p2, p3); }
static bool _0xF0EED5A6BC7B237A(int p0, int entity, int p2) { return invoke<bool>(0xF0EED5A6BC7B237A, p0, entity, p2); }
static void _0x190428512B240692(int p0, bool p1, bool p2, bool p3, bool p4) { invoke<void *>(0x190428512B240692, p0, p1, p2, p3, p4); }
static void _0xF2E1A7133DD356A6(int hash, bool toggle) { invoke<void *>(0xF2E1A7133DD356A6, hash, toggle); }
static void _0x66A49D021870FE88() { invoke<void *>(0x66A49D021870FE88); }
static bool DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, int hash, bool p5) { return invoke<bool>(0xBFA48E2FF417213F, x, y, z, radius, hash, p5); }
static bool IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, bool p10, bool p11) { return invoke<bool>(0x2A70BAE8883E4C81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _0x4D89D607CB3DD1D2(int object, bool toggle) { invoke<void *>(0x4D89D607CB3DD1D2, object, toggle); }
static void SET_OBJECT_PHYSICS_PARAMS(int object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<void *>(0xF6DF6E90DE7DF90F, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); }
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(int p0, bool p1) { return invoke<float>(0xB6FBFD079B8D0596, p0, p1); }
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(int object, bool toggle) { invoke<void *>(0x406137F8EF90EAF5, object, toggle); }
static bool IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, bool p4) { return invoke<bool>(0x397DC58FF00298D1, x, y, z, range, p4); }
static bool IS_OBJECT_NEAR_POINT(int objectint, float x, float y, float z, float range) { return invoke<bool>(0x8C90FE4B381BA60A, objectint, x, y, z, range); }
static void _0x4A39DB43E47CF3AA(int p0) { invoke<void *>(0x4A39DB43E47CF3AA, p0); }
static void _0xE7E4C198B0185900(int p0, int p1, bool p2) { invoke<void *>(0xE7E4C198B0185900, p0, p1, p2); }
static void TRACK_OBJECT_VISIBILITY(int p0) { invoke<void *>(0xB252BC036B525623, p0); }
static bool IS_OBJECT_VISIBLE(int object) { return invoke<bool>(0x8B32ACE6326A7546, object); }
static void _0xC6033D32241F6FB5(int p0, bool p1) { invoke<void *>(0xC6033D32241F6FB5, p0, p1); }
static void _0xEB6F1A9B5510A5D2(int p0, bool p1) { invoke<void *>(0xEB6F1A9B5510A5D2, p0, p1); }
static void _0xBCE595371A5FBAAF(int p0, bool p1) { invoke<void *>(0xBCE595371A5FBAAF, p0, p1); }
static int _GET_DES_OBJECT(float x, float y, float z, float rotation, char *name) { return invoke<int>(0xB48FCED898292E52, x, y, z, rotation, name); }
static void _SET_DES_OBJECT_STATE(int handle, int state) { invoke<void *>(0x5C29F698D404C5E1, handle, state); }
static int _GET_DES_OBJECT_STATE(int handle) { return invoke<int>(0x899BA936634A322E, handle); }
static bool _DOES_DES_OBJECT_EXIST(int handle) { return invoke<bool>(0x52AF537A0C5B8AAD, handle); }
static float _0x260EE4FDBDF4DB01(int p0) { return invoke<float>(0x260EE4FDBDF4DB01, p0); }
static int CREATE_PICKUP(int pickupint, float posX, float posY, float posZ, int p4, int value, bool p6, int modelint) { return invoke<int>(0xFBA08C503DD5FA58, pickupint, posX, posY, posZ, p4, value, p6, modelint); }
static int CREATE_PICKUP_ROTATE(int pickupint, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, int p9, bool p10, int modelint) { return invoke<int>(0x891804727E0A98B7, pickupint, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelint); }
static int CREATE_AMBIENT_PICKUP(int pickupint, float posX, float posY, float posZ, int p4, int value, int modelint, bool p7, bool p8) { return invoke<int>(0x673966A0C0FD7171, pickupint, posX, posY, posZ, p4, value, modelint, p7, p8); }
static int CREATE_PORTABLE_PICKUP(int pickupint, float x, float y, float z, bool placeOnGround, int modelint) { return invoke<int>(0x2EAF1FDB2FB55698, pickupint, x, y, z, placeOnGround, modelint); }
static int _CREATE_PORTABLE_PICKUP_2(int pickupint, float x, float y, float z, bool placeOnGround, int modelint) { return invoke<int>(0x125494B98A21AAF7, pickupint, x, y, z, placeOnGround, modelint); }
static void ATTACH_PORTABLE_PICKUP_TO_PED(int ped, int p1) { invoke<void *>(0x8DC39368BDD57755, ped, p1); }
static void DETACH_PORTABLE_PICKUP_FROM_PED(int ped) { invoke<void *>(0xCF463D1E9A0AECB1, ped); }
static void _0x0BF3B3BD47D79C08(int p0, int p1) { invoke<void *>(0x0BF3B3BD47D79C08, p0, p1); }
static void _0x78857FC65CADB909(bool p0) { invoke<void *>(0x78857FC65CADB909, p0); }
static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, int p3, int p4) { return invoke<Vector3>(0x6E16BC2503FF1FF0, x, y, z, p3, p4); }
static Vector3 GET_PICKUP_COORDS(int pickup) { return invoke<Vector3>(0x225B8B35C88029B3, pickup); }
static void REMOVE_ALL_PICKUPS_OF_TYPE(int pickupint) { invoke<void *>(0x27F9D613092159CF, pickupint); }
static bool HAS_PICKUP_BEEN_COLLECTED(int pickup) { return invoke<bool>(0x80EC48E6679313F9, pickup); }
static void REMOVE_PICKUP(int pickup) { invoke<void *>(0x3288D8ACAECD2AB2, pickup); }
static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, int model) { invoke<void *>(0x0589B5E791CE9B2B, x, y, z, value, amount, model); }
static bool DOES_PICKUP_EXIST(int pickup) { return invoke<bool>(0xAFC1CA75AD4074D1, pickup); }
static bool DOES_PICKUP_OBJECT_EXIST(int pickupint) { return invoke<bool>(0xD9EFB6DBF7DAAEA3, pickupint); }
static int GET_PICKUP_OBJECT(int pickup) { return invoke<int>(0x5099BC55630B25AE, pickup); }
static bool _IS_PICKUP_WITHIN_RADIUS(int pickupint, float x, float y, float z, float radius) { return invoke<bool>(0xF9C36251F6E48E33, pickupint, x, y, z, radius); }
static void SET_PICKUP_REGENERATION_TIME(int pickup, int duration) { invoke<void *>(0x78015C9B4B3ECC9D, pickup, duration); }
static void _0x616093EC6B139DD9(int player, int pickupint, bool p2) { invoke<void *>(0x616093EC6B139DD9, player, pickupint, p2); }
static void _0x88EAEC617CD26926(int p0, bool p1) { invoke<void *>(0x88EAEC617CD26926, p0, p1); }
static void SET_TEAM_PICKUP_OBJECT(int object, int p1, bool p2) { invoke<void *>(0x53E0DF1A2A3CF0CA, object, p1, p2); }
static void _0x92AEFB5F6E294023(int object, bool p1, bool p2) { invoke<void *>(0x92AEFB5F6E294023, object, p1, p2); }
static void _0xA08FE5E49BDC39DD(int p0, float p1, bool p2) { invoke<void *>(0xA08FE5E49BDC39DD, p0, p1, p2); }
static int _0xDB41D07A45A6D4B7(int p0) { return invoke<int>(0xDB41D07A45A6D4B7, p0); }
static void _0x318516E02DE3ECE2(float p0) { invoke<void *>(0x318516E02DE3ECE2, p0); }
static void _0x31F924B53EADDF65(bool p0) { invoke<void *>(0x31F924B53EADDF65, p0); }
static void _0xF92099527DB8E2A7(int p0, int p1) { invoke<void *>(0xF92099527DB8E2A7, p0, p1); }
static void _0xA2C1F5E92AFE49ED() { invoke<void *>(0xA2C1F5E92AFE49ED); }
static void _0x762DB2D380B48D04(int p0) { invoke<void *>(0x762DB2D380B48D04, p0); }
static void _HIGHLIGHT_PLACEMENT_COORDS(float x, float y, float z, int colorIndex) { invoke<void *>(0x3430676B11CDF21D, x, y, z, colorIndex); }
static void _0xB2D0BDE54F0E8E5A(int object, bool toggle) { invoke<void *>(0xB2D0BDE54F0E8E5A, object, toggle); }
static int _GET_WEAPON_HASH_FROM_PICKUP(int pickupint) { return invoke<int>(0x08F96CA6C551AD51, pickupint); }
static int _GET_PICKUP_HASH(int pickupint) { return invoke<int>(0x5EAAD83F8CFB4575, pickupint); }
static void SET_FORCE_OBJECT_THIS_FRAME(int p0, int p1, int p2, int p3) { invoke<void *>(0xF538081986E49E9D, p0, p1, p2, p3); }
static void _MARK_OBJECT_FOR_DELETION(int object) { invoke<void *>(0xADBE4809F19F927A, object); }
static void TASK_PAUSE(int ped, int ms) { invoke<void *>(0xE73A266DB0CA9042, ped, ms); }
static void TASK_STAND_STILL(int ped, int time) { invoke<void *>(0x919BE13EED931959, ped, time); }
static void TASK_JUMP(int ped, bool unused) { invoke<void *>(0x0AE4086104E067B1, ped, unused); }
static void TASK_COWER(int ped, int duration) { invoke<void *>(0x3EB1FE9E8E908E15, ped, duration); }
static void TASK_HANDS_UP(int ped, int duration, int facingint, int p3, bool p4) { invoke<void *>(0xF2EAB31979A7F910, ped, duration, facingint, p3, p4); }
static void UPDATE_TASK_HANDS_UP_DURATION(int ped, int duration) { invoke<void *>(0xA98FCAFD7893C834, ped, duration); }
static void TASK_OPEN_VEHICLE_DOOR(int ped, int vehicle, int timeOut, int doorIndex, float speed) { invoke<void *>(0x965791A9A488A062, ped, vehicle, timeOut, doorIndex, speed); }
static void TASK_ENTER_VEHICLE(int ped, int vehicle, int timeout, int seat, float speed, int flag, int p6) { invoke<void *>(0xC20E50AA46D09CA8, ped, vehicle, timeout, seat, speed, flag, p6); }
static void TASK_LEAVE_VEHICLE(int ped, int vehicle, int flags) { invoke<void *>(0xD3DBCE61A490BE02, ped, vehicle, flags); }
static void TASK_SKY_DIVE(int ped) { invoke<void *>(0x601736CFE536B0A0, ped); }
static void TASK_PARACHUTE(int ped, bool p1) { invoke<void *>(0xD2F1C53C97EE81AB, ped, p1); }
static void TASK_PARACHUTE_TO_TARGET(int ped, float x, float y, float z) { invoke<void *>(0xB33E291AFA6BD03A, ped, x, y, z); }
static void SET_PARACHUTE_TASK_TARGET(int ped, float x, float y, float z) { invoke<void *>(0xC313379AF0FCEDA7, ped, x, y, z); }
static void SET_PARACHUTE_TASK_THRUST(int ped, float thrust) { invoke<void *>(0x0729BAC1B8C64317, ped, thrust); }
static void TASK_RAPPEL_FROM_HELI(int ped, int unused) { invoke<void *>(0x09693B0312F91649, ped, unused); }
static void TASK_VEHICLE_DRIVE_TO_COORD(int ped, int vehicle, float x, float y, float z, float speed, int p6, int vehicleModel, int drivingMode, float stopRange, float p10) { invoke<void *>(0xE2A2AA2F659D77A7, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); }
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(int ped, int vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<void *>(0x158BB33F920D360C, ped, vehicle, x, y, z, speed, driveMode, stopRange); }
static void TASK_VEHICLE_DRIVE_WANDER(int ped, int vehicle, float speed, int drivingStyle) { invoke<void *>(0x480142959D337D00, ped, vehicle, speed, drivingStyle); }
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(int ped, int entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, bool persistFollowing) { invoke<void *>(0x304AE42E357B8C7E, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); }
static void TASK_GO_STRAIGHT_TO_COORD(int ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<void *>(0xD76B57B44F1E6F8B, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); }
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(int entity1, int entity2, float p2, float p3, float p4, float p5, int p6) { invoke<void *>(0x61E360B7E040D12E, entity1, entity2, p2, p3, p4, p5, p6); }
static void TASK_ACHIEVE_HEADING(int ped, float heading, int timeout) { invoke<void *>(0x93B93A37987F1F3D, ped, heading, timeout); }
static void TASK_FLUSH_ROUTE() { invoke<void *>(0x841142A1376E9006); }
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<void *>(0x1E7889778264843A, x, y, z); }
static void TASK_FOLLOW_POINT_ROUTE(int ped, float speed, int unknown) { invoke<void *>(0x595583281858626E, ped, speed, unknown); }
static void TASK_GO_TO_ENTITY(int entity, int target, int duration, float distance, float speed, float p5, int p6) { invoke<void *>(0x6A071245EB0D1882, entity, target, duration, distance, speed, p5, p6); }
static void TASK_SMART_FLEE_COORD(int ped, float x, float y, float z, float distance, int time, bool p6, bool p7) { invoke<void *>(0x94587F17E9C365D5, ped, x, y, z, distance, time, p6, p7); }
static void TASK_SMART_FLEE_PED(int ped, int fleeTarget, float distance, int fleeTime, bool p4, bool p5) { invoke<void *>(0x22B0D0E37CCB840D, ped, fleeTarget, distance, fleeTime, p4, p5); }
static void TASK_REACT_AND_FLEE_PED(int ped, int fleeTarget) { invoke<void *>(0x72C896464915D1B1, ped, fleeTarget); }
static void TASK_SHOCKING_EVENT_REACT(int ped, int eventHandle) { invoke<void *>(0x452419CBD838065B, ped, eventHandle); }
static void TASK_WANDER_IN_AREA(int ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<void *>(0xE054346CA3A0F315, ped, x, y, z, radius, minimalLength, timeBetweenWalks); }
static void TASK_WANDER_STANDARD(int ped, float p1, int p2) { invoke<void *>(0xBB9CE077274F6A1B, ped, p1, p2); }
static void TASK_VEHICLE_PARK(int ped, int vehicle, float x, float y, float z, float heading, int mode, float radius, bool keepEngineOn) { invoke<void *>(0x0F3E34E968EA374E, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); }
static void TASK_STEALTH_KILL(int killer, int target, int actionType, float p3, int p4) { invoke<void *>(0xAA5DC05579D60BD9, killer, target, actionType, p3, p4); }
static void TASK_PLANT_BOMB(int ped, float x, float y, float z, float heading) { invoke<void *>(0x965FEC691D55E9BF, ped, x, y, z, heading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD(int ped, float x, float y, float z, float speed, int timeout, float stoppingRange, bool persistFollowing, float unk) { invoke<void *>(0x15D3A79D4E44B913, ped, x, y, z, speed, timeout, stoppingRange, persistFollowing, unk); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(int ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f) { invoke<void *>(0x17F58B88D085DBAC, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ, unk_40000f); }
static void SET_PED_PATH_CAN_USE_CLIMBOVERS(int ped, bool Toggle) { invoke<void *>(0x8E06A6FE76C9EFF4, ped, Toggle); }
static void SET_PED_PATH_CAN_USE_LADDERS(int ped, bool Toggle) { invoke<void *>(0x77A5B103C87F476E, ped, Toggle); }
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(int ped, bool Toggle) { invoke<void *>(0xE361C5C71C431A4F, ped, Toggle); }
static void _0x88E32DB8C1A4AA4B(int ped, float p1) { invoke<void *>(0x88E32DB8C1A4AA4B, ped, p1); }
static void SET_PED_PATHS_WIDTH_PLANT(int ped, bool mayEnterWater) { invoke<void *>(0xF35425A4204367EC, ped, mayEnterWater); }
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(int ped, bool avoidWater) { invoke<void *>(0x38FE1EC73743793C, ped, avoidWater); }
static void SET_PED_PATH_AVOID_FIRE(int ped, bool avoidFire) { invoke<void *>(0x4455517B28441E60, ped, avoidFire); }
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<void *>(0x6C6B148586F934F7, height); }
static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(int ped, int *p1, int *p2) { return invoke<int>(0xC6F5C0BCDC74D62D, ped, p1, p2); }
static int GET_NAVMESH_ROUTE_RESULT(int ped) { return invoke<int>(0x632E831F382A0FA8, ped); }
static void TASK_GO_TO_COORD_ANY_MEANS(int ped, float x, float y, float z, float speed, int p5, bool p6, int walkingStyle, float p8) { invoke<void *>(0x5BC448CB78FA3E88, ped, x, y, z, speed, p5, p6, walkingStyle, p8); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(int ped, float x, float y, float z, float speed, int p5, bool p6, int walkingStyle, float p8, int p9, int p10, int p11) { invoke<void *>(0x1DD45F9ECFDB1BC9, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(int ped, float x, float y, float z, float speed, int p5, bool p6, int walkingStyle, float p8, int p9, int p10, int p11, int p12) { invoke<void *>(0xB8ECD61F531A7B02, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12); }
static void TASK_PLAY_ANIM(int ped, char *animDictionary, char *animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, bool lockX, bool lockY, bool lockZ) { invoke<void *>(0xEA47FE3719165B94, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); }
static void TASK_PLAY_ANIM_ADVANCED(int ped, char *animDict, char *animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, int flag, float animTime, int p14, int p15) { invoke<void *>(0x83CDB10EA29B370B, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); }
static void STOP_ANIM_TASK(int ped, char *animDictionary, char *animationName, float p3) { invoke<void *>(0x97FF36A1D40EA00A, ped, animDictionary, animationName, p3); }
static void TASK_SCRIPTED_ANIMATION(int ped, int *p1, int *p2, int *p3, float p4, float p5) { invoke<void *>(0x126EF75F1E17ABE5, ped, p1, p2, p3, p4, p5); }
static void PLAY_ENTITY_SCRIPTED_ANIM(int p0, int *p1, int *p2, int *p3, float p4, float p5) { invoke<void *>(0x77A1EEC547E7FCF1, p0, p1, p2, p3, p4, p5); }
static void STOP_ANIM_PLAYBACK(int ped, int p1, bool p2) { invoke<void *>(0xEE08C992D238C5D1, ped, p1, p2); }
static void SET_ANIM_WEIGHT(int p0, float p1, int p2, int p3, bool p4) { invoke<void *>(0x207F1A47C0342F48, p0, p1, p2, p3, p4); }
static void SET_ANIM_RATE(int p0, float p1, int p2, bool p3) { invoke<void *>(0x032D49C5E359C847, p0, p1, p2, p3); }
static void SET_ANIM_LOOPED(int p0, bool p1, int p2, bool p3) { invoke<void *>(0x70033C3CC29A1FF4, p0, p1, p2, p3); }
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(int ped, char *animDict, char *animation, char *boneMaskType, float p4, float p5, bool p6, bool p7) { invoke<void *>(0x8FBB6758B3B3E9EC, ped, animDict, animation, boneMaskType, p4, p5, p6, p7); }
static bool IS_PLAYING_PHONE_GESTURE_ANIM(int ped) { return invoke<bool>(0xB8EBB1E9D3588C10, ped); }
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(int ped) { return invoke<float>(0x47619ABE8B268C60, ped); }
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(int ped) { return invoke<float>(0x1EE0F68A7C25DEC6, ped); }
static void TASK_VEHICLE_PLAY_ANIM(int vehicle, char *animation_set, char *animation_name) { invoke<void *>(0x69F5C3BD0F3EBD89, vehicle, animation_set, animation_name); }
static void TASK_LOOK_AT_COORD(int entity, float x, float y, float z, float duration, int p5, int p6) { invoke<void *>(0x6FA46612594F7973, entity, x, y, z, duration, p5, p6); }
static void TASK_LOOK_AT_ENTITY(int ped, int lookAt, int duration, int unknown1, int unknown2) { invoke<void *>(0x69F4BE8C8CC4796C, ped, lookAt, duration, unknown1, unknown2); }
static void TASK_CLEAR_LOOK_AT(int ped) { invoke<void *>(0x0F804F1DB19B9689, ped); }
static void OPEN_SEQUENCE_TASK(int *taskSequence) { invoke<void *>(0xE8854A4326B9E12B, taskSequence); }
static void CLOSE_SEQUENCE_TASK(int taskSequence) { invoke<void *>(0x39E72BC99E6360CB, taskSequence); }
static void TASK_PERFORM_SEQUENCE(int ped, int taskSequence) { invoke<void *>(0x5ABA3986D90D8A3B, ped, taskSequence); }
static void CLEAR_SEQUENCE_TASK(int *taskSequence) { invoke<void *>(0x3841422E9C488D8C, taskSequence); }
static void SET_SEQUENCE_TO_REPEAT(int taskSequence, bool repeat) { invoke<void *>(0x58C70CF3A41E4AE7, taskSequence, repeat); }
static int GET_SEQUENCE_PROGRESS(int ped) { return invoke<int>(0x00A9010CFE1E3533, ped); }
static bool GET_IS_TASK_ACTIVE(int ped, int taskNumber) { return invoke<bool>(0xB0760331C7AA4155, ped, taskNumber); }
static int GET_SCRIPT_TASK_STATUS(int targetint, int taskint) { return invoke<int>(0x77F1BEB8863288D5, targetint, taskint); }
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(int veh) { return invoke<int>(0x534AEBA6E5ED4CAB, veh); }
static void TASK_LEAVE_ANY_VEHICLE(int ped, int p1, int p2) { invoke<void *>(0x504D54DF3F6F2247, ped, p1, p2); }
static void TASK_AIM_GUN_SCRIPTED(int ped, int scriptTask, bool p2, bool p3) { invoke<void *>(0x7A192BE16D373D00, ped, scriptTask, p2, p3); }
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(int p0, int p1, float p2, float p3, float p4, int p5, bool p6, bool p7) { invoke<void *>(0x8605AF0DE8B3A5AC, p0, p1, p2, p3, p4, p5, p6, p7); }
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(int p0, int p1, float p2, float p3, float p4, bool p5) { invoke<void *>(0x9724FB59A3E72AD0, p0, p1, p2, p3, p4, p5); }
static char *GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int p0) { return invoke<char *>(0x3A8CADC7D37AACC5, p0); }
static void TASK_AIM_GUN_AT_ENTITY(int ped, int entity, int duration, bool p3) { invoke<void *>(0x9B53BB6E8943AF53, ped, entity, duration, p3); }
static void TASK_TURN_PED_TO_FACE_ENTITY(int ped, int entity, int duration) { invoke<void *>(0x5AD23D40115353AC, ped, entity, duration); }
static void TASK_AIM_GUN_AT_COORD(int ped, float x, float y, float z, int time, bool p5, bool p6) { invoke<void *>(0x6671F3EEC681BDA1, ped, x, y, z, time, p5, p6); }
static void TASK_SHOOT_AT_COORD(int ped, float x, float y, float z, int duration, int firingPattern) { invoke<void *>(0x46A6CC01E0826106, ped, x, y, z, duration, firingPattern); }
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(int ped, int vehicle) { invoke<void *>(0x7AA80209BDA643EB, ped, vehicle); }
static void CLEAR_PED_TASKS(int ped) { invoke<void *>(0xE1EF3C1216AFF2CD, ped); }
static void CLEAR_PED_SECONDARY_TASK(int ped) { invoke<void *>(0x176CECF6F920D707, ped); }
static void TASK_EVERYONE_LEAVE_VEHICLE(int vehicle) { invoke<void *>(0x7F93691AB4B92272, vehicle); }
static void TASK_GOTO_ENTITY_OFFSET(int ped, int p1, int p2, float x, float y, float z, int duration) { invoke<void *>(0xE39B4FF4FDEBDE27, ped, p1, p2, x, y, z, duration); }
static void TASK_GOTO_ENTITY_OFFSET_XY(int p0, int oed, int duration, float p3, float p4, float p5, float p6, bool p7) { invoke<void *>(0x338E7EF52B6095A9, p0, oed, duration, p3, p4, p5, p6, p7); }
static void TASK_TURN_PED_TO_FACE_COORD(int ped, float x, float y, float z, int duration) { invoke<void *>(0x1DDA930A0AC38571, ped, x, y, z, duration); }
static void TASK_VEHICLE_TEMP_ACTION(int driver, int vehicle, int action, int time) { invoke<void *>(0xC429DCEEB339E129, driver, vehicle, action, time); }
static void TASK_VEHICLE_MISSION(int p0, int p1, int veh, int p3, float p4, int p5, float p6, float p7, bool p8) { invoke<void *>(0x659427E0EF36BCDE, p0, p1, veh, p3, p4, p5, p6, p7, p8); }
static void TASK_VEHICLE_MISSION_PED_TARGET(int ped, int vehicle, int pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, bool p8) { invoke<void *>(0x9454528DF15D657A, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7, p8); }
static void TASK_VEHICLE_MISSION_COORS_TARGET(int ped, int vehicle, float x, float y, float z, int p5, int p6, int p7, float p8, float p9, bool p10) { invoke<void *>(0xF0AF20AA7731F8C3, ped, vehicle, x, y, z, p5, p6, p7, p8, p9, p10); }
static void TASK_VEHICLE_ESCORT(int ped, int vehicle, int targetint, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<void *>(0x0FA6E4B75F302400, ped, vehicle, targetint, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); }
static void TASK_VEHICLE_CHASE(int driver, int targetEnt) { invoke<void *>(0x3C08A8E30363B353, driver, targetEnt); }
static void TASK_VEHICLE_HELI_PROTECT(int pilot, int vehicle, int entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) { invoke<void *>(0x1E09C32048FEFD1C, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7); }
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(int ped, int flag, bool set) { invoke<void *>(0xCC665AAC360D31E7, ped, flag, set); }
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(int ped, float distance) { invoke<void *>(0x639B642FACBE4EDD, ped, distance); }
static void TASK_HELI_CHASE(int pilot, int entityToFollow, float x, float y, float z) { invoke<void *>(0xAC83B1DB38D0ADA0, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_CHASE(int pilot, int entityToFollow, float x, float y, float z) { invoke<void *>(0x2D2386F273FF7A25, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_LAND(int pilot, int plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<void *>(0xBF19721FA34D32C0, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); }
static void TASK_HELI_MISSION(int pilot, int aircraft, int targetint, int targetint2, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float landingRadius, float targetHeading, int unk1, int unk2, int unk3, int landingFlags) { invoke<void *>(0xDAD029E187A2BEB4, pilot, aircraft, targetint, targetint2, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, landingRadius, targetHeading, unk1, unk2, unk3, landingFlags); }
static void TASK_PLANE_MISSION(int pilot, int aircraft, int targetint, int targetint2, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float unk, float targetHeading, float maxZ, float minZ) { invoke<void *>(0x23703CD154E83B88, pilot, aircraft, targetint, targetint2, destinationX, destinationY, destinationZ, missionFlag, angularDrag, unk, targetHeading, maxZ, minZ); }
static void TASK_BOAT_MISSION(int pedDriver, int boat, int p2, int p3, float x, float y, float z, int p7, float maxSpeed, int drivingStyle, float p10, int p11) { invoke<void *>(0x15C86013127CE63F, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11); }
static void TASK_DRIVE_BY(int driverint, int targetint, int targetint2, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, bool p8, int firingPattern) { invoke<void *>(0x2F8AF0E82773A171, driverint, targetint, targetint2, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, p8, firingPattern); }
static void SET_DRIVEBY_TASK_TARGET(int shootingint, int targetint, int targetint2, float x, float y, float z) { invoke<void *>(0xE5B302114D8162EE, shootingint, targetint, targetint2, x, y, z); }
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(int ped) { invoke<void *>(0xC35B5CDB2824CF69, ped); }
static bool IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(int ped) { return invoke<bool>(0x8785E6E40C7A8818, ped); }
static bool CONTROL_MOUNTED_WEAPON(int ped) { return invoke<bool>(0xDCFE42068FE0135A, ped); }
static void SET_MOUNTED_WEAPON_TARGET(int shootingint, int targetint, int targetint2, float x, float y, float z) { invoke<void *>(0xCCD892192C6D2BB9, shootingint, targetint, targetint2, x, y, z); }
static bool IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(int ped) { return invoke<bool>(0xA320EF046186FA3B, ped); }
static void TASK_USE_MOBILE_PHONE(int ped, int p1) { invoke<void *>(0xBD2A8EC3AF4DE7DB, ped, p1); }
static void TASK_USE_MOBILE_PHONE_TIMED(int ped, int duration) { invoke<void *>(0x5EE02954A14C69DB, ped, duration); }
static void TASK_CHAT_TO_PED(int ped, int target, int p2, float p3, float p4, float p5, float p6, float p7) { invoke<void *>(0x8C338E0263E4FD19, ped, target, p2, p3, p4, p5, p6, p7); }
static void TASK_WARP_PED_INTO_VEHICLE(int ped, int vehicle, int seat) { invoke<void *>(0x9A7D091411C5F684, ped, vehicle, seat); }
static void TASK_SHOOT_AT_ENTITY(int entity, int target, int duration, int firingPattern) { invoke<void *>(0x08DA95E8298AE772, entity, target, duration, firingPattern); }
static void TASK_CLIMB(int ped, bool unused) { invoke<void *>(0x89D9FCC2435112F1, ped, unused); }
static void TASK_CLIMB_LADDER(int ped, int p1) { invoke<void *>(0xB6C987F9285A3814, ped, p1); }
static void CLEAR_PED_TASKS_IMMEDIATELY(int ped) { invoke<void *>(0xAAA34F8A7CB32098, ped); }
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(int p0, int p1, int p2, int p3) { invoke<void *>(0x89221B16730234F0, p0, p1, p2, p3); }
static void SET_NEXT_DESIRED_MOVE_STATE(float p0) { invoke<void *>(0xF1B9F16E89E2C93A, p0); }
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(int ped, float p1) { invoke<void *>(0x1E982AC8716912C5, ped, p1); }
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(int ped) { return invoke<float>(0x8517D4A6CA8513ED, ped); }
static void TASK_GOTO_ENTITY_AIMING(int ped, int target, float distanceToStopAt, float StartAimingDist) { invoke<void *>(0xA9DA48FAB8A76C12, ped, target, distanceToStopAt, StartAimingDist); }
static void TASK_SET_DECISION_MAKER(int p0, int p1) { invoke<void *>(0xEB8517DDA73720DA, p0, p1); }
static void TASK_SET_SPHERE_DEFENSIVE_AREA(int p0, float p1, float p2, float p3, float p4) { invoke<void *>(0x933C06518B52A9A4, p0, p1, p2, p3, p4); }
static void TASK_CLEAR_DEFENSIVE_AREA(int p0) { invoke<void *>(0x95A6C46A31D1917D, p0); }
static void TASK_PED_SLIDE_TO_COORD(int ped, float x, float y, float z, float heading, float p5) { invoke<void *>(0xD04FE6765D990A06, ped, x, y, z, heading, p5); }
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(int ped, float x, float y, float z, float heading, float p5, float p6) { invoke<void *>(0x5A4A6A6D3DC64F52, ped, x, y, z, heading, p5, p6); }
static int ADD_COVER_POINT(float p0, float p1, float p2, float p3, int p4, int p5, int p6, bool p7) { return invoke<int>(0xD5C12A75C7B9497F, p0, p1, p2, p3, p4, p5, p6, p7); }
static void REMOVE_COVER_POINT(int coverpoint) { invoke<void *>(0xAE287C923D891715, coverpoint); }
static bool DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<bool>(0xA98B8E3C088E5A31, x, y, z); }
static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(int coverpoint) { return invoke<Vector3>(0x594A1028FC2A3E85, coverpoint); }
static void TASK_COMBAT_PED(int ped, int targetint, int p2, int p3) { invoke<void *>(0xF166E48407BAC484, ped, targetint, p2, p3); }
static void TASK_COMBAT_PED_TIMED(int p0, int ped, int p2, int p3) { invoke<void *>(0x944F30DCB7096BDE, p0, ped, p2, p3); }
static void TASK_SEEK_COVER_FROM_POS(int ped, float x, float y, float z, int duration, bool p5) { invoke<void *>(0x75AC2B60386D89F2, ped, x, y, z, duration, p5); }
static void TASK_SEEK_COVER_FROM_PED(int ped, int target, int duration, bool p3) { invoke<void *>(0x84D32B3BEC531324, ped, target, duration, p3); }
static void TASK_SEEK_COVER_TO_COVER_POINT(int p0, int p1, float p2, float p3, float p4, int p5, bool p6) { invoke<void *>(0xD43D95C7A869447F, p0, p1, p2, p3, p4, p5, p6); }
static void TASK_SEEK_COVER_TO_COORDS(int ped, float x1, float y1, float z1, float x2, float y2, float z2, int p7, bool p8) { invoke<void *>(0x39246A6958EF072C, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(int ped, float x, float y, float z, int timeout, bool p5, float p6, bool p7, bool p8, int p9, bool p10) { invoke<void *>(0x4172393E6BE1FECE, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10); }
static void TASK_EXIT_COVER(int p0, int p1, float p2, float p3, float p4) { invoke<void *>(0x79B258E397854D29, p0, p1, p2, p3, p4); }
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(int ped, int meleeTarget, float p2, float p3, float p4, bool p5) { invoke<void *>(0x1C6CD14A876FFE39, ped, meleeTarget, p2, p3, p4, p5); }
static void TASK_TOGGLE_DUCK(bool p0, bool p1) { invoke<void *>(0xAC96609B9995EDF8, p0, p1); }
static void TASK_GUARD_CURRENT_POSITION(int p0, float p1, float p2, bool p3) { invoke<void *>(0x4A58A47A72E3FCB4, p0, p1, p2, p3); }
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(int p0, float p1, float p2, float p3, float p4, float p5, int p6) { invoke<void *>(0xD2A207EEBDF9889B, p0, p1, p2, p3, p4, p5, p6); }
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(int p0, float p1, float p2, float p3, float p4, float p5, int p6, float p7, float p8, float p9, float p10) { invoke<void *>(0xC946FE14BE0EB5E2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void TASK_STAND_GUARD(int ped, float x, float y, float z, float heading, char *scenarioName) { invoke<void *>(0xAE032F8BBA959E90, ped, x, y, z, heading, scenarioName); }
static void SET_DRIVE_TASK_CRUISE_SPEED(int driver, float cruiseSpeed) { invoke<void *>(0x5C9B84BD7D31D908, driver, cruiseSpeed); }
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(int p0, float p1) { invoke<void *>(0x404A5AA9B9F0B746, p0, p1); }
static void SET_DRIVE_TASK_DRIVING_STYLE(int ped, int drivingStyle) { invoke<void *>(0xDACE1BE37D88AF67, ped, drivingStyle); }
static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, bool p6, bool p7, bool p8, bool p9) { invoke<void *>(0x45C597097DD7CB81, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); }
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<void *>(0xDB6708C0B46F56D8); }
static void TASK_START_SCENARIO_IN_PLACE(int ped, char *scenarioName, int unkDelay, bool playEnterAnim) { invoke<void *>(0x142A02425FF02BD9, ped, scenarioName, unkDelay, playEnterAnim); }
static void TASK_START_SCENARIO_AT_POSITION(int ped, char *scenarioName, float x, float y, float z, float heading, int duration, bool sittingScenario, bool teleport) { invoke<void *>(0xFA4EFC79F69D4F07, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(int ped, float x, float y, float z, float distance, int duration) { invoke<void *>(0x277F471BA9DB000B, ped, x, y, z, distance, duration); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(int ped, float x, float y, float z, float radius, int p5) { invoke<void *>(0x58E2E0F23F6B76C3, ped, x, y, z, radius, p5); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(int p0, float p1, float p2, float p3, float p4, int p5) { invoke<void *>(0x9FDA1B3D7E7028B3, p0, p1, p2, p3, p4, p5); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(int p0, float p1, float p2, float p3, float p4, int p5) { invoke<void *>(0x97A28E63F0BA5631, p0, p1, p2, p3, p4, p5); }
static bool DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, bool b) { return invoke<bool>(0x5A59271FFADD33C1, x, y, z, radius, b); }
static bool DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, int *p3, float p4, bool p5) { return invoke<bool>(0x0A9D0C2A3BBC86C1, p0, p1, p2, p3, p4, p5); }
static bool IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, bool p4) { return invoke<bool>(0x788756D73AC2E07C, p0, p1, p2, p3, p4); }
static bool PED_HAS_USE_SCENARIO_TASK(int ped) { return invoke<bool>(0x295E3CCEC879CCD7, ped); }
static void PLAY_ANIM_ON_RUNNING_SCENARIO(int ped, char *animDict, char *animName) { invoke<void *>(0x748040460F8DF5DC, ped, animDict, animName); }
static bool DOES_SCENARIO_GROUP_EXIST(char *scenarioGroup) { return invoke<bool>(0xF9034C136C9E00D3, scenarioGroup); }
static bool IS_SCENARIO_GROUP_ENABLED(char *scenarioGroup) { return invoke<bool>(0x367A09DED4E05B99, scenarioGroup); }
static void SET_SCENARIO_GROUP_ENABLED(char *scenarioGroup, bool p1) { invoke<void *>(0x02C8E5B49848664E, scenarioGroup, p1); }
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<void *>(0xDD902D0349AFAD3A); }
static void SET_EXCLUSIVE_SCENARIO_GROUP(char *scenarioGroup) { invoke<void *>(0x535E97E1F7FC0C6A, scenarioGroup); }
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<void *>(0x4202BBCB8684563D); }
static bool IS_SCENARIO_TYPE_ENABLED(char *scenarioType) { return invoke<bool>(0x3A815DB3EA088722, scenarioType); }
static void SET_SCENARIO_TYPE_ENABLED(char *scenarioType, bool toggle) { invoke<void *>(0xEB47EC4E34FB7EE1, scenarioType, toggle); }
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<void *>(0x0D40EE2A7F2B2D6D); }
static bool IS_PED_ACTIVE_IN_SCENARIO(int ped) { return invoke<bool>(0xAA135F9482C82CC3, ped); }
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(int ped, float x, float y, float z, float radius, int p5) { invoke<void *>(0x4CF5F55DAC3280A0, ped, x, y, z, radius, p5); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(int ped, float radius, int p2) { invoke<void *>(0x7BF835BB9E2698C8, ped, radius, p2); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(int p0, float p1, int p2, int p3) { invoke<void *>(0x2BBA30B854534A0C, p0, p1, p2, p3); }
static void TASK_THROW_PROJECTILE(int ped, float x, float y, float z) { invoke<void *>(0x7285951DBF6B5A51, ped, x, y, z); }
static void TASK_SWAP_WEAPON(int ped, bool p1) { invoke<void *>(0xA21C51255B205245, ped, p1); }
static void TASK_RELOAD_WEAPON(int ped, bool unused) { invoke<void *>(0x62D2916F56B9CD2D, ped, unused); }
static bool IS_PED_GETTING_UP(int ped) { return invoke<bool>(0x2A74E1D5F2F00EEC, ped); }
static void TASK_WRITHE(int ped, int target, int time, int p3) { invoke<void *>(0xCDDC2B77CE54AC6E, ped, target, time, p3); }
static bool IS_PED_IN_WRITHE(int ped) { return invoke<bool>(0xDEB6D52126E7D640, ped); }
static void OPEN_PATROL_ROUTE(char *patrolRoute) { invoke<void *>(0xA36BFB5EE89F3D82, patrolRoute); }
static void CLOSE_PATROL_ROUTE() { invoke<void *>(0xB043ECA801B8CBC1); }
static void ADD_PATROL_ROUTE_NODE(int p0, char *p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) { invoke<void *>(0x8EDF950167586B7C, p0, p1, x1, y1, z1, x2, y2, z2, p8); }
static void ADD_PATROL_ROUTE_LINK(int p0, int p1) { invoke<void *>(0x23083260DEC3A551, p0, p1); }
static void CREATE_PATROL_ROUTE() { invoke<void *>(0xAF8A443CCC8018DC); }
static void DELETE_PATROL_ROUTE(char *patrolRoute) { invoke<void *>(0x7767DD9D65E91319, patrolRoute); }
static void TASK_PATROL(int ped, char *p1, int p2, bool p3, bool p4) { invoke<void *>(0xBDA5DF49D080FE4E, ped, p1, p2, p3, p4); }
static void TASK_STAY_IN_COVER(int ped) { invoke<void *>(0xE5DA8615A6180789, ped); }
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(int ped, float x, float y, float z) { invoke<void *>(0x5CF0D8F9BBA0DD75, ped, x, y, z); }
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(int ped, int ped2) { invoke<void *>(0x85F462BADC7DA47F, ped, ped2); }
static void TASK_VEHICLE_SHOOT_AT_PED(int ped, int target, float p2) { invoke<void *>(0x10AB107B887214D8, ped, target, p2); }
static void TASK_VEHICLE_AIM_AT_PED(int ped, int target) { invoke<void *>(0xE41885592B08B097, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_COORD(int ped, float x, float y, float z, float p4) { invoke<void *>(0x5190796ED39C9B6D, ped, x, y, z, p4); }
static void TASK_VEHICLE_AIM_AT_COORD(int ped, float x, float y, float z) { invoke<void *>(0x447C1E9EF844BC0F, ped, x, y, z); }
static void TASK_VEHICLE_GOTO_NAVMESH(int ped, int vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<void *>(0x195AEEB13CEFE2EE, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(int ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, bool p8, float p9, float p10, bool p11, int flags, bool p13, int firingPattern) { invoke<void *>(0x11315AB3385B8AC0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(int p0, float p1, float p2, float p3, int p4, float p5, bool p6, float p7, float p8, bool p9, int p10, bool p11, int p12, int p13) { invoke<void *>(0xB2A16444EAD9AE47, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(int pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, bool shootAtEnemies, float distanceToStopAt, float noRoadsDistance, bool unkTrue, int unkFlag, int aimingFlag, int firingPattern) { invoke<void *>(0xA55547801EB331FC, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, unkTrue, unkFlag, aimingFlag, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(int p0, int p1, float p2, float p3, float p4, float p5, bool p6, float p7, float p8, bool p9, bool p10, int p11) { invoke<void *>(0x04701832B739DCE5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(int ped, int entityToWalkTo, int entityToAimAt, float speed, bool shootatint, float p5, float p6, bool p7, bool p8, int firingPattern) { invoke<void *>(0x97465886D35210E9, ped, entityToWalkTo, entityToAimAt, speed, shootatint, p5, p6, p7, p8, firingPattern); }
static void SET_HIGH_FALL_TASK(int ped, int p1, int p2, int p3) { invoke<void *>(0x8C825BDC7741D37C, ped, p1, p2, p3); }
static void REQUEST_WAYPOINT_RECORDING(char *name) { invoke<void *>(0x9EEFB62EB27B5792, name); }
static bool GET_IS_WAYPOINT_RECORDING_LOADED(char *name) { return invoke<bool>(0xCB4E8BE8A0063C5D, name); }
static void REMOVE_WAYPOINT_RECORDING(char *name) { invoke<void *>(0xFF1B8B4AA1C25DC8, name); }
static bool WAYPOINT_RECORDING_GET_NUM_POINTS(char *name, int *points) { return invoke<bool>(0x5343532C01A07234, name, points); }
static bool WAYPOINT_RECORDING_GET_COORD(char *name, int point, Vector3 *coord) { return invoke<bool>(0x2FB897405C90B361, name, point, coord); }
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(char *name, int point) { return invoke<float>(0x005622AEBC33ACA9, name, point); }
static bool WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(char *name, float x, float y, float z, int *point) { return invoke<bool>(0xB629A298081F876F, name, x, y, z, point); }
static void TASK_FOLLOW_WAYPOINT_RECORDING(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x0759591819534F7B, p0, p1, p2, p3, p4); }
static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(int p0) { return invoke<bool>(0xE03B3F2D3DC59B64, p0); }
static int GET_PED_WAYPOINT_PROGRESS(int ped) { return invoke<int>(0x2720AAA75001E094, ped); }
static float GET_PED_WAYPOINT_DISTANCE(int p0) { return invoke<float>(0xE6A877C64CAF1BC5, p0); }
static int SET_PED_WAYPOINT_ROUTE_OFFSET(int p0, int p1, int p2, int p3) { return invoke<int>(0xED98E10B0AFCE4B4, p0, p1, p2, p3); }
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(char *p0, int p1) { return invoke<float>(0xA5B769058763E497, p0, p1); }
static bool WAYPOINT_PLAYBACK_GET_IS_PAUSED(int p0) { return invoke<bool>(0x701375A7D43F01CB, p0); }
static void WAYPOINT_PLAYBACK_PAUSE(int p0, bool p1, bool p2) { invoke<void *>(0x0F342546AA06FED5, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_RESUME(int p0, bool p1, int p2, int p3) { invoke<void *>(0x244F70C84C547D2D, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(int p0, float p1, bool p2) { invoke<void *>(0x7D7D2B47FA788E85, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(int p0) { invoke<void *>(0x6599D834B12D0800, p0); }
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(int *p0, bool p1, float p2, float p3) { invoke<void *>(0x5A353B8E6B1095B5, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(int p0, int p1, bool p2) { invoke<void *>(0x20E330937C399D29, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(int p0, float p1, float p2, float p3, bool p4) { invoke<void *>(0x8968400D900ED8B3, p0, p1, p2, p3, p4); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(int p0, float p1, float p2, float p3, bool p4, int p5) { invoke<void *>(0x057A25CFCC9DB671, p0, p1, p2, p3, p4, p5); }
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(int p0) { invoke<void *>(0x47EFA040EBB8E2EA, p0); }
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(char *route) { invoke<void *>(0x817268968605947A, route); }
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char *route) { invoke<void *>(0x3548536485DD792B, route); }
static bool ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char *route) { return invoke<bool>(0x60F9A4393A21F741, route); }
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char *route, int props) { invoke<void *>(0xD5002D78B7162E1B, route, props); }
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<void *>(0x13945951E16EF912, dist); }
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(int ped, int vehicle, char *WPRecording, int p3, int p4, int p5, int p6, float p7, bool p8, float p9) { invoke<void *>(0x3123FAA6DB1CF7ED, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); }
static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(int p0) { return invoke<bool>(0xF5134943EA29868C, p0); }
static int GET_VEHICLE_WAYPOINT_PROGRESS(int vehicle) { return invoke<int>(0x9824CFF8FC66E159, vehicle); }
static int GET_VEHICLE_WAYPOINT_TARGET_POINT(int p0) { return invoke<int>(0x416B62AC8B9E5BBD, p0); }
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(int p0) { invoke<void *>(0x8A4E6AC373666BC5, p0); }
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(int p0) { invoke<void *>(0xDC04FCAA7839D492, p0); }
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(int p0) { invoke<void *>(0x5CEB25A7D2848963, p0); }
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(int p0, float p1) { invoke<void *>(0x121F0593E0A431D7, p0, p1); }
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(int ped, bool toggle) { invoke<void *>(0x90D2156198831D69, ped, toggle); }
static void TASK_FORCE_MOTION_STATE(int ped, int state, bool p2) { invoke<void *>(0x4F056E1AFFEF17AB, ped, state, p2); }
static void _TASK_MOVE_NETWORK(int ped, char *task, float multiplier, bool p3, char *animDict, int flags) { invoke<void *>(0x2D537BA194896636, ped, task, multiplier, p3, animDict, flags); }
static void _TASK_MOVE_NETWORK_ADVANCED(int ped, char *p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8, float p9, bool p10, char *animDict, int flags) { invoke<void *>(0xD5B35BEA41919ACB, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, animDict, flags); }
static bool _0x921CE12C489C4C41(int intID) { return invoke<bool>(0x921CE12C489C4C41, intID); }
static bool _0x30ED88D5E0C56A37(int p0) { return invoke<bool>(0x30ED88D5E0C56A37, p0); }
static int _0xD01015C7316AE176(int ped, char *p1) { return invoke<int>(0xD01015C7316AE176, ped, p1); }
static char *_0x717E4D1F2048376D(int ped) { return invoke<char *>(0x717E4D1F2048376D, ped); }
static void _0xD5BB4025AE449A4E(int p0, char *p1, float p2) { invoke<void *>(0xD5BB4025AE449A4E, p0, p1, p2); }
static void _0xB0A6CFD2C69C1088(int p0, int *p1, bool p2) { invoke<void *>(0xB0A6CFD2C69C1088, p0, p1, p2); }
static bool _0xA7FFBA498E4AAF67(int p0, char *p1) { return invoke<bool>(0xA7FFBA498E4AAF67, p0, p1); }
static bool _0xB4F47213DF45A64C(int p0, int *p1) { return invoke<bool>(0xB4F47213DF45A64C, p0, p1); }
static bool IS_MOVE_BLEND_RATIO_STILL(int ped) { return invoke<bool>(0x349CE7B56DAFD95C, ped); }
static bool IS_MOVE_BLEND_RATIO_WALKING(int ped) { return invoke<bool>(0xF133BBBE91E1691F, ped); }
static bool IS_MOVE_BLEND_RATIO_RUNNING(int ped) { return invoke<bool>(0xD4D8636C0199A939, ped); }
static bool IS_MOVE_BLEND_RATIO_SPRINTING(int ped) { return invoke<bool>(0x24A2AD74FA9814E2, ped); }
static bool IS_PED_STILL(int ped) { return invoke<bool>(0xAC29253EEF8F0180, ped); }
static bool IS_PED_WALKING(int ped) { return invoke<bool>(0xDE4C184B2B9B071A, ped); }
static bool IS_PED_RUNNING(int ped) { return invoke<bool>(0xC5286FFC176F28A2, ped); }
static bool IS_PED_SPRINTING(int ped) { return invoke<bool>(0x57E457CD2C0FC168, ped); }
static bool IS_PED_STRAFING(int ped) { return invoke<bool>(0xE45B7F222DE47E09, ped); }
static void TASK_SYNCHRONIZED_SCENE(int ped, int scene, char *animDictionary, char *animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, int p9) { invoke<void *>(0xEEA929141F699854, ped, scene, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static void TASK_SWEEP_AIM_ENTITY(int ped, char *anim, char *p2, char *p3, char *p4, int p5, int vehicle, float p7, float p8) { invoke<void *>(0x2047C02158D6405A, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); }
static void UPDATE_TASK_SWEEP_AIM_ENTITY(int ped, int entity) { invoke<void *>(0xE4973DBDBE6E44B3, ped, entity); }
static void TASK_SWEEP_AIM_POSITION(int p0, int *p1, int *p2, int *p3, int *p4, int p5, float p6, float p7, float p8, float p9, float p10) { invoke<void *>(0x7AFE8FDC10BC07D2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void UPDATE_TASK_SWEEP_AIM_POSITION(int p0, float p1, float p2, float p3) { invoke<void *>(0xBB106883F5201FC4, p0, p1, p2, p3); }
static void TASK_ARREST_PED(int ped, int target) { invoke<void *>(0xF3B9A78A178572B1, ped, target); }
static bool IS_PED_RUNNING_ARREST_TASK(int ped) { return invoke<bool>(0x3DC52677769B4AE0, ped); }
static bool IS_PED_BEING_ARRESTED(int ped) { return invoke<bool>(0x90A09F3A45FED688, ped); }
static void UNCUFF_PED(int ped) { invoke<void *>(0x67406F2C8F87FC4F, ped); }
static bool IS_PED_CUFFED(int ped) { return invoke<bool>(0x74E559B3BC910685, ped); }
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0x8B3CA62B1EF19B62); }
static int _GET_FREE_STACK_SLOTS_COUNT(int stackSize) { return invoke<int>(0xFEAD16FC8F9DFC0F, stackSize); }
static void SET_RANDOM_SEED(int time) { invoke<void *>(0x444D98F98C11F3EC, time); }
static void SET_TIME_SCALE(float time) { invoke<void *>(0x1D408577D440E81E, time); }
static void SET_MISSION_FLAG(bool toggle) { invoke<void *>(0xC4301E5121A0ED73, toggle); }
static bool GET_MISSION_FLAG() { return invoke<bool>(0xA33CDCCDA663159E); }
static void SET_RANDOM_EVENT_FLAG(bool p0) { invoke<void *>(0x971927086CFD2158, p0); }
static int GET_RANDOM_EVENT_FLAG() { return invoke<int>(0xD2D57F1D764117B1); }
static void _0x6F2135B6129620C1(bool p0) { invoke<void *>(0x6F2135B6129620C1, p0); }
static void _0x8D74E26F54B4E5C3(char *p0) { invoke<void *>(0x8D74E26F54B4E5C3, p0); }
static int GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<int>(0x564B884A05EC45A3); }
static int GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<int>(0x711327CD09C8F162); }
static bool IS_PREV_WEATHER_TYPE(char *weatherType) { return invoke<bool>(0x44F28F86433B10A9, weatherType); }
static bool IS_NEXT_WEATHER_TYPE(char *weatherType) { return invoke<bool>(0x2FAA3A30BEC0F25D, weatherType); }
static void SET_WEATHER_TYPE_PERSIST(char *weatherType) { invoke<void *>(0x704983DF373B198F, weatherType); }
static void SET_WEATHER_TYPE_NOW_PERSIST(char *weatherType) { invoke<void *>(0xED712CA327900C8A, weatherType); }
static void SET_WEATHER_TYPE_NOW(char *weatherType) { invoke<void *>(0x29B487C359E19889, weatherType); }
static void _SET_WEATHER_TYPE_OVER_TIME(char *weatherType, float time) { invoke<void *>(0xFB5045B7C42B75BF, weatherType, time); }
static void SET_RANDOM_WEATHER_TYPE() { invoke<void *>(0x8B05F884CF7E8020); }
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<void *>(0xCCC39339BEF76CF5); }
static void _GET_WEATHER_TYPE_TRANSITION(int *weatherType1, int *weatherType2, float *percentWeather2) { invoke<void *>(0xF3BBE884A14BB413, weatherType1, weatherType2, percentWeather2); }
static void _SET_WEATHER_TYPE_TRANSITION(int weatherType1, int weatherType2, float percentWeather2) { invoke<void *>(0x578C752848ECFA0C, weatherType1, weatherType2, percentWeather2); }
static void SET_OVERRIDE_WEATHER(char *weatherType) { invoke<void *>(0xA43D5C6FE51ADBEF, weatherType); }
static void CLEAR_OVERRIDE_WEATHER() { invoke<void *>(0x338D2E3477711050); }
static void _0xB8F87EAD7533B176(float p0) { invoke<void *>(0xB8F87EAD7533B176, p0); }
static void _0xC3EAD29AB273ECE8(float p0) { invoke<void *>(0xC3EAD29AB273ECE8, p0); }
static void _0xA7A1127490312C36(float p0) { invoke<void *>(0xA7A1127490312C36, p0); }
static void _0x31727907B2C43C55(float p0) { invoke<void *>(0x31727907B2C43C55, p0); }
static void _0x405591EC8FD9096D(float p0) { invoke<void *>(0x405591EC8FD9096D, p0); }
static void _0xF751B16FB32ABC1D(float p0) { invoke<void *>(0xF751B16FB32ABC1D, p0); }
static void _0xB3E6360DDE733E82(float p0) { invoke<void *>(0xB3E6360DDE733E82, p0); }
static void _0x7C9C0B1EEB1F9072(float p0) { invoke<void *>(0x7C9C0B1EEB1F9072, p0); }
static void _0x6216B116083A7CB4(float p0) { invoke<void *>(0x6216B116083A7CB4, p0); }
static void _0x9F5E6BB6B34540DA(float p0) { invoke<void *>(0x9F5E6BB6B34540DA, p0); }
static void _0xB9854DFDE0D833D6(float p0) { invoke<void *>(0xB9854DFDE0D833D6, p0); }
static void _0xC54A08C85AE4D410(float p0) { invoke<void *>(0xC54A08C85AE4D410, p0); }
static void _0xA8434F1DFF41D6E7(float p0) { invoke<void *>(0xA8434F1DFF41D6E7, p0); }
static void _0xC3C221ADDDE31A11(float p0) { invoke<void *>(0xC3C221ADDDE31A11, p0); }
static void SET_WIND(float speed) { invoke<void *>(0xAC3A74E8384A9919, speed); }
static void SET_WIND_SPEED(float speed) { invoke<void *>(0xEE09ECEDBABE47FC, speed); }
static float GET_WIND_SPEED() { return invoke<float>(0xA8CF1CC0AFCD3F12); }
static void SET_WIND_DIRECTION(float direction) { invoke<void *>(0xEB0F4468467B4528, direction); }
static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x1F400FEF721170DA); }
static int GET_RAIN_LEVEL() { return invoke<int>(0x96695E368AD855F3); }
static int GET_SNOW_LEVEL() { return invoke<int>(0xC5868A966E5BE3AE); }
static void _CREATE_LIGHTNING_THUNDER() { invoke<void *>(0xF6062E089251C898); }
static void _0x11B56FBBF7224868(char *p0) { invoke<void *>(0x11B56FBBF7224868, p0); }
static void _SET_CLOUD_HAT_TRANSITION(char *type, float transitionTime) { invoke<void *>(0xFC4842A34657BFCB, type, transitionTime); }
static void _0xA74802FB8D0B7814(char *p0, float p1) { invoke<void *>(0xA74802FB8D0B7814, p0, p1); }
static void _CLEAR_CLOUD_HAT() { invoke<void *>(0x957E790EA1727B64); }
static int GET_GAME_TIMER() { return invoke<int>(0x9CD27B0045628463); }
static float GET_FRAME_TIME() { return invoke<float>(0x15C40837039FFAF7); }
static int GET_FRAME_COUNT() { return invoke<int>(0xFC8202EFC642E6F2); }
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0x313CE5879CEB6FCD, startRange, endRange); }
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xD53343AA4FB7DD28, startRange, endRange); }
static bool GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float *groundZ, bool unk) { return invoke<bool>(0xC906A7DAB05C8D2B, x, y, z, groundZ, unk); }
static bool _GET_GROUND_Z_COORD_WITH_OFFSETS(float x, float y, float z, float *groundZ, Vector3 *offsets) { return invoke<bool>(0x8BDC7BFC57A81E76, x, y, z, groundZ, offsets); }
static float ASIN(float p0) { return invoke<float>(0xC843060B5765DCE7, p0); }
static float ACOS(float p0) { return invoke<float>(0x1D08B970013C34B6, p0); }
static float TAN(float p0) { return invoke<float>(0x632106CC96E82E91, p0); }
static float ATAN(float p0) { return invoke<float>(0xA9D1795CD5043663, p0); }
static float ATAN2(float p0, float p1) { return invoke<float>(0x8927CBF9D22261A4, p0, p1); }
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, bool useZ) { return invoke<float>(0xF1B760881820C952, x1, y1, z1, x2, y2, z2, useZ); }
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x186FC4BE848E1C92, x1, y1, x2, y2); }
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0x2FFB6B224F4B2926, dx, dy); }
static float _0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9) { return invoke<float>(0x7F8F6405F4777AF6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static Vector3 _0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9) { return invoke<Vector3>(0x21C235BC64831E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static bool _0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, int *p12) { return invoke<bool>(0xF56DFB7B61BE7276, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void SET_BIT(int *address, int offset) { invoke<void *>(0x933D6A9EEC1BACD0, address, offset); }
static void CLEAR_BIT(int *address, int offset) { invoke<void *>(0xE80492A9AC099A93, address, offset); }
static int GET_HASH_KEY(char *string) { return invoke<int>(0xD24D37CC275948CC, string); }
static void _0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, int *p9, int *p10, int *p11, int *p12) { invoke<void *>(0xF2F6A2FA49278625, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static bool IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9, bool p10, int p11, bool p12) { return invoke<bool>(0xA61B4DF533DCB56E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static bool IS_POSITION_OCCUPIED(float x, float y, float z, float range, bool p4, bool p5, bool p6, bool p7, bool p8, int p9, bool p10) { return invoke<bool>(0xADCDE75E1C60F32D, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); }
static bool IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, int p6) { return invoke<bool>(0xE54E209C35FFA18D, p0, p1, p2, p3, p4, p5, p6); }
static void CLEAR_AREA(float X, float Y, float Z, float radius, bool p4, bool ignoreCopCars, bool ignoreints, bool p7) { invoke<void *>(0xA56F01F3765B93A0, X, Y, Z, radius, p4, ignoreCopCars, ignoreints, p7); }
static void _CLEAR_AREA_OF_EVERYTHING(float x, float y, float z, float radius, bool p4, bool p5, bool p6, bool p7) { invoke<void *>(0x957838AAF91BD12D, x, y, z, radius, p4, p5, p6, p7); }
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, bool p4, bool p5, bool p6, bool p7, bool p8) { invoke<void *>(0x01C7B9B38428AEB6, x, y, z, radius, p4, p5, p6, p7, p8); }
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, bool p9, bool p10, bool p11) { invoke<void *>(0x11DB3500F042A8AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<void *>(0xDD9B9B385AAC7F5B, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<void *>(0xBE31FD6CE464AC59, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<void *>(0x04F8FC8FCF58F88D, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<void *>(0x0A1CB9094635D1A6, x, y, z, radius, flags); }
static void SET_SAVE_MENU_ACTIVE(bool unk) { invoke<void *>(0xC9BF75D28165FF77, unk); }
static int _0x397BAA01068BAA96() { return invoke<int>(0x397BAA01068BAA96); }
static void SET_CREDITS_ACTIVE(bool toggle) { invoke<void *>(0xB938B7E6D3C0620C, toggle); }
static void _0xB51B9AB9EF81868C(bool toggle) { invoke<void *>(0xB51B9AB9EF81868C, toggle); }
static int _0x075F1D57402C93BA() { return invoke<int>(0x075F1D57402C93BA); }
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char *scriptName) { invoke<void *>(0x9DC711BC69C548DF, scriptName); }
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<void *>(0x9243BAC96D64C050); }
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, int p4) { return invoke<int>(0x1F464EF988465A81, x, y, z, p3, p4); }
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, bool toggle) { invoke<void *>(0xC8535819C450EBA8, hospitalIndex, toggle); }
static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, int p4) { return invoke<int>(0x452736765B31FC4B, p0, p1, p2, p3, p4); }
static void DISABLE_POLICE_RESTART(int policeIndex, bool toggle) { invoke<void *>(0x23285DED6EBD7EA3, policeIndex, toggle); }
static void _DISABLE_AUTOMATIC_RESPAWN(bool disableRespawn) { invoke<void *>(0x2C2B3493FBF51C71, disableRespawn); }
static void IGNORE_NEXT_RESTART(bool toggle) { invoke<void *>(0x21FFB63D8C615361, toggle); }
static void SET_FADE_OUT_AFTER_DEATH(bool toggle) { invoke<void *>(0x4A18E01DF2C87B86, toggle); }
static void SET_FADE_OUT_AFTER_ARREST(bool toggle) { invoke<void *>(0x1E0B4DC0D990A4E7, toggle); }
static void SET_FADE_IN_AFTER_DEATH_ARREST(bool toggle) { invoke<void *>(0xDA66D2796BA33F12, toggle); }
static void SET_FADE_IN_AFTER_LOAD(bool toggle) { invoke<void *>(0xF3D78F59DFE18D79, toggle); }
static int REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, int *p4, int p5, int p6) { return invoke<int>(0xC0714D0A7EEECA54, p0, p1, p2, p3, p4, p5, p6); }
static void SET_SAVE_HOUSE(int p0, bool p1, bool p2) { invoke<void *>(0x4F548CABEAE553BC, p0, p1, p2); }
static bool OVERRIDE_SAVE_HOUSE(bool p0, float p1, float p2, float p3, float p4, bool p5, float p6, float p7) { return invoke<bool>(0x1162EA8AE9D24EEA, p0, p1, p2, p3, p4, p5, p6, p7); }
static int _0xA4A0065E39C9F25C(int p0, int p1, int p2, int p3) { return invoke<int>(0xA4A0065E39C9F25C, p0, p1, p2, p3); }
static void DO_AUTO_SAVE() { invoke<void *>(0x50EEAAD86232EE55); }
static int _0x6E04F06094C87047() { return invoke<int>(0x6E04F06094C87047); }
static bool IS_AUTO_SAVE_IN_PROGRESS() { return invoke<bool>(0x69240733738C19A0); }
static int _0x2107A3773771186D() { return invoke<int>(0x2107A3773771186D); }
static void _0x06462A961E94B67C() { invoke<void *>(0x06462A961E94B67C); }
static void BEGIN_REPLAY_STATS(int p0, int p1) { invoke<void *>(0xE0E500246FF73D66, p0, p1); }
static void _0x69FE6DC87BD2A5E9(int p0) { invoke<void *>(0x69FE6DC87BD2A5E9, p0); }
static void END_REPLAY_STATS() { invoke<void *>(0xA23E821FBDF8A5F2); }
static int _0xD642319C54AADEB6() { return invoke<int>(0xD642319C54AADEB6); }
static int _0x5B1F2E327B6B6FE1() { return invoke<int>(0x5B1F2E327B6B6FE1); }
static int _0x2B626A0150E4D449() { return invoke<int>(0x2B626A0150E4D449); }
static int _0xDC9274A7EF6B2867() { return invoke<int>(0xDC9274A7EF6B2867); }
static int _0x8098C8D6597AAE18(int p0) { return invoke<int>(0x8098C8D6597AAE18, p0); }
static void CLEAR_REPLAY_STATS() { invoke<void *>(0x1B1AB132A16FDA55); }
static int _0x72DE52178C291CB5() { return invoke<int>(0x72DE52178C291CB5); }
static int _0x44A0BDC559B35F6E() { return invoke<int>(0x44A0BDC559B35F6E); }
static int _0x2B5E102E4A42F2BF() { return invoke<int>(0x2B5E102E4A42F2BF); }
static bool IS_MEMORY_CARD_IN_USE() { return invoke<bool>(0x8A75CE2956274ADD); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, int weaponint, int ownerint, bool isAudible, bool isInvisible, float speed) { invoke<void *>(0x867654CBC7606F2C, x1, y1, z1, x2, y2, z2, damage, p7, weaponint, ownerint, isAudible, isInvisible, speed); }
static void _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, int weaponint, int ownerint, bool isAudible, bool isInvisible, float speed, int entity) { invoke<void *>(0xE3A7742E0B7A2F8B, x1, y1, z1, x2, y2, z2, damage, p7, weaponint, ownerint, isAudible, isInvisible, speed, entity); }
static void GET_MODEL_DIMENSIONS(int modelint, Vector3 *minimum, Vector3 *maximum) { invoke<void *>(0x03E8D3D5F549087A, modelint, minimum, maximum); }
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<void *>(0x1454F2448DE30163, fakeWantedLevel); }
static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0x4C9296CBCD1B971E); }
static bool IS_BIT_SET(int address, int offset) { return invoke<bool>(0xA921AA820C25702F, address, offset); }
static void USING_MISSION_CREATOR(bool toggle) { invoke<void *>(0xF14878FC50BEC6EE, toggle); }
static void _0xDEA36202FC3382DF(bool p0) { invoke<void *>(0xDEA36202FC3382DF, p0); }
static void SET_MINIGAME_IN_PROGRESS(bool toggle) { invoke<void *>(0x19E00D7322C6F85B, toggle); }
static bool IS_MINIGAME_IN_PROGRESS() { return invoke<bool>(0x2B4A15E44DE0F478); }
static bool IS_THIS_A_MINIGAME_SCRIPT() { return invoke<bool>(0x7B30F65D7B710098); }
static bool IS_SNIPER_INVERTED() { return invoke<bool>(0x61A23B7EDA9BDA24); }
static int _0xD3D15555431AB793() { return invoke<int>(0xD3D15555431AB793); }
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xC488FF2356EA7791, profileSetting); }
static bool ARE_STRINGS_EQUAL(char *string1, char *string2) { return invoke<bool>(0x0C515FAB3FF9EA92, string1, string2); }
static int COMPARE_STRINGS(char *str1, char *str2, bool matchCase, int maxLength) { return invoke<int>(0x1E34710ECD4AB0EB, str1, str2, matchCase, maxLength); }
static int ABSI(int value) { return invoke<int>(0xF0D31AD191A74F87, value); }
static float ABSF(float value) { return invoke<float>(0x73D57CFFDD12C355, value); }
static bool IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<bool>(0xFEFCF11B01287125, x1, y1, z1, x2, y2, z2); }
static bool IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool ownedByint) { return invoke<bool>(0x5270A8FBC098C3F8, x1, y1, z1, x2, y2, z2, ownedByint); }
static bool IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, bool p7) { return invoke<bool>(0x2E0DC353342C4A6D, x1, y1, z1, x2, y2, z2, type, p7); }
static bool IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, bool p8) { return invoke<bool>(0xF0BC12401061DEA0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static bool _0x34318593248C8FB2(float p0, float p1, float p2, int p3, float p4, bool p5) { return invoke<bool>(0x34318593248C8FB2, p0, p1, p2, p3, p4, p5); }
static int _0x8D7A43EC6A5FEA45(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x8D7A43EC6A5FEA45, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static bool _0xDFB4138EEFED7B81(int ped, int weaponint, float radius, int *entity, bool p4) { return invoke<bool>(0xDFB4138EEFED7B81, ped, weaponint, radius, entity, p4); }
static int _0x82FDE6A57EE4EE44(int ped, int weaponhash, float p2, float p3, float p4, bool p5) { return invoke<int>(0x82FDE6A57EE4EE44, ped, weaponhash, p2, p3, p4, p5); }
static bool IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7) { return invoke<bool>(0x1A8B5F3C01E2B477, p0, p1, p2, p3, p4, p5, p6, p7); }
static bool IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, bool p4) { return invoke<bool>(0x3F2023999AD51C1F, p0, p1, p2, p3, p4); }
static bool IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, bool p6) { return invoke<bool>(0xDE0F6D7450D37351, p0, p1, p2, p3, p4, p5, p6); }
static bool HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, bool p4, bool p5) { return invoke<bool>(0x9870ACFB89A90995, x, y, z, p3, p4, p5); }
static bool HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return invoke<bool>(0xDC8C5D7CFEAB8394, p0, p1, p2, p3, p4, p5, p6, p7); }
static bool IS_ORBIS_VERSION() { return invoke<bool>(0xA72BC0B675B1519E); }
static bool IS_DURANGO_VERSION() { return invoke<bool>(0x4D982ADB1978442D); }
static bool IS_XBOX360_VERSION() { return invoke<bool>(0xF6201B4DAF662A9D); }
static bool IS_PS3_VERSION() { return invoke<bool>(0xCCA1072C29D096C2); }
static bool IS_PC_VERSION() { return invoke<bool>(0x48AF36444B965238); }
static bool IS_AUSSIE_VERSION() { return invoke<bool>(0x9F1935CA1F724008); }
static bool IS_STRING_NULL(char *string) { return invoke<bool>(0xF22B6C47C6EAB066, string); }
static bool IS_STRING_NULL_OR_EMPTY(char *string) { return invoke<bool>(0xCA042B6957743895, string); }
static bool STRING_TO_INT(char *string, int *outInteger) { return invoke<bool>(0x5A5F40FE637EB584, string, outInteger); }
static void SET_BITS_IN_RANGE(int *var, int rangeStart, int rangeEnd, int p3) { invoke<void *>(0x8EF07E15701D61ED, var, rangeStart, rangeEnd, p3); }
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0x53158863FCC0893A, var, rangeStart, rangeEnd); }
static int ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, int p15, int p16) { return invoke<int>(0x1A992DA297A4630C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static int ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, int p17, int p18) { return invoke<int>(0xBBE5D803A5360CBF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
static void DELETE_STUNT_JUMP(int p0) { invoke<void *>(0xDC518000E39DAE1F, p0); }
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<void *>(0xE369A5783B866016, p0); }
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<void *>(0xA5272EBEDD4747F6, p0); }
static void _0xD79185689F8FD5DF(bool p0) { invoke<void *>(0xD79185689F8FD5DF, p0); }
static bool IS_STUNT_JUMP_IN_PROGRESS() { return invoke<bool>(0x7A3F19700A4D0525); }
static bool IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<bool>(0x2272B0A1343129F4); }
static int _0x996DD1E1E02F1008() { return invoke<int>(0x996DD1E1E02F1008); }
static void CANCEL_STUNT_JUMP() { invoke<void *>(0xE6B7B0ACD4E4B75E); }
static void SET_GAME_PAUSED(bool toggle) { invoke<void *>(0x577D1284D6873711, toggle); }
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(bool toggle) { invoke<void *>(0xAA391C728106F7AF, toggle); }
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool toggle) { invoke<void *>(0xB98236CAAECEF897, toggle); }
static bool _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(int hash, int amount) { return invoke<bool>(0x071E2A839DE82D90, hash, amount); }
static void _USE_FREEMODE_MAP_BEHAVIOR(bool toggle) { invoke<void *>(0x9BAE5AD2508DF078, toggle); }
static void _SET_UNK_MAP_FLAG(int flag) { invoke<void *>(0xC5F0A8EBD3F361CE, flag); }
static bool IS_FRONTEND_FADING() { return invoke<bool>(0x7EA2B6AF97ECA6ED); }
static void POPULATE_NOW() { invoke<void *>(0x7472BB270D7B4F3E); }
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xCBAD6729F7B1F4FC); }
static void SET_GRAVITY_LEVEL(int level) { invoke<void *>(0x740E14FAD5842351, level); }
static void START_SAVE_DATA(int *p0, int p1, bool p2) { invoke<void *>(0xA9575F812C6A7997, p0, p1, p2); }
static void STOP_SAVE_DATA() { invoke<void *>(0x74E20C9145FB66FD); }
static int _0xA09F896CE912481F(bool p0) { return invoke<int>(0xA09F896CE912481F, p0); }
static void REGISTER_INT_TO_SAVE(int *p0, char *name) { invoke<void *>(0x34C9EE5986258415, p0, name); }
static void REGISTER_ENUM_TO_SAVE(int *p0, char *name) { invoke<void *>(0x10C2FA78D0E128A1, p0, name); }
static void REGISTER_FLOAT_TO_SAVE(int *p0, char *name) { invoke<void *>(0x7CAEC29ECB5DFEBB, p0, name); }
static void REGISTER_bool_TO_SAVE(int *p0, char *name) { invoke<void *>(0xC8F4131414C835A1, p0, name); }
static void REGISTER_TEXT_LABEL_TO_SAVE(int *p0, char *name) { invoke<void *>(0xEDB1232C5BEAE62F, p0, name); }
static void _0x6F7794F28C6B2535(int *p0, char *name) { invoke<void *>(0x6F7794F28C6B2535, p0, name); }
static void _0x48F069265A0E4BEC(int *p0, char *name) { invoke<void *>(0x48F069265A0E4BEC, p0, name); }
static void _0x8269816F6CFD40F8(int *p0, char *name) { invoke<void *>(0x8269816F6CFD40F8, p0, name); }
static void _0xFAA457EF263E8763(int *p0, char *name) { invoke<void *>(0xFAA457EF263E8763, p0, name); }
static void _START_SAVE_STRUCT(int *p0, int p1, char *structName) { invoke<void *>(0xBF737600CDDBEADD, p0, p1, structName); }
static void STOP_SAVE_STRUCT() { invoke<void *>(0xEB1774DF12BB9F12); }
static void _START_SAVE_ARRAY(int *p0, int p1, char *arrayName) { invoke<void *>(0x60FE567DF1B1AF9D, p0, p1, arrayName); }
static void STOP_SAVE_ARRAY() { invoke<void *>(0x04456F95153C6BE4); }
static void ENABLE_DISPATCH_SERVICE(int dispatchService, bool toggle) { invoke<void *>(0xDC0F817884CDD856, dispatchService, toggle); }
static void _0x9B2BD3773123EA2F(int type, bool toggle) { invoke<void *>(0x9B2BD3773123EA2F, type, toggle); }
static int _GET_NUMBER_OF_DISPATCHED_UNITS_FOR_PLAYER(int dispatchService) { return invoke<int>(0xEB4A0C2D56441717, dispatchService); }
static bool CREATE_INCIDENT(int incidentType, float x, float y, float z, int p5, float radius, int *outIncidentID) { return invoke<bool>(0x3F892CAF67444AE7, incidentType, x, y, z, p5, radius, outIncidentID); }
static bool CREATE_INCIDENT_WITH_ENTITY(int incidentType, int ped, int amountOfPeople, float radius, int *outIncidentID) { return invoke<bool>(0x05983472F0494E60, incidentType, ped, amountOfPeople, radius, outIncidentID); }
static void DELETE_INCIDENT(int incidentId) { invoke<void *>(0x556C1AA270D5A207, incidentId); }
static bool IS_INCIDENT_VALID(int incidentId) { return invoke<bool>(0xC8BC6461E629BEAA, incidentId); }
static void _0xB08B85D860E7BA3C(int p0, int p1, int p2) { invoke<void *>(0xB08B85D860E7BA3C, p0, p1, p2); }
static void _0xD261BA3E7E998072(int p0, float p1) { invoke<void *>(0xD261BA3E7E998072, p0, p1); }
static bool FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3 *spawnPoint) { return invoke<bool>(0x6874E2190B0C1972, x1, y1, z1, x2, y2, z2, distance, spawnPoint); }
static int _0x67F6413D3220E18D(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { return invoke<int>(0x67F6413D3220E18D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0xB129E447A2EDA4BF(int p0, bool p1) { invoke<void *>(0xB129E447A2EDA4BF, p0, p1); }
static void ENABLE_TENNIS_MODE(int ped, bool toggle, bool p2) { invoke<void *>(0x28A04B411933F8A6, ped, toggle, p2); }
static bool IS_TENNIS_MODE(int ped) { return invoke<bool>(0x5D5479D115290C3F, ped); }
static void _0xE266ED23311F24D4(int p0, int *p1, int *p2, float p3, float p4, bool p5) { invoke<void *>(0xE266ED23311F24D4, p0, p1, p2, p3, p4, p5); }
static bool _0x17DF68D720AA77F8(int p0) { return invoke<bool>(0x17DF68D720AA77F8, p0); }
static bool _0x19BFED045C647C49(int p0) { return invoke<bool>(0x19BFED045C647C49, p0); }
static void _0x8FA9C42FC5D7C64B(int p0, int p1, float p2, float p3, float p4, bool p5) { invoke<void *>(0x8FA9C42FC5D7C64B, p0, p1, p2, p3, p4, p5); }
static void _0x54F157E0336A3822(int p0, char *p1, float p2) { invoke<void *>(0x54F157E0336A3822, p0, p1, p2); }
static void _0xD10F442036302D50(int p0, int p1, int p2) { invoke<void *>(0xD10F442036302D50, p0, p1, p2); }
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<void *>(0x77A84429DD9F0A15); }
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { invoke<void *>(0x6FE601A64180D423, p0); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(int p0, float p1) { invoke<void *>(0x44F7CBC1BEB3327D, p0, p1); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(int p0, float p1) { invoke<void *>(0x48838ED9937A15D1, p0, p1); }
static int _0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0x918C7B2D2FF3928B, p0, p1, p2, p3, p4, p5, p6); }
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<void *>(0x264AC28B01B353A5, p0); }
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<void *>(0xAC7BFD5C1D83EA75); }
static void _0xD9F692D349249528() { invoke<void *>(0xD9F692D349249528); }
static void _0xE532EC1A63231B4F(int p0, int p1) { invoke<void *>(0xE532EC1A63231B4F, p0, p1); }
static void _0xB8721407EE9C3FF6(int p0, int p1, int p2) { invoke<void *>(0xB8721407EE9C3FF6, p0, p1, p2); }
static void _0xB3CD58CCA6CDA852() { invoke<void *>(0xB3CD58CCA6CDA852); }
static void _0x2587A48BC88DFADF(bool p0) { invoke<void *>(0x2587A48BC88DFADF, p0); }
static void _DISPLAY_ONSCREEN_KEYBOARD_2(int p0, char *windowTitle, int *p2, char *defaultText, char *defaultConcat1, char *defaultConcat2, char *defaultConcat3, char *defaultConcat4, char *defaultConcat5, char *defaultConcat6, char *defaultConcat7, int maxInputLength) { invoke<void *>(0xCA78CFA0366592FE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, char *windowTitle, char *p2, char *defaultText, char *defaultConcat1, char *defaultConcat2, char *defaultConcat3, int maxInputLength) { invoke<void *>(0x00DC833F2568DBF6, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x0CF2B696BBF945AE); }
static char *GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char *>(0x8362B09B91893647); }
static void _0x3ED1438C1F5C6612(int p0) { invoke<void *>(0x3ED1438C1F5C6612, p0); }
static void _REMOVE_STEALTH_KILL(int hash, bool p1) { invoke<void *>(0xA6A12939F16D85BE, hash, p1); }
static void _0x1EAE0A6E978894A2(int p0, bool p1) { invoke<void *>(0x1EAE0A6E978894A2, p0, p1); }
static void SET_EXPLOSIVE_AMMO_THIS_FRAME(int player) { invoke<void *>(0xA66C71C98D5F2CFB, player); }
static void SET_FIRE_AMMO_THIS_FRAME(int player) { invoke<void *>(0x11879CDD803D30F4, player); }
static void SET_EXPLOSIVE_MELEE_THIS_FRAME(int player) { invoke<void *>(0xFF1BED81BFDC0FE0, player); }
static void SET_SUPER_JUMP_THIS_FRAME(int player) { invoke<void *>(0x57FFF03E423A4C0B, player); }
static bool _0x6FDDF453C0C756EC() { return invoke<bool>(0x6FDDF453C0C756EC); }
static void _0xFB00CA71DA386228() { invoke<void *>(0xFB00CA71DA386228); }
static int _0x5AA3BEFA29F03AD4() { return invoke<int>(0x5AA3BEFA29F03AD4); }
static void _RESET_LOCALPLAYER_STATE() { invoke<void *>(0xC0AA53F866B3134D); }
static void _0x0A60017F841A54F2(int p0, int p1, int p2, int p3) { invoke<void *>(0x0A60017F841A54F2, p0, p1, p2, p3); }
static void _0x1FF6BF9A63E5757F() { invoke<void *>(0x1FF6BF9A63E5757F); }
static void _0x1BB299305C3E8C13(int p0, int p1, int p2, int p3) { invoke<void *>(0x1BB299305C3E8C13, p0, p1, p2, p3); }
static bool _0x8EF5573A1F801A5C(int p0, int *p1, int *p2) { return invoke<bool>(0x8EF5573A1F801A5C, p0, p1, p2); }
static void PLAY_PED_RINGTONE(char *ringtoneName, int ped, bool p2) { invoke<void *>(0xF9E56683CA8E11A5, ringtoneName, ped, p2); }
static bool IS_PED_RINGTONE_PLAYING(int ped) { return invoke<bool>(0x1E8E5E20937E3137, ped); }
static void STOP_PED_RINGTONE(int ped) { invoke<void *>(0x6C5AE23EFA885092, ped); }
static bool IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<bool>(0x7497D2CE2C30D24C); }
static int _0xC8B1B2425604CDD0() { return invoke<int>(0xC8B1B2425604CDD0); }
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<void *>(0xD2C91A0B572AAE56); }
static void ADD_LINE_TO_CONVERSATION(int p0, char *p1, char *p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9, bool p10, bool p11, bool p12) { invoke<void *>(0xC5EF963405593646, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void ADD_PED_TO_CONVERSATION(int p0, int ped, char *p2) { invoke<void *>(0x95D9F4BC443956E7, p0, ped, p2); }
static void _0x33E3C6C6F2F0B506(int p0, float p1, float p2, float p3) { invoke<void *>(0x33E3C6C6F2F0B506, p0, p1, p2, p3); }
static void _0x892B6AB8F33606F5(int p0, int p1) { invoke<void *>(0x892B6AB8F33606F5, p0, p1); }
static void SET_MICROPHONE_POSITION(bool p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<void *>(0xB6AE90EDDE95C762, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
static void _0x0B568201DD99F0EB(bool p0) { invoke<void *>(0x0B568201DD99F0EB, p0); }
static void START_SCRIPT_PHONE_CONVERSATION(bool p0, bool p1) { invoke<void *>(0x252E5F915EABB675, p0, p1); }
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(bool p0, bool p1) { invoke<void *>(0x6004BCB0E226AAEA, p0, p1); }
static void START_SCRIPT_CONVERSATION(bool p0, bool p1, bool p2, bool p3) { invoke<void *>(0x6B17C62C9635D2DC, p0, p1, p2, p3); }
static void PRELOAD_SCRIPT_CONVERSATION(bool p0, bool p1, bool p2, bool p3) { invoke<void *>(0x3B3CAD6166916D87, p0, p1, p2, p3); }
static void START_PRELOADED_CONVERSATION() { invoke<void *>(0x23641AFE870AF385); }
static int _0xE73364DB90778FFA() { return invoke<int>(0xE73364DB90778FFA); }
static bool IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<bool>(0x16754C556D2EDE3D); }
static bool IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<bool>(0xDF0D54BE7A776737); }
static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0x480357EE890C295A); }
static void PAUSE_SCRIPTED_CONVERSATION(bool p0) { invoke<void *>(0x8530AD776CD72B12, p0); }
static void RESTART_SCRIPTED_CONVERSATION() { invoke<void *>(0x9AEB285D1818C9AC); }
static int STOP_SCRIPTED_CONVERSATION(bool p0) { return invoke<int>(0xD79DEEFB53455EBA, p0); }
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<void *>(0x9663FE6B7A61EB00); }
static void INTERRUPT_CONVERSATION(int p0, int *p1, int *p2) { invoke<void *>(0xA018A12E5C5C2FA6, p0, p1, p2); }
static int _0xAA19F5572C38B564(int *p0) { return invoke<int>(0xAA19F5572C38B564, p0); }
static void _0xB542DE8C3D1CB210(bool p0) { invoke<void *>(0xB542DE8C3D1CB210, p0); }
static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<void *>(0xC6ED9D5092438D91, p0); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<void *>(0xA8638BE228D4751A); }
static bool REQUEST_MISSION_AUDIO_BANK(char *p0, bool p1) { return invoke<bool>(0x7345BDD95E62E0F2, p0, p1); }
static bool REQUEST_AMBIENT_AUDIO_BANK(char *p0, bool p1) { return invoke<bool>(0xFE02FFBED8CA9D99, p0, p1); }
static bool REQUEST_SCRIPT_AUDIO_BANK(char *p0, bool p1) { return invoke<bool>(0x2F844A8B08D76685, p0, p1); }
static int HINT_AMBIENT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0x8F8C0E370AE62F5C, p0, p1); }
static int HINT_SCRIPT_AUDIO_BANK(int p0, int p1) { return invoke<int>(0xFB380A29641EC31A, p0, p1); }
static void RELEASE_MISSION_AUDIO_BANK() { invoke<void *>(0x0EC92A1BF0857187); }
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<void *>(0x65475A218FFAA93D); }
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char *audioBank) { invoke<void *>(0x77ED170667F50170, audioBank); }
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<void *>(0x7A2D8AD0A9EB9C3F); }
static void _0x19AF7ED9B9D23058() { invoke<void *>(0x19AF7ED9B9D23058); }
static int GET_SOUND_ID() { return invoke<int>(0x430386FE9BF80B45); }
static void RELEASE_SOUND_ID(int soundId) { invoke<void *>(0x353FC880830B88FA, soundId); }
static void PLAY_SOUND(int soundId, char *audioName, char *audioRef, bool p3, int p4, bool p5) { invoke<void *>(0x7FF4944CC209192D, soundId, audioName, audioRef, p3, p4, p5); }
static void PLAY_SOUND_FRONTEND(int soundId, char *audioName, char *audioRef, bool p3) { invoke<void *>(0x67C540AA08E4A6F5, soundId, audioName, audioRef, p3); }
static void _0xCADA5A0D0702381E(char *p0, char *soundset) { invoke<void *>(0xCADA5A0D0702381E, p0, soundset); }
static void PLAY_SOUND_FROM_ENTITY(int soundId, char *audioName, int entity, char *audioRef, bool p4, int p5) { invoke<void *>(0xE65F427EB70AB1ED, soundId, audioName, entity, audioRef, p4, p5); }
static void PLAY_SOUND_FROM_COORD(int soundId, char *audioName, float x, float y, float z, char *audioRef, bool p6, int range, bool p8) { invoke<void *>(0x8D8686B622B88120, soundId, audioName, x, y, z, audioRef, p6, range, p8); }
static void STOP_SOUND(int soundId) { invoke<void *>(0xA3B0C41BA5CC0BB5, soundId); }
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0x2DE3F0A134FFBC0D, soundId); }
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0x75262FD12D0A1C84, netId); }
static void SET_VARIABLE_ON_SOUND(int soundId, int *p1, float p2) { invoke<void *>(0xAD6B3148A78AE9B6, soundId, p1, p2); }
static void SET_VARIABLE_ON_STREAM(char *p0, float p1) { invoke<void *>(0x2F9D3834AEB9EF79, p0, p1); }
static void OVERRIDE_UNDERWATER_STREAM(int *p0, bool p1) { invoke<void *>(0xF2A9CDABCEA04BD6, p0, p1); }
static void _0x733ADF241531E5C2(char *name, float p1) { invoke<void *>(0x733ADF241531E5C2, name, p1); }
static bool HAS_SOUND_FINISHED(int soundId) { return invoke<bool>(0xFCBDCE714A7C88E5, soundId); }
static void _PLAY_AMBIENT_SPEECH1(int ped, char *speechName, char *speechParam) { invoke<void *>(0x8E04FEDD28D42462, ped, speechName, speechParam); }
static void _PLAY_AMBIENT_SPEECH2(int ped, char *speechName, char *speechParam) { invoke<void *>(0xC6941B4A3A8FBBB9, ped, speechName, speechParam); }
static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(int p0, char *speechName, char *voiceName, char *speechParam, bool p4) { invoke<void *>(0x3523634255FC3318, p0, speechName, voiceName, speechParam, p4); }
static void _PLAY_AMBIENT_SPEECH_AT_COORDS(char *p0, char *p1, float p2, float p3, float p4, char *p5) { invoke<void *>(0xED640017ED337E45, p0, p1, p2, p3, p4, p5); }
static void OVERRIDE_TREVOR_RAGE(int *p0) { invoke<void *>(0x13AD665062541A7E, p0); }
static void RESET_TREVOR_RAGE() { invoke<void *>(0xE78503B10C4314E0); }
static void SET_PLAYER_ANGRY(int playerint, bool disabled) { invoke<void *>(0xEA241BB04110F091, playerint, disabled); }
static void PLAY_PAIN(int ped, int painID, int p1) { invoke<void *>(0xBC9AE166038A5CEC, ped, painID, p1); }
static void _0xD01005D2BA2EB778(char *p0) { invoke<void *>(0xD01005D2BA2EB778, p0); }
static void _0xDDC635D5B3262C56(char *p0) { invoke<void *>(0xDDC635D5B3262C56, p0); }
static void SET_AMBIENT_VOICE_NAME(int ped, char *name) { invoke<void *>(0x6C8065A3B780185B, ped, name); }
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(int ped) { invoke<void *>(0xB8BEC0CA6F0EDB0F, ped); }
static bool IS_AMBIENT_SPEECH_PLAYING(int p0) { return invoke<bool>(0x9072C8B49907BFAD, p0); }
static bool IS_SCRIPTED_SPEECH_PLAYING(int p0) { return invoke<bool>(0xCC9AA18DCC7084F4, p0); }
static bool IS_ANY_SPEECH_PLAYING(int ped) { return invoke<bool>(0x729072355FA39EC9, ped); }
static bool _CAN_PED_SPEAK(int ped, char *speechName, bool unk) { return invoke<bool>(0x49B99BF3FDA89A7A, ped, speechName, unk); }
static bool IS_PED_IN_CURRENT_CONVERSATION(int ped) { return invoke<bool>(0x049E937F18F4020C, ped); }
static void SET_PED_IS_DRUNK(int ped, bool toggle) { invoke<void *>(0x95D2D383D5396B8A, ped, toggle); }
static void _0xEE066C7006C49C0A(int p0, int p1, int *p2) { invoke<void *>(0xEE066C7006C49C0A, p0, p1, p2); }
static bool _0xC265DF9FB44A9FBD(int p0) { return invoke<bool>(0xC265DF9FB44A9FBD, p0); }
static void SET_ANIMAL_MOOD(int animal, int mood) { invoke<void *>(0xCC97B29285B1DC3B, animal, mood); }
static bool IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<bool>(0xB35CE999E8EF317E); }
static void SET_MOBILE_PHONE_RADIO_STATE(bool state) { invoke<void *>(0xBF286C554784F3DF, state); }
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xE8AF77C4C06ADC93); }
static char *GET_PLAYER_RADIO_STATION_NAME() { return invoke<char *>(0xF6D733C32076AD03); }
static char *GET_RADIO_STATION_NAME(int radioStation) { return invoke<char *>(0xB28ECA15046CA8B9, radioStation); }
static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xA571991A7FE6CCEB); }
static bool IS_RADIO_RETUNING() { return invoke<bool>(0xA151A7394A214E65); }
static void _0xFF266D1D0EB1195D() { invoke<void *>(0xFF266D1D0EB1195D); }
static void _0xDD6BCF9E94425DF9() { invoke<void *>(0xDD6BCF9E94425DF9); }
static void SET_RADIO_TO_STATION_NAME(char *stationName) { invoke<void *>(0xC69EDA28699D5107, stationName); }
static void SET_VEH_RADIO_STATION(int vehicle, char *radioStation) { invoke<void *>(0x1B9C0099CB942AC6, vehicle, radioStation); }
static void _0xC1805D05E6D4FE10(int vehicle) { invoke<void *>(0xC1805D05E6D4FE10, vehicle); }
static void SET_EMITTER_RADIO_STATION(char *emitterName, char *radioStation) { invoke<void *>(0xACF57305B12AF907, emitterName, radioStation); }
static void SET_STATIC_EMITTER_ENABLED(char *emitterName, bool toggle) { invoke<void *>(0x399D2D3B33F1B8EB, emitterName, toggle); }
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<void *>(0xA619B168B8A8570F, radioStation); }
static void SET_FRONTEND_RADIO_ACTIVE(bool active) { invoke<void *>(0xF7F26C6E9CC9EBB8, active); }
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<void *>(0xB165AB7C248B2DC1, newsStory); }
static int GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(int p0) { return invoke<int>(0x66E49BF55B4B1874, p0); }
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0x50B196FC9ED6545B); }
static void PLAY_END_CREDITS_MUSIC(bool play) { invoke<void *>(0xCD536C4D33DCC900, play); }
static void SKIP_RADIO_FORWARD() { invoke<void *>(0x6DDBBDD98E2E9C25); }
static void FREEZE_RADIO_STATION(char *radioStation) { invoke<void *>(0x344F393B027E38C3, radioStation); }
static void UNFREEZE_RADIO_STATION(char *radioStation) { invoke<void *>(0xFC00454CF60B91DD, radioStation); }
static void SET_RADIO_AUTO_UNFREEZE(bool toggle) { invoke<void *>(0xC1AA9F53CE982990, toggle); }
static void SET_INITIAL_PLAYER_STATION(char *radioStation) { invoke<void *>(0x88795F13FACDA88D, radioStation); }
static void SET_USER_RADIO_CONTROL_ENABLED(bool toggle) { invoke<void *>(0x19F21E63AE6EAE4E, toggle); }
static void SET_RADIO_TRACK(char *radioStation, char *radioTrack) { invoke<void *>(0xB39786F201FEE30B, radioStation, radioTrack); }
static void SET_VEHICLE_RADIO_LOUD(int vehicle, bool toggle) { invoke<void *>(0xBB6F1CAEC68B0BCE, vehicle, toggle); }
static bool _IS_VEHICLE_RADIO_LOUD(int vehicle) { return invoke<bool>(0x032A116663A4D5AC, vehicle); }
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bool Toggle) { invoke<void *>(0x1098355A16064BB3, Toggle); }
static bool _0x109697E2FFBAC8A1() { return invoke<bool>(0x109697E2FFBAC8A1); }
static bool _IS_PLAYER_VEHICLE_RADIO_ENABLED() { return invoke<bool>(0x5F43D83FD6738741); }
static void SET_VEHICLE_RADIO_ENABLED(int vehicle, bool toggle) { invoke<void *>(0x3B988190C0AA6C0B, vehicle, toggle); }
static void _0x4E404A9361F75BB2(char *radioStation, char *p1, bool p2) { invoke<void *>(0x4E404A9361F75BB2, radioStation, p1, p2); }
static void _0x1654F24A88A8E3FE(char *radioStation) { invoke<void *>(0x1654F24A88A8E3FE, radioStation); }
static int _MAX_RADIO_STATION_INDEX() { return invoke<int>(0xF1620ECB50E01DE7); }
static int FIND_RADIO_STATION_INDEX(int station) { return invoke<int>(0x8D67489793FF428B, station); }
static void _0x774BD811F656A122(char *radioStation, bool p1) { invoke<void *>(0x774BD811F656A122, radioStation, p1); }
static void _0x2C96CDB04FCA358E(float p0) { invoke<void *>(0x2C96CDB04FCA358E, p0); }
static void _0x031ACB6ABA18C729(char *radioStation, char *p1) { invoke<void *>(0x031ACB6ABA18C729, radioStation, p1); }
static void _0xF3365489E0DD50F9(int p0, bool p1) { invoke<void *>(0xF3365489E0DD50F9, p0, p1); }
static void SET_AMBIENT_ZONE_STATE(int *p0, bool p1, bool p2) { invoke<void *>(0xBDA07E5950085E46, p0, p1, p2); }
static void CLEAR_AMBIENT_ZONE_STATE(char *zoneName, bool p1) { invoke<void *>(0x218DD44AAAC964FF, zoneName, p1); }
static void SET_AMBIENT_ZONE_LIST_STATE(int *p0, bool p1, bool p2) { invoke<void *>(0x9748FA4DE50CCE3E, p0, p1, p2); }
static void CLEAR_AMBIENT_ZONE_LIST_STATE(int *p0, bool p1) { invoke<void *>(0x120C48C614909FA4, p0, p1); }
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char *ambientZone, bool p1, bool p2) { invoke<void *>(0x1D6650420CEC9D3B, ambientZone, p1, p2); }
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(char *ambientZone, bool p1, bool p2) { invoke<void *>(0xF3638DAE8C4045E1, ambientZone, p1, p2); }
static bool IS_AMBIENT_ZONE_ENABLED(char *ambientZone) { return invoke<bool>(0x01E2817A479A7F9B, ambientZone); }
static void SET_CUTSCENE_AUDIO_OVERRIDE(char *p0) { invoke<void *>(0x3B4BF5F0859204D9, p0); }
static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(char *p0, float p1) { invoke<void *>(0xBCC29F935ED07688, p0, p1); }
static int PLAY_POLICE_REPORT(char *name, float p1) { return invoke<int>(0xDFEBD56D9BD1EB16, name, p1); }
static void BLIP_SIREN(int vehicle) { invoke<void *>(0x1B9025BDA76822B6, vehicle); }
static void OVERRIDE_VEH_HORN(int vehicle, bool mute, int p2) { invoke<void *>(0x3CDC1E622CCE0356, vehicle, mute, p2); }
static bool IS_HORN_ACTIVE(int vehicle) { return invoke<bool>(0x9D6BFC12B05C6121, vehicle); }
static void SET_AGGRESSIVE_HORNS(bool toggle) { invoke<void *>(0x395BF71085D1B1D9, toggle); }
static void _0x02E93C796ABD3A97(bool p0) { invoke<void *>(0x02E93C796ABD3A97, p0); }
static void _0x58BB377BEC7CD5F4(bool p0, bool p1) { invoke<void *>(0x58BB377BEC7CD5F4, p0, p1); }
static bool IS_STREAM_PLAYING() { return invoke<bool>(0xD11FA52EB849D978); }
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0x4E72BBDBCA58A3DB); }
static bool LOAD_STREAM(char *streamName, char *soundSet) { return invoke<bool>(0x1F1F957154EC51DF, streamName, soundSet); }
static bool LOAD_STREAM_WITH_START_OFFSET(char *streamName, int startOffset, char *soundSet) { return invoke<bool>(0x59C16B79F53B3712, streamName, startOffset, soundSet); }
static void PLAY_STREAM_FROM_PED(int ped) { invoke<void *>(0x89049DD63C08B5D1, ped); }
static void PLAY_STREAM_FROM_VEHICLE(int vehicle) { invoke<void *>(0xB70374A758007DFA, vehicle); }
static void PLAY_STREAM_FROM_OBJECT(int object) { invoke<void *>(0xEBAA9B64D76356FD, object); }
static void PLAY_STREAM_FRONTEND() { invoke<void *>(0x58FCE43488F9F5F4); }
static void SPECIAL_FRONTEND_EQUAL(float x, float y, float z) { invoke<void *>(0x21442F412E8DE56B, x, y, z); }
static void STOP_STREAM() { invoke<void *>(0xA4718A1419D18151); }
static void STOP_PED_SPEAKING(int ped, bool shaking) { invoke<void *>(0x9D64D7405520E3D3, ped, shaking); }
static void DISABLE_PED_PAIN_AUDIO(int ped, bool toggle) { invoke<void *>(0xA9A41C1E940FB0E8, ped, toggle); }
static bool IS_AMBIENT_SPEECH_DISABLED(int ped) { return invoke<bool>(0x932C2D096A2C3FFF, ped); }
static void SET_SIREN_WITH_NO_DRIVER(int vehicle, bool toggle) { invoke<void *>(0x1FEF0683B96EBCF2, vehicle, toggle); }
static void _SOUND_VEHICLE_HORN_THIS_FRAME(int vehicle) { invoke<void *>(0x9C11908013EA4715, vehicle); }
static void SET_HORN_ENABLED(int vehicle, bool toggle) { invoke<void *>(0x76D683C108594D0E, vehicle, toggle); }
static void SET_AUDIO_VEHICLE_PRIORITY(int vehicle, int p1) { invoke<void *>(0xE5564483E407F914, vehicle, p1); }
static void _0x9D3AF56E94C9AE98(int p0, float p1) { invoke<void *>(0x9D3AF56E94C9AE98, p0, p1); }
static void USE_SIREN_AS_HORN(int vehicle, bool toggle) { invoke<void *>(0xFA932DE350266EF8, vehicle, toggle); }
static void _SET_VEHICLE_AUDIO(int vehicle, char *audioName) { invoke<void *>(0x4F0C413926060B38, vehicle, audioName); }
static void _0xF1F8157B8C3F171C(int p0, char *p1, char *p2) { invoke<void *>(0xF1F8157B8C3F171C, p0, p1, p2); }
static bool _0x5DB8010EE71FDEF2(int vehicle) { return invoke<bool>(0x5DB8010EE71FDEF2, vehicle); }
static void _0x59E7B488451F4D3A(int p0, float p1) { invoke<void *>(0x59E7B488451F4D3A, p0, p1); }
static void _0x01BB4D577D38BD9E(int p0, float p1) { invoke<void *>(0x01BB4D577D38BD9E, p0, p1); }
static void _0x1C073274E065C6D2(int p0, bool p1) { invoke<void *>(0x1C073274E065C6D2, p0, p1); }
static void _0x2BE4BC731D039D5A(int p0, bool p1) { invoke<void *>(0x2BE4BC731D039D5A, p0, p1); }
static void SET_VEHICLE_BOOST_ACTIVE(int vehicle, bool Toggle) { invoke<void *>(0x4A04DE7CAB2739A1, vehicle, Toggle); }
static void _0x6FDDAD856E36988A(int p0, bool p1) { invoke<void *>(0x6FDDAD856E36988A, p0, p1); }
static void _0x06C0023BED16DD6B(int p0, bool p1) { invoke<void *>(0x06C0023BED16DD6B, p0, p1); }
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(int vehicle, int p1) { invoke<void *>(0x3A539D52857EA82D, vehicle, p1); }
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(int vehicle, int p1) { invoke<void *>(0x62A456AA4769EF34, vehicle, p1); }
static void _0xC15907D667F7CFB2(int vehicle, bool toggle) { invoke<void *>(0xC15907D667F7CFB2, vehicle, toggle); }
static bool IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<bool>(0x6D28DC1671E334FD); }
static void SET_GPS_ACTIVE(bool active) { invoke<void *>(0x3BD3F52BA9B1E4E8, active); }
static void PLAY_MISSION_COMPLETE_AUDIO(char *audioName) { invoke<void *>(0xB138AAB8A70D3C69, audioName); }
static bool IS_MISSION_COMPLETE_PLAYING() { return invoke<bool>(0x19A30C23F5827F8A); }
static int _0x6F259F82D873B8B8() { return invoke<int>(0x6F259F82D873B8B8); }
static void _0xF154B8D1775B2DEC(bool p0) { invoke<void *>(0xF154B8D1775B2DEC, p0); }
static bool START_AUDIO_SCENE(char *scene) { return invoke<bool>(0x013A80FC08F6E4F2, scene); }
static void STOP_AUDIO_SCENE(char *scene) { invoke<void *>(0xDFE8422B3B94E688, scene); }
static void STOP_AUDIO_SCENES() { invoke<void *>(0xBAC7FC81A75EC1A1); }
static bool IS_AUDIO_SCENE_ACTIVE(char *scene) { return invoke<bool>(0xB65B60556E2A9225, scene); }
static void SET_AUDIO_SCENE_VARIABLE(char *scene, char *variable, float value) { invoke<void *>(0xEF21A9EF089A2668, scene, variable, value); }
static void _0xA5F377B175A699C5(int p0) { invoke<void *>(0xA5F377B175A699C5, p0); }
static void _DYNAMIC_MIXER_RELATED_FN(int p0, char *p1, float p2) { invoke<void *>(0x153973AB99FE8980, p0, p1, p2); }
static void _0x18EB48CFC41F2EA0(int p0, float p1) { invoke<void *>(0x18EB48CFC41F2EA0, p0, p1); }
static int AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<int>(0x845FFC3A4FEEFA3E); }
static bool PREPARE_MUSIC_EVENT(char *eventName) { return invoke<bool>(0x1E5185B72EF5158A, eventName); }
static bool CANCEL_MUSIC_EVENT(char *eventName) { return invoke<bool>(0x5B17A90291133DA5, eventName); }
static bool TRIGGER_MUSIC_EVENT(char *eventName) { return invoke<bool>(0x706D57B0F50DA710, eventName); }
static int _0xA097AB275061FB21() { return invoke<int>(0xA097AB275061FB21); }
static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xE7A0D23DC414507B); }
static void _0xFBE20329593DEC9D(int p0, int p1, int p2, int p3) { invoke<void *>(0xFBE20329593DEC9D, p0, p1, p2, p3); }
static void CLEAR_ALL_BROKEN_GLASS() { invoke<void *>(0xB32209EFFDC04913); }
static void _0x70B8EC8FC108A634(bool p0, int p1) { invoke<void *>(0x70B8EC8FC108A634, p0, p1); }
static void _0x149AEE66F0CB3A99(float p0, float p1) { invoke<void *>(0x149AEE66F0CB3A99, p0, p1); }
static void _0x062D5EAD4DA2FA6A() { invoke<void *>(0x062D5EAD4DA2FA6A); }
static bool PREPARE_ALARM(char *alarmName) { return invoke<bool>(0x9D74AE343DB65533, alarmName); }
static void START_ALARM(char *alarmName, bool p2) { invoke<void *>(0x0355EF116C4C97B2, alarmName, p2); }
static void STOP_ALARM(char *alarmName, bool toggle) { invoke<void *>(0xA1CADDCD98415A41, alarmName, toggle); }
static void STOP_ALL_ALARMS(bool stop) { invoke<void *>(0x2F794A877ADD4C92, stop); }
static bool IS_ALARM_PLAYING(char *alarmName) { return invoke<bool>(0x226435CB96CCFC8C, alarmName); }
static int GET_VEHICLE_DEFAULT_HORN(int vehicle) { return invoke<int>(0x02165D55000219AC, vehicle); }
static int _GET_VEHICLE_HORN_HASH(int vehicle) { return invoke<int>(0xACB5DCCA1EC76840, vehicle); }
static void RESET_PED_AUDIO_FLAGS(int ped) { invoke<void *>(0xF54BB7B61036F335, ped); }
static void _0xD2CC78CD3D0B50F9(int p0, bool p1) { invoke<void *>(0xD2CC78CD3D0B50F9, p0, p1); }
static void _FORCE_AMBIENT_SIREN(bool value) { invoke<void *>(0x552369F549563AD5, value); }
static void _0x43FA0DFC5DF87815(int vehicle, bool p1) { invoke<void *>(0x43FA0DFC5DF87815, vehicle, p1); }
static void SET_AUDIO_FLAG(char *flagName, bool toggle) { invoke<void *>(0xB9EFD5C25018725A, flagName, toggle); }
static int PREPARE_SYNCHRONIZED_AUDIO_EVENT(char *p0, int p1) { return invoke<int>(0xC7ABCACA4985A766, p0, p1); }
static bool PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int p0, int *p1) { return invoke<bool>(0x029FE7CD1B7E2E75, p0, p1); }
static bool PLAY_SYNCHRONIZED_AUDIO_EVENT(int p0) { return invoke<bool>(0x8B2FD4560E55DD2D, p0); }
static bool STOP_SYNCHRONIZED_AUDIO_EVENT(int p0) { return invoke<bool>(0x92D6A88E64A94430, p0); }
static void _0xC8EDE9BDBCCBA6D4(int *p0, float p1, float p2, float p3) { invoke<void *>(0xC8EDE9BDBCCBA6D4, p0, p1, p2, p3); }
static void _SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(char *p0, int p1) { invoke<void *>(0x950A154B8DAB6185, p0, p1); }
static void _0x12561FCBB62D5B9C(int p0) { invoke<void *>(0x12561FCBB62D5B9C, p0); }
static void _0x044DBAD7A7FA2BE5(char *p0, char *p1) { invoke<void *>(0x044DBAD7A7FA2BE5, p0, p1); }
static void _0xB4BBFD9CD8B3922B(char *p0) { invoke<void *>(0xB4BBFD9CD8B3922B, p0); }
static void _0xE4E6DD5566D28C82() { invoke<void *>(0xE4E6DD5566D28C82); }
static int _0x3A48AB4445D499BE() { return invoke<int>(0x3A48AB4445D499BE); }
static void _SET_PED_TALK(int ped) { invoke<void *>(0x4ADA3F19BE4A6047, ped); }
static void _0x0150B6FF25A9E2E5() { invoke<void *>(0x0150B6FF25A9E2E5); }
static void _0xBEF34B1D9624D5DD(bool p0) { invoke<void *>(0xBEF34B1D9624D5DD, p0); }
static void REQUEST_CUTSCENE(char *cutsceneName, int p1) { invoke<void *>(0x7A86743F475D9E09, cutsceneName, p1); }
static void _REQUEST_CUTSCENE_EX(char *cutsceneName, int p1, int p2) { invoke<void *>(0xC23DE0E91C30B58C, cutsceneName, p1, p2); }
static void REMOVE_CUTSCENE() { invoke<void *>(0x440AF51A3462B86F); }
static bool HAS_CUTSCENE_LOADED() { return invoke<bool>(0xC59F528E9AB9F339); }
static bool HAS_THIS_CUTSCENE_LOADED(char *cutsceneName) { return invoke<bool>(0x228D3D94F8A11C3C, cutsceneName); }
static void _0x8D9DF6ECA8768583(int p0) { invoke<void *>(0x8D9DF6ECA8768583, p0); }
static bool _0xB56BBBCC2955D9CB() { return invoke<bool>(0xB56BBBCC2955D9CB); }
static bool _0x71B74D2AE19338D0(int p0) { return invoke<bool>(0x71B74D2AE19338D0, p0); }
static void _0x4C61C75BEE8184C2(char *p0, int p1, int p2) { invoke<void *>(0x4C61C75BEE8184C2, p0, p1, p2); }
static void START_CUTSCENE(int p0) { invoke<void *>(0x186D5CB5E7B0FF7B, p0); }
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int p3) { invoke<void *>(0x1C9ADDA3244A1FBF, x, y, z, p3); }
static void STOP_CUTSCENE(bool p0) { invoke<void *>(0xC7272775B4DC786E, p0); }
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<void *>(0xD220BDD222AC4A1E); }
static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<void *>(0xB812B3FD1C01CF27, x, y, z, p3, p4); }
static int GET_CUTSCENE_TIME() { return invoke<int>(0xE625BEABBAFFDAB9); }
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xEE53B14A19E480D4); }
static bool WAS_CUTSCENE_SKIPPED() { return invoke<bool>(0x40C8656EDAEDD569); }
static bool HAS_CUTSCENE_FINISHED() { return invoke<bool>(0x7C0A893088881D57); }
static bool IS_CUTSCENE_ACTIVE() { return invoke<bool>(0x991251AFC3981F84); }
static bool IS_CUTSCENE_PLAYING() { return invoke<bool>(0xD3C2E180A40F031E); }
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0x49010A6A396553D8); }
static int GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(char *cutsceneEntName, int modelint) { return invoke<int>(0x0A2E9FDB9A8C62F6, cutsceneEntName, modelint); }
static int _0x583DF8E3D4AFBD98() { return invoke<int>(0x583DF8E3D4AFBD98); }
static void REGISTER_ENTITY_FOR_CUTSCENE(int cutsceneint, char *cutsceneEntName, int p2, int modelint, int p4) { invoke<void *>(0xE40C1C56DF95C2E8, cutsceneint, cutsceneEntName, p2, modelint, p4); }
static int GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(char *cutsceneEntName, int modelint) { return invoke<int>(0xC0741A26499654CD, cutsceneEntName, modelint); }
static void SET_CUTSCENE_TRIGGER_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<void *>(0x9896CE4721BE84BA, p0, p1, p2, p3, p4, p5); }
static bool CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(char *cutsceneEntName, int modelint) { return invoke<bool>(0x645D0B458D8E17B5, cutsceneEntName, modelint); }
static bool CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(char *cutsceneEntName, int modelint) { return invoke<bool>(0x4C6A6451C79E4662, cutsceneEntName, modelint); }
static bool CAN_SET_EXIT_STATE_FOR_CAMERA(bool p0) { return invoke<bool>(0xB2CBCD0930DFB420, p0); }
static void _0xC61B86C9F61EB404(bool toggle) { invoke<void *>(0xC61B86C9F61EB404, toggle); }
static void SET_CUTSCENE_FADE_VALUES(bool p0, bool p1, bool p2, bool p3) { invoke<void *>(0x8093F23ABACCC7D4, p0, p1, p2, p3); }
static void _0x2F137B508DE238F2(bool p0) { invoke<void *>(0x2F137B508DE238F2, p0); }
static void _0xE36A98D8AB3D3C66(bool p0) { invoke<void *>(0xE36A98D8AB3D3C66, p0); }
static int _0x5EDEF0CF8C1DAB3C() { return invoke<int>(0x5EDEF0CF8C1DAB3C); }
static void _0x41FAA8FB2ECE8720(bool p0) { invoke<void *>(0x41FAA8FB2ECE8720, p0); }
static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<void *>(0x2131046957F31B04); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(char *cutsceneEntName, int p1, int p2, int p3, int modelint) { invoke<void *>(0xBA01E7B6DEEFBBC9, cutsceneEntName, p1, p2, p3, modelint); }
static void _0x2A56C06EBEF2B0D9(char *cutsceneEntName, int ped, int modelint) { invoke<void *>(0x2A56C06EBEF2B0D9, cutsceneEntName, ped, modelint); }
static bool DOES_CUTSCENE_ENTITY_EXIST(char *cutsceneEntName, int modelint) { return invoke<bool>(0x499EF20C5DB25C59, cutsceneEntName, modelint); }
static void SET_CUTSCENE_PED_PROP_VARIATION(char *cutsceneEntName, int p1, int p2, int p3, int modelint) { invoke<void *>(0x0546524ADE2E9723, cutsceneEntName, p1, p2, p3, modelint); }
static int *_0x708BDD8CD795B043() { return invoke<int *>(0x708BDD8CD795B043); }
static int GET_INTERIOR_GROUP_ID(int interiorID) { return invoke<int>(0xE4A84ABF135EF91A, interiorID); }
static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) { return invoke<Vector3>(0x9E3B3E6D66F6E22F, interiorID, x, y, z); }
static bool IS_INTERIOR_SCENE() { return invoke<bool>(0xBC72B5D7A1CBD54D); }
static bool IS_VALID_INTERIOR(int interiorID) { return invoke<bool>(0x26B0E73D7EAAF4D3, interiorID); }
static void CLEAR_ROOM_FOR_ENTITY(int entity) { invoke<void *>(0xB365FC0C4E27FFA7, entity); }
static void FORCE_ROOM_FOR_ENTITY(int entity, int interiorID, int roomintKey) { invoke<void *>(0x52923C4710DD9907, entity, interiorID, roomintKey); }
static int GET_ROOM_KEY_FROM_ENTITY(int entity) { return invoke<int>(0x47C2A06D4F5F424B, entity); }
static int GET_KEY_FOR_ENTITY_IN_ROOM(int entity) { return invoke<int>(0x399685DB942336BC, entity); }
static int GET_INTERIOR_FROM_ENTITY(int entity) { return invoke<int>(0x2107BA504071A6BB, entity); }
static void _0x82EBB79E258FA2B7(int entity, int interiorID) { invoke<void *>(0x82EBB79E258FA2B7, entity, interiorID); }
static void _0x920D853F3E17F1DA(int interiorID, int roomintKey) { invoke<void *>(0x920D853F3E17F1DA, interiorID, roomintKey); }
static void _0xAF348AFCB575A441(char *roomName) { invoke<void *>(0xAF348AFCB575A441, roomName); }
static void _0x405DC2AEF6AF95B9(int roomintKey) { invoke<void *>(0x405DC2AEF6AF95B9, roomintKey); }
static int _GET_ROOM_KEY_FROM_GAMEPLAY_CAM() { return invoke<int>(0xA6575914D2A0B450); }
static void _0x23B59D8912F94246() { invoke<void *>(0x23B59D8912F94246); }
static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<int>(0xB0F7F8663821D9C3, x, y, z); }
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(int pickup, char *roomName) { invoke<void *>(0x3F6167F351168730, pickup, roomName); }
static void _LOAD_INTERIOR(int interiorID) { invoke<void *>(0x2CA429C029CCF247, interiorID); }
static void UNPIN_INTERIOR(int interiorID) { invoke<void *>(0x261CCE7EED010641, interiorID); }
static bool IS_INTERIOR_READY(int interiorID) { return invoke<bool>(0x6726BDCCC1932F0E, interiorID); }
static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char *interiorType) { return invoke<int>(0x05B7A89BD78797FC, x, y, z, interiorType); }
static bool _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return invoke<bool>(0xEEA5AC2EDA7C33E8, x, y, z); }
static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0xEC4CF9FCB29A4424, x, y, z); }
static void _ENABLE_INTERIOR_PROP(int interiorID, char *propName) { invoke<void *>(0x55E86AF2712B36A1, interiorID, propName); }
static void _DISABLE_INTERIOR_PROP(int interiorID, char *propName) { invoke<void *>(0x420BD37289EEE162, interiorID, propName); }
static bool _IS_INTERIOR_PROP_ENABLED(int interiorID, char *propName) { return invoke<bool>(0x35F7DD45E8C0A16D, interiorID, propName); }
static void REFRESH_INTERIOR(int interiorID) { invoke<void *>(0x41F37C3427C75AE0, interiorID); }
static void _HIDE_MAP_OBJECT_THIS_FRAME(int mapintint) { invoke<void *>(0xA97F257D0151A6AB, mapintint); }
static void DISABLE_INTERIOR(int interiorID, bool toggle) { invoke<void *>(0x6170941419D7D8EC, interiorID, toggle); }
static bool IS_INTERIOR_DISABLED(int interiorID) { return invoke<bool>(0xBC5115A5A939DD15, interiorID); }
static void CAP_INTERIOR(int interiorID, bool toggle) { invoke<void *>(0xD9175F941610DB54, interiorID, toggle); }
static bool IS_INTERIOR_CAPPED(int interiorID) { return invoke<bool>(0x92BAC8ACF88CEC26, interiorID); }
static void _0x9E6542F0CE8E70A3(bool toggle) { invoke<void *>(0x9E6542F0CE8E70A3, toggle); }
static void RENDER_SCRIPT_CAMS(bool render, bool ease, int easeTime, bool p3, bool p4) { invoke<void *>(0x07E5B515DB0636FC, render, ease, easeTime, p3, p4); }
static void _RENDER_FIRST_PERSON_CAM(bool render, float p1, int p2) { invoke<void *>(0xC819F3CBB62BF692, render, p1, p2); }
static int CREATE_CAM(char *camName, bool p1) { return invoke<int>(0xC3981DCE61D9E13F, camName, p1); }
static int CREATE_CAM_WITH_PARAMS(char *camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, bool p8, int p9) { return invoke<int>(0xB51194800B257161, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static int CREATE_CAMERA(int camint, bool p1) { return invoke<int>(0x5E3CF89C6BCCA67D, camint, p1); }
static int CREATE_CAMERA_WITH_PARAMS(int camint, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, bool p8, int p9) { return invoke<int>(0x6ABFA3E16460F22D, camint, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static void DESTROY_CAM(int cam, bool thisScriptCheck) { invoke<void *>(0x865908C81A2C22E9, cam, thisScriptCheck); }
static void DESTROY_ALL_CAMS(bool thisScriptCheck) { invoke<void *>(0x8E5FB15663F79120, thisScriptCheck); }
static bool DOES_CAM_EXIST(int cam) { return invoke<bool>(0xA7A932170592B50E, cam); }
static void SET_CAM_ACTIVE(int cam, bool active) { invoke<void *>(0x026FB97D0A425F84, cam, active); }
static bool IS_CAM_ACTIVE(int cam) { return invoke<bool>(0xDFB2B516207D3534, cam); }
static bool IS_CAM_RENDERING(int cam) { return invoke<bool>(0x02EC0AF5C5A49B7A, cam); }
static int GET_RENDERING_CAM() { return invoke<int>(0x5234F9F10919EABA); }
static Vector3 GET_CAM_COORD(int cam) { return invoke<Vector3>(0xBAC038F7459AE5AE, cam); }
static Vector3 GET_CAM_ROT(int cam, int rotationOrder) { return invoke<Vector3>(0x7D304C1C955E3E12, cam, rotationOrder); }
static float GET_CAM_FOV(int cam) { return invoke<float>(0xC3330A45CCCDB26A, cam); }
static float GET_CAM_NEAR_CLIP(int cam) { return invoke<float>(0xC520A34DAFBF24B1, cam); }
static float GET_CAM_FAR_CLIP(int cam) { return invoke<float>(0xB60A9CFEB21CA6AA, cam); }
static float GET_CAM_FAR_DOF(int cam) { return invoke<float>(0x255F8DAFD540D397, cam); }
static void SET_CAM_PARAMS(int cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, int p8, int p9, int p10, int p11) { invoke<void *>(0xBFD8727AEA3CCEBA, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); }
static void SET_CAM_COORD(int cam, float posX, float posY, float posZ) { invoke<void *>(0x4D41783FB745E42E, cam, posX, posY, posZ); }
static void SET_CAM_ROT(int cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<void *>(0x85973643155D0B07, cam, rotX, rotY, rotZ, rotationOrder); }
static void SET_CAM_FOV(int cam, float fieldOfView) { invoke<void *>(0xB13C14F66A00D047, cam, fieldOfView); }
static void SET_CAM_NEAR_CLIP(int cam, float nearClip) { invoke<void *>(0xC7848EFCCC545182, cam, nearClip); }
static void SET_CAM_FAR_CLIP(int cam, float farClip) { invoke<void *>(0xAE306F2A904BF86E, cam, farClip); }
static void SET_CAM_MOTION_BLUR_STRENGTH(int cam, float strength) { invoke<void *>(0x6F0F77FBA9A8F2E6, cam, strength); }
static void SET_CAM_NEAR_DOF(int cam, float nearDOF) { invoke<void *>(0x3FA4BF0A7AB7DE2C, cam, nearDOF); }
static void SET_CAM_FAR_DOF(int cam, float farDOF) { invoke<void *>(0xEDD91296CD01AEE0, cam, farDOF); }
static void SET_CAM_DOF_STRENGTH(int cam, float dofStrength) { invoke<void *>(0x5EE29B4D7D5DF897, cam, dofStrength); }
static void SET_CAM_DOF_PLANES(int cam, float p1, float p2, float p3, float p4) { invoke<void *>(0x3CF48F6F96E749DC, cam, p1, p2, p3, p4); }
static void SET_CAM_USE_SHALLOW_DOF_MODE(int cam, bool toggle) { invoke<void *>(0x16A96863A17552BB, cam, toggle); }
static void SET_USE_HI_DOF() { invoke<void *>(0xA13B0222F3D94A94); }
static void ATTACH_CAM_TO_ENTITY(int cam, int entity, float xOffset, float yOffset, float zOffset, bool isRelative) { invoke<void *>(0xFEDB7D269E8C60E3, cam, entity, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_PED_BONE(int cam, int ped, int boneIndex, float x, float y, float z, bool heading) { invoke<void *>(0x61A3DBA14AB7F411, cam, ped, boneIndex, x, y, z, heading); }
static void DETACH_CAM(int cam) { invoke<void *>(0xA2FABBE87F4BAD82, cam); }
static void SET_CAM_INHERIT_ROLL_VEHICLE(int cam, bool p1) { invoke<void *>(0x45F1DE9C34B93AE6, cam, p1); }
static void POINT_CAM_AT_COORD(int cam, float x, float y, float z) { invoke<void *>(0xF75497BB865F0803, cam, x, y, z); }
static void POINT_CAM_AT_ENTITY(int cam, int entity, float p2, float p3, float p4, bool p5) { invoke<void *>(0x5640BFF86B16E8DC, cam, entity, p2, p3, p4, p5); }
static void POINT_CAM_AT_PED_BONE(int cam, int ped, int boneIndex, float x, float y, float z, bool p6) { invoke<void *>(0x68B2B5F33BA63C41, cam, ped, boneIndex, x, y, z, p6); }
static void STOP_CAM_POINTING(int cam) { invoke<void *>(0xF33AB75780BA57DE, cam); }
static void SET_CAM_AFFECTS_AIMING(int cam, bool toggle) { invoke<void *>(0x8C1DC7770C51DC8D, cam, toggle); }
static void _0x661B5C8654ADD825(int p0, bool p1) { invoke<void *>(0x661B5C8654ADD825, p0, p1); }
static void _0x271017B9BA825366(int p0, bool p1) { invoke<void *>(0x271017B9BA825366, p0, p1); }
static void SET_CAM_DEBUG_NAME(int camera, char *name) { invoke<void *>(0x1B93E0107865DD40, camera, name); }
static void ADD_CAM_SPLINE_NODE(int camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9) { invoke<void *>(0x8609C75EC438FB3B, camera, x, y, z, xRot, yRot, zRot, length, p8, p9); }
static void _0x0A9F2A468B328E74(int p0, int p1, int p2, int p3) { invoke<void *>(0x0A9F2A468B328E74, p0, p1, p2, p3); }
static void _0x0FB82563989CF4FB(int p0, int p1, int p2, int p3) { invoke<void *>(0x0FB82563989CF4FB, p0, p1, p2, p3); }
static void _0x609278246A29CA34(int p0, int p1, int p2) { invoke<void *>(0x609278246A29CA34, p0, p1, p2); }
static void SET_CAM_SPLINE_PHASE(int cam, float p1) { invoke<void *>(0x242B5874F0A4E052, cam, p1); }
static float GET_CAM_SPLINE_PHASE(int cam) { return invoke<float>(0xB5349E36C546509A, cam); }
static float GET_CAM_SPLINE_NODE_PHASE(int cam) { return invoke<float>(0xD9D0E694C8282C96, cam); }
static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { invoke<void *>(0x1381539FEE034CDA, cam, timeDuration); }
static void _0xD1B0F412F109EA5D(int p0, int p1) { invoke<void *>(0xD1B0F412F109EA5D, p0, p1); }
static bool GET_CAM_SPLINE_NODE_INDEX(int cam) { return invoke<bool>(0xB22B17DF858716A6, cam); }
static void _0x83B8201ED82A9A2D(int p0, int p1, int p2, float p3) { invoke<void *>(0x83B8201ED82A9A2D, p0, p1, p2, p3); }
static void _0xA6385DEB180F319F(int p0, int p1, float p2) { invoke<void *>(0xA6385DEB180F319F, p0, p1, p2); }
static void OVERRIDE_CAM_SPLINE_VELOCITY(int cam, int p1, float p2, float p3) { invoke<void *>(0x40B62FA033EB0346, cam, p1, p2, p3); }
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(int cam, int p1, float p2, float p3) { invoke<void *>(0x7DCF7C708D292D55, cam, p1, p2, p3); }
static void _0x7BF1A54AE67AC070(int p0, int p1, int p2) { invoke<void *>(0x7BF1A54AE67AC070, p0, p1, p2); }
static bool IS_CAM_SPLINE_PAUSED(int p0) { return invoke<bool>(0x0290F35C0AD97864, p0); }
static void SET_CAM_ACTIVE_WITH_INTERP(int camTo, int camFrom, int duration, int easeLocation, int easeRotation) { invoke<void *>(0x9FBDA379383A52A4, camTo, camFrom, duration, easeLocation, easeRotation); }
static bool IS_CAM_INTERPOLATING(int cam) { return invoke<bool>(0x036F97C908C2B52C, cam); }
static void SHAKE_CAM(int cam, char *type, float amplitude) { invoke<void *>(0x6A25241C340D3822, cam, type, amplitude); }
static void ANIMATED_SHAKE_CAM(int cam, char *p1, char *p2, char *p3, float amplitude) { invoke<void *>(0xA2746EEAE3E577CD, cam, p1, p2, p3, amplitude); }
static bool IS_CAM_SHAKING(int cam) { return invoke<bool>(0x6B24BFE83A2BE47B, cam); }
static void SET_CAM_SHAKE_AMPLITUDE(int cam, float amplitude) { invoke<void *>(0xD93DB43B82BC0D00, cam, amplitude); }
static void STOP_CAM_SHAKING(int cam, bool p1) { invoke<void *>(0xBDECF64367884AC3, cam, p1); }
static void _0xF4C8CF9E353AFECA(char *p0, float p1) { invoke<void *>(0xF4C8CF9E353AFECA, p0, p1); }
static void _0xC2EAE3FB8CDBED31(char *p0, char *p1, char *p2, float p3) { invoke<void *>(0xC2EAE3FB8CDBED31, p0, p1, p2, p3); }
static bool IS_SCRIPT_GLOBAL_SHAKING() { return invoke<bool>(0xC912AF078AF19212); }
static void STOP_SCRIPT_GLOBAL_SHAKING(bool p0) { invoke<void *>(0x1C9D7949FA533490, p0); }
static bool PLAY_CAM_ANIM(int cam, char *animName, char *animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, bool p9, int p10) { return invoke<bool>(0x9A2D0FB2E7852392, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
static bool IS_CAM_PLAYING_ANIM(int cam, char *animName, char *animDictionary) { return invoke<bool>(0xC90621D8A0CEECF2, cam, animName, animDictionary); }
static void SET_CAM_ANIM_CURRENT_PHASE(int cam, float phase) { invoke<void *>(0x4145A4C44FF3B5A6, cam, phase); }
static float GET_CAM_ANIM_CURRENT_PHASE(int cam) { return invoke<float>(0xA10B2DB49E92A6B0, cam); }
static bool PLAY_SYNCHRONIZED_CAM_ANIM(int p0, int p1, char *animName, char *animDictionary) { return invoke<bool>(0xE32EFE9AB4A9AA0C, p0, p1, animName, animDictionary); }
static void _0x503F5920162365B2(int p0, float p1, float p2, float p3) { invoke<void *>(0x503F5920162365B2, p0, p1, p2, p3); }
static void _SET_CAMERA_RANGE(int cam, float range) { invoke<void *>(0xF9D02130ECDD1D77, cam, range); }
static void _0xC91C6C55199308CA(int p0, float p1, float p2, float p3) { invoke<void *>(0xC91C6C55199308CA, p0, p1, p2, p3); }
static void _0xC8B5C4A79CC18B94(int p0) { invoke<void *>(0xC8B5C4A79CC18B94, p0); }
static bool _0x5C48A1D6E3B33179(int p0) { return invoke<bool>(0x5C48A1D6E3B33179, p0); }
static bool IS_SCREEN_FADED_OUT() { return invoke<bool>(0xB16FCE9DDC7BA182); }
static bool IS_SCREEN_FADED_IN() { return invoke<bool>(0x5A859503B0C08678); }
static bool IS_SCREEN_FADING_OUT() { return invoke<bool>(0x797AC7CB535BA28F); }
static bool IS_SCREEN_FADING_IN() { return invoke<bool>(0x5C544BC6C57AC575); }
static void DO_SCREEN_FADE_IN(int duration) { invoke<void *>(0xD4E8E24955024033, duration); }
static void DO_SCREEN_FADE_OUT(int duration) { invoke<void *>(0x891B5B39AC6302AF, duration); }
static void SET_WIDESCREEN_BORDERS(bool p0, int p1) { invoke<void *>(0xDCD4EA924F42D01A, p0, p1); }
static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x14D6F5678D8F1B37); }
static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x837765A25378F0BB, rotationOrder); }
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x65019750A0324133); }
static void CUSTOM_MENU_COORDINATES(float p0) { invoke<void *>(0x487A82C650EB7799, p0); }
static void _0x0225778816FDC28C(float p0) { invoke<void *>(0x0225778816FDC28C, p0); }
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x743607648ADD4587); }
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<void *>(0xB4EC2312F4E5B1F1, heading); }
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0x3A6867B4845BEDA2); }
static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<void *>(0x6D0858B8EDFD2B7D, x, Value2); }
static void SHAKE_GAMEPLAY_CAM(char *shakeName, float intensity) { invoke<void *>(0xFD55E49555E017CF, shakeName, intensity); }
static bool IS_GAMEPLAY_CAM_SHAKING() { return invoke<bool>(0x016C090630DF1F89); }
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<void *>(0xA87E00932DB4D85D, amplitude); }
static void STOP_GAMEPLAY_CAM_SHAKING(bool p0) { invoke<void *>(0x0EF93E9F3D08C178, p0); }
static void _0x8BBACBF51DA047A8(int p0) { invoke<void *>(0x8BBACBF51DA047A8, p0); }
static bool IS_GAMEPLAY_CAM_RENDERING() { return invoke<bool>(0x39B5D1B10383F0C8); }
static bool _0x3044240D2E0FA842() { return invoke<bool>(0x3044240D2E0FA842); }
static bool _0x705A276EBFF3133D() { return invoke<bool>(0x705A276EBFF3133D); }
static void _0xDB90C6CCA48940F1(bool p0) { invoke<void *>(0xDB90C6CCA48940F1, p0); }
static void _ENABLE_CROSSHAIR_THIS_FRAME() { invoke<void *>(0xEA7F0AD7E9BA676F); }
static bool IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<bool>(0x70FDA869F3317EA9); }
static void _0x2AED6301F67007D5(int entity) { invoke<void *>(0x2AED6301F67007D5, entity); }
static void _0x49482F9FCD825AAA(int entity) { invoke<void *>(0x49482F9FCD825AAA, entity); }
static void _0xDD79DF9F4D26E1C9() { invoke<void *>(0xDD79DF9F4D26E1C9); }
static bool IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<bool>(0xE33D59DA70B58FDF, x, y, z, radius); }
static bool IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<bool>(0xC6D3D26810C8E0F9); }
static bool SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(char *p0, int p1) { return invoke<bool>(0x44A113DD6FFC48D1, p0, p1); }
static void _0x271401846BD26E92(bool p0, bool p1) { invoke<void *>(0x271401846BD26E92, p0, p1); }
static void _0xC8391C309684595A() { invoke<void *>(0xC8391C309684595A); }
static void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<void *>(0x8F993D26E0CA5E8E, minimum, maximum); }
static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<void *>(0xA516C198B7DCA1E1, minimum, maximum); }
static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) { invoke<void *>(0xDF2E1F7742402E81, p0, distance); }
static void _0xE9EA16D6E54CDCA4(int p0, int p1) { invoke<void *>(0xE9EA16D6E54CDCA4, p0, p1); }
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0x33E6C8EFD0CD93E9); }
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0x8D4D46230B2C353A); }
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<void *>(0x5A4F9EDF1673F704, viewMode); }
static bool IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<bool>(0xCBBDE6D335D6D496); }
static void _0x91EF6EE6419E5B97(bool p0) { invoke<void *>(0x91EF6EE6419E5B97, p0); }
static void SET_TIME_IDLE_DROP(bool p0, bool p1) { invoke<void *>(0x9DFE13ECDC1EC196, p0, p1); }
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xEE82280AB767B690); }
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<void *>(0x19464CB6E4078C8A, zoomLevel); }
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xA4FF579AC0E3AAAE); }
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<void *>(0xAC253D7842768F48, viewMode); }
static int _0xEE778F8C7E1142E2(int p0) { return invoke<int>(0xEE778F8C7E1142E2, p0); }
static void _0x2A2173E46DAECD12(int p0, int p1) { invoke<void *>(0x2A2173E46DAECD12, p0, p1); }
static bool IS_AIM_CAM_ACTIVE() { return invoke<bool>(0x68EDDA28A5976D07); }
static bool _0x74BD83EA840F6BC9() { return invoke<bool>(0x74BD83EA840F6BC9); }
static bool IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<bool>(0x5E346D934122613F); }
static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<void *>(0x1A31FE0049E542F6); }
static float _GET_GAMEPLAY_CAM_ZOOM() { return invoke<float>(0x7EC52CC40597D170); }
static void _0x70894BD0915C5BCA(float p0) { invoke<void *>(0x70894BD0915C5BCA, p0); }
static void _0xCED08CBE8EBB97C7(float p0, float p1) { invoke<void *>(0xCED08CBE8EBB97C7, p0, p1); }
static void _0x2F7F2B26DD3F18EE(float p0, float p1) { invoke<void *>(0x2F7F2B26DD3F18EE, p0, p1); }
static void _0xBCFC632DB7673BF0(float p0, float p1) { invoke<void *>(0xBCFC632DB7673BF0, p0, p1); }
static void _0x0AF7B437918103B3(float p0) { invoke<void *>(0x0AF7B437918103B3, p0); }
static void _0x42156508606DE65E(float p0) { invoke<void *>(0x42156508606DE65E, p0); }
static void _0x4008EDF7D6E48175(bool p0) { invoke<void *>(0x4008EDF7D6E48175, p0); }
static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return invoke<Vector3>(0xA200EB1EE790F448); }
static Vector3 _GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x5B4E4C817FCC2DFB, rotationOrder); }
static Vector3 _0x26903D9CD1175F2C(int p0, int p1) { return invoke<Vector3>(0x26903D9CD1175F2C, p0, p1); }
static float _0x80EC114669DAEFF4() { return invoke<float>(0x80EC114669DAEFF4); }
static float _0x5F35F6732C3FBBA0(int p0) { return invoke<float>(0x5F35F6732C3FBBA0, p0); }
static float _0xD0082607100D7193() { return invoke<float>(0xD0082607100D7193); }
static float _0xDFC8CBC606FDB0FC() { return invoke<float>(0xDFC8CBC606FDB0FC); }
static float _0xA03502FC581F7D9B() { return invoke<float>(0xA03502FC581F7D9B); }
static float _0x9780F32BCAF72431() { return invoke<float>(0x9780F32BCAF72431); }
static float _0x162F9D995753DC19() { return invoke<float>(0x162F9D995753DC19); }
static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) { invoke<void *>(0xD51ADCD2D8BC0FB3, x, y, z, duration, blendOutDuration, blendInDuration, unk); }
static void SET_GAMEPLAY_PED_HINT(int p0, float x1, float y1, float z1, bool p4, int p5, int p6, int p7) { invoke<void *>(0x2B486269ACD548D3, p0, x1, y1, z1, p4, p5, p6, p7); }
static void SET_GAMEPLAY_VEHICLE_HINT(int p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7) { invoke<void *>(0xA2297E18F3E71C2E, p0, p1, p2, p3, p4, p5, p6, p7); }
static void SET_GAMEPLAY_OBJECT_HINT(int p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7) { invoke<void *>(0x83E87508A2CA2AC6, p0, p1, p2, p3, p4, p5, p6, p7); }
static void SET_GAMEPLAY_ENTITY_HINT(int entity, float xOffset, float yOffset, float zOffset, bool p4, int p5, int p6, int p7, int p8) { invoke<void *>(0x189E955A8313E298, entity, xOffset, yOffset, zOffset, p4, p5, p6, p7, p8); }
static bool IS_GAMEPLAY_HINT_ACTIVE() { return invoke<bool>(0xE520FF1AD2785B40); }
static void STOP_GAMEPLAY_HINT(bool p0) { invoke<void *>(0xF46C581C61718916, p0); }
static void _0xCCD078C2665D2973(bool p0) { invoke<void *>(0xCCD078C2665D2973, p0); }
static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<void *>(0x513403FB9C56211F, FOV); }
static void _0xF8BDBF3D573049A1(float p0) { invoke<void *>(0xF8BDBF3D573049A1, p0); }
static void _0xD1F8363DFAD03848(float p0) { invoke<void *>(0xD1F8363DFAD03848, p0); }
static void _0x5D7B620DAE436138(float p0) { invoke<void *>(0x5D7B620DAE436138, p0); }
static void _0xC92717EF615B6704(float p0) { invoke<void *>(0xC92717EF615B6704, p0); }
static void GET_IS_MULTIPLAYER_BRIEF(bool p0) { invoke<void *>(0xE3433EADAAF7EE40, p0); }
static void SET_CINEMATIC_BUTTON_ACTIVE(bool p0) { invoke<void *>(0x51669F7D1FB53D9F, p0); }
static bool IS_CINEMATIC_CAM_RENDERING() { return invoke<bool>(0xB15162CB5826E9E8); }
static void SHAKE_CINEMATIC_CAM(char *p0, float p1) { invoke<void *>(0xDCE214D9ED58F3CF, p0, p1); }
static bool IS_CINEMATIC_CAM_SHAKING() { return invoke<bool>(0xBBC08F6B4CB8FF0A); }
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<void *>(0xC724C701C30B2FE7, p0); }
static void STOP_CINEMATIC_CAM_SHAKING(bool p0) { invoke<void *>(0x2238E588E588A6D7, p0); }
static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<void *>(0xADFF1B2A555F5FBA); }
static void _0x62ECFCFDEE7885D6() { invoke<void *>(0x62ECFCFDEE7885D6); }
static void _0x9E4CFFF989258472() { invoke<void *>(0x9E4CFFF989258472); }
static void _0xF4F2C0D4EE209E20() { invoke<void *>(0xF4F2C0D4EE209E20); }
static bool _0xCA9D2AA3E326D720() { return invoke<bool>(0xCA9D2AA3E326D720); }
static void CREATE_CINEMATIC_SHOT(int p0, int p1, int p2, int entity) { invoke<void *>(0x741B0129D4560F31, p0, p1, p2, entity); }
static bool IS_CINEMATIC_SHOT_ACTIVE(int p0) { return invoke<bool>(0xCC9F3371A7C28BC9, p0); }
static void STOP_CINEMATIC_SHOT(int p0) { invoke<void *>(0x7660C6E75D3A078E, p0); }
static void _0xA41BCD7213805AAC(bool p0) { invoke<void *>(0xA41BCD7213805AAC, p0); }
static void _0xDC9DA9E8789F5246() { invoke<void *>(0xDC9DA9E8789F5246); }
static void SET_CINEMATIC_MODE_ACTIVE(bool p0) { invoke<void *>(0xDCF0754AC3D6FD4E, p0); }
static int _0x1F2300CB7FA7B7F6() { return invoke<int>(0x1F2300CB7FA7B7F6); }
static void STOP_CUTSCENE_CAM_SHAKING() { invoke<void *>(0xDB629FFD9285FA06); }
static void _0x12DED8CA53D47EA5(float p0) { invoke<void *>(0x12DED8CA53D47EA5, p0); }
static int _0x89215EC747DF244A(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<int>(0x89215EC747DF244A, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0x5A43C76F7FC7BA5F() { invoke<void *>(0x5A43C76F7FC7BA5F); }
static void _SET_CAM_EFFECT(int p0) { invoke<void *>(0x80C8B1846639BB19, p0); }
static void ENABLE_LASER_SIGHT_RENDERING(bool toggle) { invoke<void *>(0xC8B46D7727D864AA, toggle); }
static int GET_WEAPON_COMPONENT_TYPE_MODEL(int componentint) { return invoke<int>(0x0DB57B41EC1DB083, componentint); }
static int GET_WEAPONTYPE_MODEL(int weaponint) { return invoke<int>(0xF46CDC33180FDA94, weaponint); }
static int GET_WEAPONTYPE_SLOT(int weaponint) { return invoke<int>(0x4215460B9B8B7FA0, weaponint); }
static int GET_WEAPONTYPE_GROUP(int weaponint) { return invoke<int>(0xC3287EE3050FB74C, weaponint); }
static void SET_CURRENT_PED_WEAPON(int ped, int weaponint, bool equipNow) { invoke<void *>(0xADF692B254977C0C, ped, weaponint, equipNow); }
static bool GET_CURRENT_PED_WEAPON(int ped, int *weaponint, bool p2) { return invoke<bool>(0x3A87E44BB9A01D54, ped, weaponint, p2); }
static int GET_CURRENT_PED_WEAPON_ENTITY_INDEX(int ped) { return invoke<int>(0x3B390A939AF0B5FC, ped); }
static int GET_BEST_PED_WEAPON(int ped, bool p1) { return invoke<int>(0x8483E98E8B888AE2, ped, p1); }
static bool SET_CURRENT_PED_VEHICLE_WEAPON(int ped, int weaponint) { return invoke<bool>(0x75C55983C2C39DAA, ped, weaponint); }
static bool GET_CURRENT_PED_VEHICLE_WEAPON(int ped, int *weaponint) { return invoke<bool>(0x1017582BCD3832DC, ped, weaponint); }
static bool IS_PED_ARMED(int ped, int p1) { return invoke<bool>(0x475768A975D5AD17, ped, p1); }
static bool IS_WEAPON_VALID(int weaponint) { return invoke<bool>(0x937C71165CF334B3, weaponint); }
static bool HAS_PED_GOT_WEAPON(int ped, int weaponint, bool p2) { return invoke<bool>(0x8DECB02F88F428BC, ped, weaponint, p2); }
static bool IS_PED_WEAPON_READY_TO_SHOOT(int ped) { return invoke<bool>(0xB80CA294F2F26749, ped); }
static int GET_PED_WEAPONTYPE_IN_SLOT(int ped, int weaponSlot) { return invoke<int>(0xEFFED78E9011134D, ped, weaponSlot); }
static int GET_AMMO_IN_PED_WEAPON(int ped, int weaponhash) { return invoke<int>(0x015A522136D7F951, ped, weaponhash); }
static void ADD_AMMO_TO_PED(int ped, int weaponint, int ammo) { invoke<void *>(0x78F0424C34306220, ped, weaponint, ammo); }
static void SET_PED_AMMO(int ped, int weaponint, int ammo) { invoke<void *>(0x14E56BC5B5DB6A19, ped, weaponint, ammo); }
static void SET_PED_INFINITE_AMMO(int ped, bool toggle, int weaponint) { invoke<void *>(0x3EDCB0505123623B, ped, toggle, weaponint); }
static void SET_PED_INFINITE_AMMO_CLIP(int ped, bool toggle) { invoke<void *>(0x183DADC6AA953186, ped, toggle); }
static void GIVE_WEAPON_TO_PED(int ped, int weaponint, int ammoCount, bool isHidden, bool equipNow) { invoke<void *>(0xBF0FD6E56C964FCB, ped, weaponint, ammoCount, isHidden, equipNow); }
static void GIVE_DELAYED_WEAPON_TO_PED(int ped, int weaponint, int ammoCount, bool equipNow) { invoke<void *>(0xB282DC6EBD803C75, ped, weaponint, ammoCount, equipNow); }
static void REMOVE_ALL_PED_WEAPONS(int ped, bool p1) { invoke<void *>(0xF25DF915FA38C5F3, ped, p1); }
static void REMOVE_WEAPON_FROM_PED(int ped, int weaponint) { invoke<void *>(0x4899CB088EDF59B8, ped, weaponint); }
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(int ped, bool toggle) { invoke<void *>(0x6F6981D2253C208F, ped, toggle); }
static void SET_PED_CURRENT_WEAPON_VISIBLE(int ped, bool visible, bool deselectWeapon, bool p3, bool p4) { invoke<void *>(0x0725A4CCFDED9A70, ped, visible, deselectWeapon, p3, p4); }
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(int ped, bool toggle) { invoke<void *>(0x476AE72C1D19D1A8, ped, toggle); }
static bool HAS_PED_BEEN_DAMAGED_BY_WEAPON(int ped, int weaponint, int weaponType) { return invoke<bool>(0x2D343D2219CD027A, ped, weaponint, weaponType); }
static void CLEAR_PED_LAST_WEAPON_DAMAGE(int ped) { invoke<void *>(0x0E98F88A24C5F4B8, ped); }
static bool HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(int entity, int weaponint, int weaponType) { return invoke<bool>(0x131D401334815E94, entity, weaponint, weaponType); }
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(int entity) { invoke<void *>(0xAC678E40BE7C74D2, entity); }
static void SET_PED_DROPS_WEAPON(int ped) { invoke<void *>(0x6B7513D9966FBEC0, ped); }
static void SET_PED_DROPS_INVENTORY_WEAPON(int ped, int weaponint, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<void *>(0x208A1888007FC0E6, ped, weaponint, xOffset, yOffset, zOffset, ammoCount); }
static int GET_MAX_AMMO_IN_CLIP(int ped, int weaponint, bool p2) { return invoke<int>(0xA38DCFFCEA8962FA, ped, weaponint, p2); }
static bool GET_AMMO_IN_CLIP(int ped, int weaponint, int *ammo) { return invoke<bool>(0x2E1202248937775C, ped, weaponint, ammo); }
static bool SET_AMMO_IN_CLIP(int ped, int weaponint, int ammo) { return invoke<bool>(0xDCD2A934D65CB497, ped, weaponint, ammo); }
static bool GET_MAX_AMMO(int ped, int weaponint, int *ammo) { return invoke<bool>(0xDC16122C7A20C933, ped, weaponint, ammo); }
static void SET_PED_AMMO_BY_TYPE(int ped, int ammoType, int ammo) { invoke<void *>(0x5FD1E1F011E76D7E, ped, ammoType, ammo); }
static int GET_PED_AMMO_BY_TYPE(int ped, int ammoType) { return invoke<int>(0x39D22031557946C1, ped, ammoType); }
static void SET_PED_AMMO_TO_DROP(int p0, int p1) { invoke<void *>(0xA4EFEF9440A5B0EF, p0, p1); }
static void _0xE620FD3512A04F18(float p0) { invoke<void *>(0xE620FD3512A04F18, p0); }
static int GET_PED_AMMO_TYPE_FROM_WEAPON(int ped, int weaponint) { return invoke<int>(0x7FEAD38B326B9F74, ped, weaponint); }
static bool GET_PED_LAST_WEAPON_IMPACT_COORD(int ped, Vector3 *coords) { return invoke<bool>(0x6C4D0409BA1A2BC2, ped, coords); }
static void SET_PED_GADGET(int ped, int gadgetint, bool p2) { invoke<void *>(0xD0D7B1E680ED4A1A, ped, gadgetint, p2); }
static bool GET_IS_PED_GADGET_EQUIPPED(int ped, int gadgetint) { return invoke<bool>(0xF731332072F5156C, ped, gadgetint); }
static int GET_SELECTED_PED_WEAPON(int ped) { return invoke<int>(0x0A6DB4965674D243, ped); }
static void EXPLODE_PROJECTILES(int ped, int weaponint, bool p2) { invoke<void *>(0xFC4BD125DE7611E4, ped, weaponint, p2); }
static void REMOVE_ALL_PROJECTILES_OF_TYPE(int weaponint, bool p1) { invoke<void *>(0xFC52E0F37E446528, weaponint, p1); }
static float _GET_LOCKON_RANGE_OF_CURRENT_PED_WEAPON(int ped) { return invoke<float>(0x840F03E9041E2C9C, ped); }
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(int ped) { return invoke<float>(0x814C9D19DFD69679, ped); }
static bool HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(int driver, int vehicle, int weaponint, int p3) { return invoke<bool>(0x717C8481234E3B88, driver, vehicle, weaponint, p3); }
static void GIVE_WEAPON_COMPONENT_TO_PED(int ped, int weaponint, int componentint) { invoke<void *>(0xD966D51AA5B28BB9, ped, weaponint, componentint); }
static void REMOVE_WEAPON_COMPONENT_FROM_PED(int ped, int weaponint, int componentint) { invoke<void *>(0x1E8BE90C74FB4C09, ped, weaponint, componentint); }
static bool HAS_PED_GOT_WEAPON_COMPONENT(int ped, int weaponint, int componentint) { return invoke<bool>(0xC593212475FAE340, ped, weaponint, componentint); }
static bool IS_PED_WEAPON_COMPONENT_ACTIVE(int ped, int weaponint, int componentint) { return invoke<bool>(0x0D78DE0572D3969E, ped, weaponint, componentint); }
static bool _PED_SKIP_NEXT_RELOADING(int ped) { return invoke<bool>(0x8C0D57EA686FAD87, ped); }
static bool MAKE_PED_RELOAD(int ped) { return invoke<bool>(0x20AE33F3AC9C0033, ped); }
static void REQUEST_WEAPON_ASSET(int weaponint, int p1, int p2) { invoke<void *>(0x5443438F033E29C3, weaponint, p1, p2); }
static bool HAS_WEAPON_ASSET_LOADED(int weaponint) { return invoke<bool>(0x36E353271F0E90EE, weaponint); }
static void REMOVE_WEAPON_ASSET(int weaponint) { invoke<void *>(0xAA08EF13F341C8FC, weaponint); }
static int CREATE_WEAPON_OBJECT(int weaponint, int ammoCount, float x, float y, float z, bool showWorldModel, float heading, int p7) { return invoke<int>(0x9541D3CF0D398F36, weaponint, ammoCount, x, y, z, showWorldModel, heading, p7); }
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(int weaponint, int addonint) { invoke<void *>(0x33E179436C0B31DB, weaponint, addonint); }
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(int p0, int p1) { invoke<void *>(0xF7D82B0D66777611, p0, p1); }
static bool HAS_WEAPON_GOT_WEAPON_COMPONENT(int weapon, int addonint) { return invoke<bool>(0x76A18844E743BF91, weapon, addonint); }
static void GIVE_WEAPON_OBJECT_TO_PED(int weaponint, int ped) { invoke<void *>(0xB1FA61371AF7C4B7, weaponint, ped); }
static bool DOES_WEAPON_TAKE_WEAPON_COMPONENT(int weaponint, int componentint) { return invoke<bool>(0x5CEE3DF569CECAB0, weaponint, componentint); }
static int GET_WEAPON_OBJECT_FROM_PED(int ped, bool p1) { return invoke<int>(0xCAE1DC9A0E22A16D, ped, p1); }
static void SET_PED_WEAPON_TINT_INDEX(int ped, int weaponint, int tintIndex) { invoke<void *>(0x50969B9B89ED5738, ped, weaponint, tintIndex); }
static int GET_PED_WEAPON_TINT_INDEX(int ped, int weaponint) { return invoke<int>(0x2B9EEDC07BD06B9F, ped, weaponint); }
static void SET_WEAPON_OBJECT_TINT_INDEX(int weapon, int tintIndex) { invoke<void *>(0xF827589017D4E4A9, weapon, tintIndex); }
static int GET_WEAPON_OBJECT_TINT_INDEX(int weapon) { return invoke<int>(0xCD183314F7CD2E57, weapon); }
static int GET_WEAPON_TINT_COUNT(int weaponint) { return invoke<int>(0x5DCF6C5CAB2E9BF7, weaponint); }
static bool GET_WEAPON_HUD_STATS(int weaponint, int *outData) { return invoke<bool>(0xD92C739EE34C9EBA, weaponint, outData); }
static bool GET_WEAPON_COMPONENT_HUD_STATS(int componentint, int *outData) { return invoke<bool>(0xB3CAF387AE12E9F8, componentint, outData); }
static int GET_WEAPON_CLIP_SIZE(int weaponint) { return invoke<int>(0x583BE370B1EC6EB4, weaponint); }
static void SET_PED_CHANCE_OF_FIRING_BLANKS(int ped, float xBias, float yBias) { invoke<void *>(0x8378627201D5497D, ped, xBias, yBias); }
static int _0xB4C8D77C80C0421E(int ped, float p1) { return invoke<int>(0xB4C8D77C80C0421E, ped, p1); }
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(int weaponint) { invoke<void *>(0x48164DBB970AC3F0, weaponint); }
static bool IS_PED_CURRENT_WEAPON_SILENCED(int ped) { return invoke<bool>(0x65F0C5AE05943EC7, ped); }
static bool SET_WEAPON_SMOKEGRENADE_ASSIGNED(int ped) { return invoke<bool>(0x4B7620C47217126C, ped); }
static int SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<int>(0xCEA66DAD478CD39B, distance); }
static void SET_WEAPON_ANIMATION_OVERRIDE(int ped, int animStyle) { invoke<void *>(0x1055AC3A667F09D9, ped, animStyle); }
static int GET_WEAPON_DAMAGE_TYPE(int weaponint) { return invoke<int>(0x3BE0BB12D25FB305, weaponint); }
static void _0xE4DCEC7FD5B739A5(int ped) { invoke<void *>(0xE4DCEC7FD5B739A5, ped); }
static bool CAN_USE_WEAPON_ON_PARACHUTE(int weaponint) { return invoke<bool>(0xBC7BE5ABC0879F74, weaponint); }
static int CREATE_ITEMSET(Vector3 *distri) { return invoke<int>(0x35AD299F50D91B24, distri); }
static void DESTROY_ITEMSET(int p0) { invoke<void *>(0xDE18220B1C183EDA, p0); }
static bool IS_ITEMSET_VALID(int p0) { return invoke<bool>(0xB1B1EA596344DFAB, p0); }
static bool ADD_TO_ITEMSET(int p0, int p1) { return invoke<bool>(0xE3945201F14637DD, p0, p1); }
static void REMOVE_FROM_ITEMSET(int p0, int p1) { invoke<void *>(0x25E68244B0177686, p0, p1); }
static int GET_ITEMSET_SIZE(int p0) { return invoke<int>(0xD9127E83ABF7C631, p0); }
static int GET_INDEXED_ITEM_IN_ITEMSET(int p0, int p1) { return invoke<int>(0x7A197E2521EE2BAB, p0, p1); }
static bool IS_IN_ITEMSET(int p0, int p1) { return invoke<bool>(0x2D0FC594D1E9C107, p0, p1); }
static void CLEAN_ITEMSET(int p0) { invoke<void *>(0x41BC0D722FC04221, p0); }
static void LOAD_ALL_OBJECTS_NOW() { invoke<void *>(0xBD6E84632DD4CB3F); }
static void LOAD_SCENE(float x, float y, float z) { invoke<void *>(0x4448EB75B4904BDB, x, y, z); }
static int NETWORK_UPDATE_LOAD_SCENE() { return invoke<int>(0xC4582015556D1C46); }
static void NETWORK_STOP_LOAD_SCENE() { invoke<void *>(0x64E630FAF5F60F44); }
static bool IS_NETWORK_LOADING_SCENE() { return invoke<bool>(0x41CA5A33160EA4AB); }
static void SET_INTERIOR_ACTIVE(int interiorID, bool toggle) { invoke<void *>(0xE37B76C387BE28ED, interiorID, toggle); }
static void REQUEST_MODEL(int model) { invoke<void *>(0x963D27A58DF860AC, model); }
static void REQUEST_MENU_PED_MODEL(int model) { invoke<void *>(0xA0261AEF7ACFC51E, model); }
static bool HAS_MODEL_LOADED(int model) { return invoke<bool>(0x98A4EB5D89A0C952, model); }
static void _REQUEST_INTERIOR_ROOM_BY_NAME(int interiorID, char *roomName) { invoke<void *>(0x8A7A40100EDFEC58, interiorID, roomName); }
static void SET_MODEL_AS_NO_LONGER_NEEDED(int model) { invoke<void *>(0xE532F5D78798DAAB, model); }
static bool IS_MODEL_IN_CDIMAGE(int model) { return invoke<bool>(0x35B9E0803292B641, model); }
static bool IS_MODEL_VALID(int model) { return invoke<bool>(0xC0296A2EDF545E92, model); }
static bool IS_MODEL_A_VEHICLE(int model) { return invoke<bool>(0x19AAC8F07BFEC53E, model); }
static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<void *>(0x07503F7948F491A7, x, y, z); }
static void REQUEST_COLLISION_FOR_MODEL(int model) { invoke<void *>(0x923CB32A3B874FCB, model); }
static bool HAS_COLLISION_FOR_MODEL_LOADED(int model) { return invoke<bool>(0x22CCA434E368F03A, model); }
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<void *>(0xC9156DC11411A9EA, x, y, z); }
static bool DOES_ANIM_DICT_EXIST(char *animDict) { return invoke<bool>(0x2DA49C3B79856961, animDict); }
static void REQUEST_ANIM_DICT(char *animDict) { invoke<void *>(0xD3BD40951412FEF6, animDict); }
static bool HAS_ANIM_DICT_LOADED(char *animDict) { return invoke<bool>(0xD031A9162D01088C, animDict); }
static void REMOVE_ANIM_DICT(char *animDict) { invoke<void *>(0xF66A602F829E2A06, animDict); }
static void REQUEST_ANIM_SET(char *animSet) { invoke<void *>(0x6EA47DAE7FAD0EED, animSet); }
static bool HAS_ANIM_SET_LOADED(char *animSet) { return invoke<bool>(0xC4EA073D86FB29B0, animSet); }
static void REMOVE_ANIM_SET(char *animSet) { invoke<void *>(0x16350528F93024B3, animSet); }
static void REQUEST_CLIP_SET(char *clipSet) { invoke<void *>(0xD2A71E1A77418A49, clipSet); }
static bool HAS_CLIP_SET_LOADED(char *clipSet) { return invoke<bool>(0x318234F4F3738AF3, clipSet); }
static void REMOVE_CLIP_SET(char *clipSet) { invoke<void *>(0x01F73A131C18CD94, clipSet); }
static void REQUEST_IPL(char *iplName) { invoke<void *>(0x41B4893843BBDB74, iplName); }
static void REMOVE_IPL(char *iplName) { invoke<void *>(0xEE6C5AD3ECE0A82D, iplName); }
static bool IS_IPL_ACTIVE(char *iplName) { return invoke<bool>(0x88A741E44A2B3495, iplName); }
static void SET_STREAMING(bool toggle) { invoke<void *>(0x6E0C692677008888, toggle); }
static void SET_GAME_PAUSES_FOR_STREAMING(bool toggle) { invoke<void *>(0x717CD6E6FAEBBEDC, toggle); }
static void SET_REDUCE_PED_MODEL_BUDGET(bool toggle) { invoke<void *>(0x77B5F9A36BF96710, toggle); }
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(bool toggle) { invoke<void *>(0x80C527893080CCF3, toggle); }
static void SET_DITCH_POLICE_MODELS(bool toggle) { invoke<void *>(0x42CBE54462D92634, toggle); }
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x4060057271CEBC89); }
static void REQUEST_PTFX_ASSET() { invoke<void *>(0x944955FB2A3935C8); }
static bool HAS_PTFX_ASSET_LOADED() { return invoke<bool>(0xCA7D9B86ECA7481B); }
static void REMOVE_PTFX_ASSET() { invoke<void *>(0x88C6814073DD4A73); }
static void REQUEST_NAMED_PTFX_ASSET(char *fxName) { invoke<void *>(0xB80D8756B4668AB6, fxName); }
static bool HAS_NAMED_PTFX_ASSET_LOADED(char *fxName) { return invoke<bool>(0x8702416E512EC454, fxName); }
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<void *>(0xCB9E1EB3BE2AF4E9, p0); }
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<void *>(0x8C95333CFC3340F3, p0); }
static void CLEAR_FOCUS() { invoke<void *>(0x31B73D1EA9F01DA2); }
static void _SET_FOCUS_AREA(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<void *>(0xBB7454BAFF08FE25, x, y, z, offsetX, offsetY, offsetZ); }
static void SET_FOCUS_ENTITY(int entity) { invoke<void *>(0x198F77705FA0931D, entity); }
static bool IS_ENTITY_FOCUS(int entity) { return invoke<bool>(0x2DDFF3FB9075D747, entity); }
static void _0xAF12610C644A35C9(char *p0, bool p1) { invoke<void *>(0xAF12610C644A35C9, p0, p1); }
static void _0x4E52E752C76E7E7A(int p0) { invoke<void *>(0x4E52E752C76E7E7A, p0); }
static int FORMAT_FOCUS_HEADING(float x, float y, float z, float rad, int p4, int p5) { return invoke<int>(0x219C7B8D53E429FD, x, y, z, rad, p4, p5); }
static int _0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<int>(0x1F3F018BC3AFA77C, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static int _0x0AD9710CEE2F590F(float p0, float p1, float p2, float p3, float p4, float p5, int p6) { return invoke<int>(0x0AD9710CEE2F590F, p0, p1, p2, p3, p4, p5, p6); }
static void _0x1EE7D8DF4425F053(int p0) { invoke<void *>(0x1EE7D8DF4425F053, p0); }
static int _0x7D41E9D2D17C5B2D(int p0) { return invoke<int>(0x7D41E9D2D17C5B2D, p0); }
static int _0x07C313F94746702C(int p0) { return invoke<int>(0x07C313F94746702C, p0); }
static int _0xBC9823AB80A3DCAC() { return invoke<int>(0xBC9823AB80A3DCAC); }
static bool NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7) { return invoke<bool>(0x212A8D0D2BABFAC2, p0, p1, p2, p3, p4, p5, p6, p7); }
static bool NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, int p4) { return invoke<bool>(0xACCFB4ACF53551B0, x, y, z, radius, p4); }
static void NEW_LOAD_SCENE_STOP() { invoke<void *>(0xC197616D221FF4A4); }
static bool IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<bool>(0xA41A05B6CB741B85); }
static bool IS_NEW_LOAD_SCENE_LOADED() { return invoke<bool>(0x01B8247A7A8B9AD1); }
static int _0x71E7B2E657449AAD() { return invoke<int>(0x71E7B2E657449AAD); }
static void START_PLAYER_SWITCH(int from, int to, int flags, int switchType) { invoke<void *>(0xFAA23F2CBA159D67, from, to, flags, switchType); }
static void STOP_PLAYER_SWITCH() { invoke<void *>(0x95C0A5BBDC189AA1); }
static bool IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<bool>(0xD9D2CFFF49FAB35F); }
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xB3C94A90D9FC9E62); }
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xB5D7B26B45720E05, x1, y1, z1, x2, y2, z2); }
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x470555300D10B2A5); }
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x20F898A5D9782800); }
static void _0x5F2013F8BC24EE69(int p0) { invoke<void *>(0x5F2013F8BC24EE69, p0); }
static int _0x78C0D93253149435() { return invoke<int>(0x78C0D93253149435); }
static void SET_PLAYER_SWITCH_OUTRO(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8) { invoke<void *>(0xC208B673CE446B61, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0x0FDE9DBFC0A6BC65(int *p0) { invoke<void *>(0x0FDE9DBFC0A6BC65, p0); }
static void _0x43D1680C6D19A8E9() { invoke<void *>(0x43D1680C6D19A8E9); }
static void _0x74DE2E8739086740() { invoke<void *>(0x74DE2E8739086740); }
static void _0x8E2A065ABDAE6994() { invoke<void *>(0x8E2A065ABDAE6994); }
static void _0xAD5FDF34B81BFE79() { invoke<void *>(0xAD5FDF34B81BFE79); }
static int _0xDFA80CB25D0A19B3() { return invoke<int>(0xDFA80CB25D0A19B3); }
static void _SWITCH_OUT_PLAYER(int ped, int flags, int unknown) { invoke<void *>(0xAAB3200ED59016BC, ped, flags, unknown); }
static void _0xD8295AF639FD9CB8(int p0) { invoke<void *>(0xD8295AF639FD9CB8, p0); }
static int _0x933BBEEB8C61B5F4() { return invoke<int>(0x933BBEEB8C61B5F4); }
static int SET_PLAYER_INVERTED_UP() { return invoke<int>(0x08C2D6C52A3104BB); }
static int _0x5B48A06DD0E792A5() { return invoke<int>(0x5B48A06DD0E792A5); }
static int DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<int>(0x5B74EA8CFD5E3E7E); }
static int _0x0C15B0E443B2349D() { return invoke<int>(0x0C15B0E443B2349D); }
static void _0xA76359FC80B2438E(float p0) { invoke<void *>(0xA76359FC80B2438E, p0); }
static void _0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3) { invoke<void *>(0xBED8CA5FF5E04113, p0, p1, p2, p3); }
static void _0x472397322E92A856() { invoke<void *>(0x472397322E92A856); }
static void _0x40AEFD1A244741F2(bool p0) { invoke<void *>(0x40AEFD1A244741F2, p0); }
static void _0x95A7DABDDBB78AE7(int *p0, int *p1) { invoke<void *>(0x95A7DABDDBB78AE7, p0, p1); }
static void _0x63EB2B972A218CAC() { invoke<void *>(0x63EB2B972A218CAC); }
static int _0xFB199266061F820A() { return invoke<int>(0xFB199266061F820A); }
static void _0xF4A0DADB70F57FA6() { invoke<void *>(0xF4A0DADB70F57FA6); }
static int _0x5068F488DDB54DD8() { return invoke<int>(0x5068F488DDB54DD8); }
static void PREFETCH_SRL(char *srl) { invoke<void *>(0x3D245789CE12982C, srl); }
static bool IS_SRL_LOADED() { return invoke<bool>(0xD0263801A4C5B0BB); }
static void BEGIN_SRL() { invoke<void *>(0x9BADDC94EF83B823); }
static void END_SRL() { invoke<void *>(0x0A41540E63C9EE17); }
static void SET_SRL_TIME(float p0) { invoke<void *>(0xA74A541C6884E7B8, p0); }
static void _0xEF39EE20C537E98C(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0xEF39EE20C537E98C, p0, p1, p2, p3, p4, p5); }
static void _0xBEB2D9A1D9A8F55A(int p0, int p1, int p2, int p3) { invoke<void *>(0xBEB2D9A1D9A8F55A, p0, p1, p2, p3); }
static void _0x20C6C7E4EB082A7F(bool p0) { invoke<void *>(0x20C6C7E4EB082A7F, p0); }
static void _0xF8155A7F03DDFC8E(int p0) { invoke<void *>(0xF8155A7F03DDFC8E, p0); }
static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<void *>(0xB85F26619073E775, x, y, z, radius); }
static void CLEAR_HD_AREA() { invoke<void *>(0xCE58B1CFB9290813); }
static void _0xB5A4DB34FE89B88A() { invoke<void *>(0xB5A4DB34FE89B88A); }
static void SHUTDOWN_CREATOR_BUDGET() { invoke<void *>(0xCCE26000E9A6FAD7); }
static bool _0x0BC3144DEB678666(int modelint) { return invoke<bool>(0x0BC3144DEB678666, modelint); }
static void _0xF086AD9354FAC3A3(int p0) { invoke<void *>(0xF086AD9354FAC3A3, p0); }
static int _0x3D3D8B3BE5A83D35() { return invoke<int>(0x3D3D8B3BE5A83D35); }
static void REQUEST_SCRIPT(char *scriptName) { invoke<void *>(0x6EB5F71AA68F2E8E, scriptName); }
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char *scriptName) { invoke<void *>(0xC90D2DCACD56184C, scriptName); }
static bool HAS_SCRIPT_LOADED(char *scriptName) { return invoke<bool>(0xE6CC9F3BA0FB9EF1, scriptName); }
static bool DOES_SCRIPT_EXIST(char *scriptName) { return invoke<bool>(0xFC04745FBE67C19A, scriptName); }
static void REQUEST_SCRIPT_WITH_NAME_HASH(int scriptint) { invoke<void *>(0xD62A67D26D9653E6, scriptint); }
static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(int scriptint) { invoke<void *>(0xC5BC038960E9DB27, scriptint); }
static bool HAS_SCRIPT_WITH_NAME_HASH_LOADED(int scriptint) { return invoke<bool>(0x5F0F0C783EB16C04, scriptint); }
static void TERMINATE_THREAD(int threadId) { invoke<void *>(0xC8B189ED9138BCD4, threadId); }
static bool IS_THREAD_ACTIVE(int threadId) { return invoke<bool>(0x46E9AE36D8FA6417, threadId); }
static char *_GET_NAME_OF_THREAD(int threadId) { return invoke<char *>(0x05A42BA9FC8DA96B, threadId); }
static void _BEGIN_ENUMERATING_THREADS() { invoke<void *>(0xDADFADA5A20143A8); }
static int _GET_ID_OF_NEXT_THREAD_IN_ENUMERATION() { return invoke<int>(0x30B4FA1C82DD4B9F); }
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xC30338E8088E2E21); }
static void TERMINATE_THIS_THREAD() { invoke<void *>(0x1090044AD1DA76FA); }
static int _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(int scriptint) { return invoke<int>(0x2C83A9DA6BFFC4F9, scriptint); }
static char *GET_THIS_SCRIPT_NAME() { return invoke<char *>(0x442E0A7EDE4A738A); }
static int GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<int>(0x8A1C8B1738FFE87E); }
static int GET_NUMBER_OF_EVENTS(bool p0) { return invoke<int>(0x5F92A689A06620AA, p0); }
static bool GET_EVENT_EXISTS(bool p0, int p1) { return invoke<bool>(0x936E6168A9BCEDB5, p0, p1); }
static int GET_EVENT_AT_INDEX(bool p0, int eventNum) { return invoke<int>(0xD8F66A3A60C62153, p0, eventNum); }
static bool GET_EVENT_DATA(bool p0, int eventNum, int *argStruct, int argStructSize) { return invoke<bool>(0x2902843FCD2B2D79, p0, eventNum, argStruct, argStructSize); }
static void TRIGGER_SCRIPT_EVENT(bool p0, int *args, int argCount, int bit) { invoke<void *>(0x5AE99C571D5BBE5D, p0, args, argCount, bit); }
static void SHUTDOWN_LOADING_SCREEN() { invoke<void *>(0x078EBE9809CCD637); }
static void SET_NO_LOADING_SCREEN(bool toggle) { invoke<void *>(0x5262CC1995D07E09, toggle); }
static void _0xB1577667C3708F9B() { invoke<void *>(0xB1577667C3708F9B); }
static void _SET_LOADING_PROMPT_TEXT_ENTRY(char *string) { invoke<void *>(0xABA17D7CE615ADBF, string); }
static void _SHOW_LOADING_PROMPT(int busySpinnerType) { invoke<void *>(0xBD12F8228410D9B4, busySpinnerType); }
static void _REMOVE_LOADING_PROMPT() { invoke<void *>(0x10D373323E5B9C0D); }
static void _0xC65AB383CD91DF98() { invoke<void *>(0xC65AB383CD91DF98); }
static bool _IS_LOADING_PROMPT_BEING_DISPLAYED() { return invoke<bool>(0xD422FCC5F239A915); }
static void _0x6F1554B0CC2089FA(bool p0) { invoke<void *>(0x6F1554B0CC2089FA, p0); }
static void _CLEAR_NOTIFICATIONS_POS(float pos) { invoke<void *>(0x55598D21339CB998, pos); }
static void _0x25F87B30C382FCA7() { invoke<void *>(0x25F87B30C382FCA7); }
static void _0xA8FDB297A8D25FBA() { invoke<void *>(0xA8FDB297A8D25FBA); }
static void _REMOVE_NOTIFICATION(int notificationId) { invoke<void *>(0xBE4390CB40B3E627, notificationId); }
static void _0xA13C11E1B5C06BFC() { invoke<void *>(0xA13C11E1B5C06BFC); }
static void _0x583049884A2EEE3C() { invoke<void *>(0x583049884A2EEE3C); }
static void _0xFDB423997FA30340() { invoke<void *>(0xFDB423997FA30340); }
static void _0xE1CD1E48E025E661() { invoke<void *>(0xE1CD1E48E025E661); }
static int _0xA9CBFD40B3FA3010() { return invoke<int>(0xA9CBFD40B3FA3010); }
static void _0xD4438C0564490E63() { invoke<void *>(0xD4438C0564490E63); }
static void _0xB695E2CD0A2DA9EE() { invoke<void *>(0xB695E2CD0A2DA9EE); }
static int _GET_CURRENT_NOTIFICATION() { return invoke<int>(0x82352748437638CA); }
static void _0x56C8B608CFD49854() { invoke<void *>(0x56C8B608CFD49854); }
static void _0xADED7F5748ACAFE6() { invoke<void *>(0xADED7F5748ACAFE6); }
static void _SET_NOTIFICATION_FLASH_COLOR(int red, int green, int blue, int alpha) { invoke<void *>(0x17430B918701C342, red, green, blue, alpha); }
static void _0x17AD8C9706BDD88A(int p0) { invoke<void *>(0x17AD8C9706BDD88A, p0); }
static void _0x4A0C7C9BB10ABB36(bool p0) { invoke<void *>(0x4A0C7C9BB10ABB36, p0); }
static void _0xFDD85225B2DEA55E() { invoke<void *>(0xFDD85225B2DEA55E); }
static void _0xFDEC055AB549E328() { invoke<void *>(0xFDEC055AB549E328); }
static void _0x80FE4F3AB4E1B62A() { invoke<void *>(0x80FE4F3AB4E1B62A); }
static void _SET_NOTIFICATION_TEXT_ENTRY(char *type) { invoke<void *>(0x202709F4C58A0424, type); }
static int _SET_NOTIFICATION_MESSAGE(char *p0, int p1, int p2, int p3, bool p4, char *picName1, char *picName2) { return invoke<int>(0x2B7E9A4EAAA93C89, p0, p1, p2, p3, p4, picName1, picName2); }
static int _SET_NOTIFICATION_MESSAGE_2(char *picName1, char *picName2, bool flash, int iconType, char *sender, char *subject) { return invoke<int>(0x1CCD9A37359072CF, picName1, picName2, flash, iconType, sender, subject); }
static int _SET_NOTIFICATION_MESSAGE_4(char *picName1, char *picName2, bool flash, int iconType, char *sender, char *subject, float duration) { return invoke<int>(0x1E6611149DB3DB6B, picName1, picName2, flash, iconType, sender, subject, duration); }
static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG(char *picName1, char *picName2, bool flash, int iconType, char *sender, char *subject, float duration, char *clanTag) { return invoke<int>(0x5CBF7BADE20DB93E, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); }
static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(char *picName1, char *picName2, bool flash, int iconType1, char *sender, char *subject, float duration, char *clanTag, int iconType2, int p9) { return invoke<int>(0x531B84E7DA981FB6, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
static int _DRAW_NOTIFICATION(bool blink, bool p1) { return invoke<int>(0x2ED7843F8F801023, blink, p1); }
static int _DRAW_NOTIFICATION_2(bool blink, bool p1) { return invoke<int>(0x44FA03975424A0EE, blink, p1); }
static int _DRAW_NOTIFICATION_3(bool blink, bool p1) { return invoke<int>(0x378E809BF61EC840, blink, p1); }
static int _DRAW_NOTIFICATION_AWARD(char *p0, char *p1, int p2, int p3, char *p4) { return invoke<int>(0xAA295B6F28BD587D, p0, p1, p2, p3, p4); }
static int _DRAW_NOTIFICATION_APARTMENT_INVITE(bool p0, bool p1, int *p2, int p3, bool isLeader, bool unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0x97C9E4E7024A8F2C, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); }
static int _DRAW_NOTIFICATION_CLAN_INVITE(bool p0, bool p1, int *p2, int p3, bool isLeader, bool unk0, int clanDesc, char *playerName, int R, int G, int B) { return invoke<int>(0x137BC35589E34E1E, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); }
static int _0x33EE12743CCD6343(int p0, int p1, int p2) { return invoke<int>(0x33EE12743CCD6343, p0, p1, p2); }
static int _0xC8F3AAF93D0600BF(int p0, int p1, int p2, int p3) { return invoke<int>(0xC8F3AAF93D0600BF, p0, p1, p2, p3); }
static int _0x7AE0589093A2E088(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0x7AE0589093A2E088, p0, p1, p2, p3, p4, p5); }
static int _DRAW_NOTIFICATION_4(bool blink, bool p1) { return invoke<int>(0xF020C96915705B3A, blink, p1); }
static int _0xB6871B0555B02996(int *p0, int *p1, int p2, int *p3, int *p4, int p5) { return invoke<int>(0xB6871B0555B02996, p0, p1, p2, p3, p4, p5); }
static void BEGIN_TEXT_COMMAND_PRINT(char *GxtEntry) { invoke<void *>(0xB87A37EEB7FAA67D, GxtEntry); }
static void END_TEXT_COMMAND_PRINT(int duration, bool drawImmediately) { invoke<void *>(0x9D77056A530643F6, duration, drawImmediately); }
static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(char *text) { invoke<void *>(0x853648FD1063A213, text); }
static bool END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<bool>(0x8A9BA1AB3E237613); }
static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(char *text) { invoke<void *>(0x25FBB336DF1804CB, text); }
static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y) { invoke<void *>(0xCD015E5BB0D96A57, x, y); }
static void _BEGIN_TEXT_COMMAND_WIDTH(char *text) { invoke<void *>(0x54CE8AC98E120CAB, text); }
static float _END_TEXT_COMMAND_GET_WIDTH(int font) { return invoke<float>(0x85F061DA64ED2F67, font); }
static void _BEGIN_TEXT_COMMAND_LINE_COUNT(char *entry) { invoke<void *>(0x521FB041D93DD0E4, entry); }
static int _END_TEXT_COMMAND_GET_LINE_COUNT(float x, float y) { return invoke<int>(0x9040DFB09BE75706, x, y); }
static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(char *inputType) { invoke<void *>(0x8509B634FBE7DA11, inputType); }
static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, bool loop, bool beep, int shape) { invoke<void *>(0x238FFE5C7B0498A6, p0, loop, beep, shape); }
static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char *labelName) { invoke<void *>(0x0A24DA3A41B718F5, labelName); }
static bool END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<bool>(0x10BDDBFC529428DD, p0); }
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(char *gxtentry) { invoke<void *>(0xF9113A30DE5C6670, gxtentry); }
static void END_TEXT_COMMAND_SET_BLIP_NAME(int blip) { invoke<void *>(0xBC38B49BCB83BC9B, blip); }
static void _BEGIN_TEXT_COMMAND_OBJECTIVE(char *p0) { invoke<void *>(0x23D69E0465570028, p0); }
static void _END_TEXT_COMMAND_OBJECTIVE(bool p0) { invoke<void *>(0xCFDBDF5AE59BA0F4, p0); }
static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(char *text) { invoke<void *>(0xE124FA80A759019C, text); }
static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<void *>(0xFCC75460ABA29378); }
static void _BEGIN_TEXT_COMMAND_TIMER(char *p0) { invoke<void *>(0x8F9EE5687F8EECCD, p0); }
static void _END_TEXT_COMMAND_TIMER(bool p0) { invoke<void *>(0xA86911979638106F, p0); }
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<void *>(0x03B504CF259931BC, value); }
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<void *>(0xE7DCB5B874BCD96E, value, decimalPlaces); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(char *labelName) { invoke<void *>(0xC63CD5D2920ACBE7, labelName); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(int gxtEntryint) { invoke<void *>(0x17299B63C7683A2B, gxtEntryint); }
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(int blip) { invoke<void *>(0x80EAD8E2E1D5D52E, blip); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(char *text) { invoke<void *>(0x6C188BE134E074AA, text); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<void *>(0x1115F16B8AB9E8BF, timestamp, flags); }
static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, bool commaSeparated) { invoke<void *>(0x0E4C749FF9DE9CC4, value, commaSeparated); }
static void _ADD_TEXT_COMPONENT_APP_TITLE(char *p0, int p1) { invoke<void *>(0x761B77454205A61D, p0, p1); }
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(char *website) { invoke<void *>(0x94CF4AC034C9C986, website); }
static void _ADD_TEXT_COMPONENT_SCALEFORM(char *p0) { invoke<void *>(0x5F68520888E69014, p0); }
static void _SET_NOTIFICATION_COLOR_NEXT(int hudIndex) { invoke<void *>(0x39BBF623FC803EAC, hudIndex); }
static char *_GET_TEXT_SUBSTRING(char *text, int position, int length) { return invoke<char *>(0x169BD9382084C8C0, text, position, length); }
static char *_GET_TEXT_SUBSTRING_SAFE(char *text, int position, int length, int maxLength) { return invoke<char *>(0xB2798643312205C5, text, position, length, maxLength); }
static char *_GET_TEXT_SUBSTRING_SLICE(char *text, int startPosition, int endPosition) { return invoke<char *>(0xCE94AEBA5D82908A, text, startPosition, endPosition); }
static char *_GET_LABEL_TEXT(char *labelName) { return invoke<char *>(0x7B5280EBA9840C72, labelName); }
static void CLEAR_PRINTS() { invoke<void *>(0xCC33FA791322B9D9); }
static void CLEAR_BRIEF() { invoke<void *>(0x9D292F73ADBD9313); }
static void CLEAR_ALL_HELP_MESSAGES() { invoke<void *>(0x6178F68A87A4D3A0); }
static void CLEAR_THIS_PRINT(char *p0) { invoke<void *>(0xCF708001E1E536DD, p0); }
static void CLEAR_SMALL_PRINTS() { invoke<void *>(0x2CEA2839313C09AC); }
static bool DOES_TEXT_BLOCK_EXIST(char *gxt) { return invoke<bool>(0x1C7302E725259789, gxt); }
static void REQUEST_ADDITIONAL_TEXT(char *gxt, int slot) { invoke<void *>(0x71A78003C8E71424, gxt, slot); }
static void _REQUEST_ADDITIONAL_TEXT_2(char *gxt, int slot) { invoke<void *>(0x6009F9F1AE90D8A6, gxt, slot); }
static bool HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<bool>(0x02245FE4BED318B8, slot); }
static void CLEAR_ADDITIONAL_TEXT(int p0, bool p1) { invoke<void *>(0x2A179DF17CCF04CD, p0, p1); }
static bool IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<bool>(0x8B6817B71B85EBF0, p0); }
static bool HAS_THIS_ADDITIONAL_TEXT_LOADED(char *gxt, int slot) { return invoke<bool>(0xADBF060E2B30C5BC, gxt, slot); }
static bool IS_MESSAGE_BEING_DISPLAYED() { return invoke<bool>(0x7984C03AA5CC2F41); }
static bool DOES_TEXT_LABEL_EXIST(char *gxt) { return invoke<bool>(0xAC09CA973C564252, gxt); }
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char *gxt) { return invoke<int>(0x801BD273D3A23F74, gxt); }
static int GET_LENGTH_OF_LITERAL_STRING(char *string) { return invoke<int>(0xF030907CCBB8A9FD, string); }
static int _GET_LENGTH_OF_STRING(char *STRING) { return invoke<int>(0x43E4111189E54F0E, STRING); }
static char *GET_STREET_NAME_FROM_HASH_KEY(int hash) { return invoke<char *>(0xD0EF8A959B8A4CB9, hash); }
static bool IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<bool>(0x1930DFA731813EC4); }
static bool IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<bool>(0x9EB6522EA68F22FE); }
static bool IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<bool>(0xAD6DACA4BA53E0A4); }
static void DISPLAY_HUD(bool toggle) { invoke<void *>(0xA6294919E56FF02A, toggle); }
static void _0x7669F9E39DC17063() { invoke<void *>(0x7669F9E39DC17063); }
static void _0x402F9ED62087E898() { invoke<void *>(0x402F9ED62087E898); }
static void DISPLAY_RADAR(bool Toggle) { invoke<void *>(0xA0EBB943C300E693, Toggle); }
static bool IS_HUD_HIDDEN() { return invoke<bool>(0xA86478C6958735C5); }
static bool IS_RADAR_HIDDEN() { return invoke<bool>(0x157F93B036700462); }
static void SET_BLIP_ROUTE(int blip, bool enabled) { invoke<void *>(0x4F7D8A9BFB0B43E9, blip, enabled); }
static void SET_BLIP_ROUTE_COLOUR(int blip, int colour) { invoke<void *>(0x837155CD2F63DA09, blip, colour); }
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(bool p0) { invoke<void *>(0x60296AF4BA14ABC5, p0); }
static void _0x57D760D55F54E071(bool p0) { invoke<void *>(0x57D760D55F54E071, p0); }
static void RESPONDING_AS_TEMP(float p0) { invoke<void *>(0xBD12C5EEE184C337, p0); }
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<void *>(0x096EF57A0C999BBA, zoomLevel); }
static void _0xF98E4B3E56AFC7B1(int p0, float p1) { invoke<void *>(0xF98E4B3E56AFC7B1, p0, p1); }
static void _SET_RADAR_ZOOM_LEVEL_THIS_FRAME(float zoomLevel) { invoke<void *>(0xCB7CC0D58405AD41, zoomLevel); }
static void _0xD2049635DEB9C375() { invoke<void *>(0xD2049635DEB9C375); }
static void GET_HUD_COLOUR(int hudColorIndex, int *r, int *g, int *b, int *a) { invoke<void *>(0x7C9C91AB74A0360F, hudColorIndex, r, g, b, a); }
static void _0xD68A5FF8A3A89874(int r, int g, int b, int a) { invoke<void *>(0xD68A5FF8A3A89874, r, g, b, a); }
static void _0x16A304E6CB2BFAB9(int r, int g, int b, int a) { invoke<void *>(0x16A304E6CB2BFAB9, r, g, b, a); }
static void _SET_HUD_COLOURS_SWITCH(int hudColorIndex, int hudColorIndex2) { invoke<void *>(0x1CCC708F0F850613, hudColorIndex, hudColorIndex2); }
static void _SET_HUD_COLOUR(int hudColorIndex, int r, int g, int b, int a) { invoke<void *>(0xF314CF4F0211894E, hudColorIndex, r, g, b, a); }
static void FLASH_ABILITY_BAR(bool toggle) { invoke<void *>(0x02CFBA0C9E9275CE, toggle); }
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<void *>(0x9969599CCFF5D85E, p0, p1); }
static void FLASH_WANTED_DISPLAY(bool p0) { invoke<void *>(0xA18AFB39081B6A1F, p0); }
static float _GET_TEXT_SCALE_HEIGHT(float size, int font) { return invoke<float>(0xDB88A37483346780, size, font); }
static void SET_TEXT_SCALE(float scale, float size) { invoke<void *>(0x07C837F9A01C34C9, scale, size); }
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<void *>(0xBE6B23FFA53FB442, red, green, blue, alpha); }
static void SET_TEXT_CENTRE(bool align) { invoke<void *>(0xC02F4DBFB51D988B, align); }
static void SET_TEXT_RIGHT_JUSTIFY(bool toggle) { invoke<void *>(0x6B3C4650BC8BEE47, toggle); }
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<void *>(0x4E096588B13FFECA, justifyType); }
static void SET_TEXT_WRAP(float start, float end) { invoke<void *>(0x63145D9C883A1A70, start, end); }
static void SET_TEXT_LEADING(bool p0) { invoke<void *>(0xA50ABC31E3CDFAFF, p0); }
static void SET_TEXT_PROPORTIONAL(bool p0) { invoke<void *>(0x038C1F517D7FDCF8, p0); }
static void SET_TEXT_FONT(int fontType) { invoke<void *>(0x66E0276CC5F6B9DA, fontType); }
static void SET_TEXT_DROP_SHADOW() { invoke<void *>(0x1CA3E9EAC9D93E5E); }
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<void *>(0x465C84BC39F1C351, distance, r, g, b, a); }
static void SET_TEXT_OUTLINE() { invoke<void *>(0x2513DFB0FB8400FE); }
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<void *>(0x441603240D202FA6, p0, r, g, b, a); }
static void SET_TEXT_RENDER_ID(int renderId) { invoke<void *>(0x5F15302936E07111, renderId); }
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0x52F0982D7FD156B6); }
static bool REGISTER_NAMED_RENDERTARGET(char *p0, bool p1) { return invoke<bool>(0x57D9C12635E25CE3, p0, p1); }
static bool IS_NAMED_RENDERTARGET_REGISTERED(char *p0) { return invoke<bool>(0x78DCDC15C9F116B4, p0); }
static bool RELEASE_NAMED_RENDERTARGET(int *p0) { return invoke<bool>(0xE9F6FFE837354DD4, p0); }
static void LINK_NAMED_RENDERTARGET(int hash) { invoke<void *>(0xF6C09E276AEB3F2D, hash); }
static int GET_NAMED_RENDERTARGET_RENDER_ID(char *p0) { return invoke<int>(0x1A6478B61C6BDC3B, p0); }
static bool IS_NAMED_RENDERTARGET_LINKED(int hash) { return invoke<bool>(0x113750538FA31298, hash); }
static void CLEAR_HELP(bool toggle) { invoke<void *>(0x8DFCED7A656F8802, toggle); }
static bool IS_HELP_MESSAGE_ON_SCREEN() { return invoke<bool>(0xDAD37F45428801AE); }
static bool _0x214CD562A939246A() { return invoke<bool>(0x214CD562A939246A); }
static bool IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<bool>(0x4D79439A6B55AC67); }
static bool IS_HELP_MESSAGE_FADING_OUT() { return invoke<bool>(0x327EDEEEAC55C369); }
static bool _0x4A9923385BDB9DAD() { return invoke<bool>(0x4A9923385BDB9DAD); }
static int _GET_BLIP_INFO_ID_ITERATOR() { return invoke<int>(0x186E5D252FA50E7D); }
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0x9A3FF3DE163034E8); }
static int GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<int>(0x14F96AA50D6FBEA7, blipSprite); }
static int GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<int>(0x1BEDE233E6CD2A1F, blipSprite); }
static Vector3 GET_BLIP_INFO_ID_COORD(int blip) { return invoke<Vector3>(0xFA7C7F0AADF25D09, blip); }
static int GET_BLIP_INFO_ID_DISPLAY(int blip) { return invoke<int>(0x1E314167F701DC3B, blip); }
static int GET_BLIP_INFO_ID_TYPE(int blip) { return invoke<int>(0xBE9B0959FFD0779B, blip); }
static int GET_BLIP_INFO_ID_ENTITY_INDEX(int blip) { return invoke<int>(0x4BA4E2553AFEDC2C, blip); }
static int GET_BLIP_INFO_ID_PICKUP_INDEX(int blip) { return invoke<int>(0x9B6786E4C03DD382, blip); }
static int GET_BLIP_FROM_ENTITY(int entity) { return invoke<int>(0xBC8DBDCA2436F7E8, entity); }
static int ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<int>(0x46818D79B1F7499A, posX, posY, posZ, radius); }
static int ADD_BLIP_FOR_ENTITY(int entity) { return invoke<int>(0x5CDE92C702A8FCE7, entity); }
static int ADD_BLIP_FOR_PICKUP(int pickup) { return invoke<int>(0xBE339365C863BD36, pickup); }
static int ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<int>(0x5A039BB0BCA604B6, x, y, z); }
static void _0x72DD432F3CDFC0EE(float posX, float posY, float posZ, float radius, int p4) { invoke<void *>(0x72DD432F3CDFC0EE, posX, posY, posZ, radius, p4); }
static void _0x60734CC207C9833C(bool p0) { invoke<void *>(0x60734CC207C9833C, p0); }
static void SET_BLIP_COORDS(int blip, float posX, float posY, float posZ) { invoke<void *>(0xAE2AF67E9D9AF65D, blip, posX, posY, posZ); }
static Vector3 GET_BLIP_COORDS(int blip) { return invoke<Vector3>(0x586AFE3FF72D996E, blip); }
static void SET_BLIP_SPRITE(int blip, int spriteId) { invoke<void *>(0xDF735600A4696DAF, blip, spriteId); }
static int GET_BLIP_SPRITE(int blip) { return invoke<int>(0x1FC877464A04FC4F, blip); }
static void SET_BLIP_NAME_FROM_TEXT_FILE(int blip, char *gxtEntry) { invoke<void *>(0xEAA0FFE120D92784, blip, gxtEntry); }
static void SET_BLIP_NAME_TO_PLAYER_NAME(int blip, int player) { invoke<void *>(0x127DE7B20C60A6A3, blip, player); }
static void SET_BLIP_ALPHA(int blip, int alpha) { invoke<void *>(0x45FF974EEE1C8734, blip, alpha); }
static int GET_BLIP_ALPHA(int blip) { return invoke<int>(0x970F608F0EE6C885, blip); }
static void SET_BLIP_FADE(int blip, int opacity, int duration) { invoke<void *>(0x2AEE8F8390D2298C, blip, opacity, duration); }
static void SET_BLIP_ROTATION(int blip, int rotation) { invoke<void *>(0xF87683CDF73C3F6E, blip, rotation); }
static void SET_BLIP_FLASH_TIMER(int blip, int duration) { invoke<void *>(0xD3CD6FD297AE87CC, blip, duration); }
static void SET_BLIP_FLASH_INTERVAL(int blip, int p1) { invoke<void *>(0xAA51DB313C010A7E, blip, p1); }
static void SET_BLIP_COLOUR(int blip, int color) { invoke<void *>(0x03D7FB09E75D6B7E, blip, color); }
static void SET_BLIP_SECONDARY_COLOUR(int blip, float r, float g, float b) { invoke<void *>(0x14892474891E09EB, blip, r, g, b); }
static int GET_BLIP_COLOUR(int blip) { return invoke<int>(0xDF729E8D20CF7327, blip); }
static int GET_BLIP_HUD_COLOUR(int blip) { return invoke<int>(0x729B5F1EFBC0AAEE, blip); }
static bool IS_BLIP_SHORT_RANGE(int blip) { return invoke<bool>(0xDA5F8727EB75B926, blip); }
static bool IS_BLIP_ON_MINIMAP(int blip) { return invoke<bool>(0xE41CA53051197A27, blip); }
static bool _0xDD2238F57B977751(int p0) { return invoke<bool>(0xDD2238F57B977751, p0); }
static void _0x54318C915D27E4CE(int p0, bool p1) { invoke<void *>(0x54318C915D27E4CE, p0, p1); }
static void SET_BLIP_HIGH_DETAIL(int blip, bool toggle) { invoke<void *>(0xE2590BC29220CEBB, blip, toggle); }
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(int blip, bool toggle) { invoke<void *>(0x24AC0137444F9FD5, blip, toggle); }
static bool IS_MISSION_CREATOR_BLIP(int blip) { return invoke<bool>(0x26F49BF3381D933D, blip); }
static int DISABLE_BLIP_NAME_FOR_VAR() { return invoke<int>(0x5C90988E7C8E1AF4); }
static bool _0x4167EFE0527D706E() { return invoke<bool>(0x4167EFE0527D706E); }
static void _0xF1A6C18B35BCADE6(bool p0) { invoke<void *>(0xF1A6C18B35BCADE6, p0); }
static void SET_BLIP_FLASHES(int blip, bool toggle) { invoke<void *>(0xB14552383D39CE3E, blip, toggle); }
static void SET_BLIP_FLASHES_ALTERNATE(int blip, bool toggle) { invoke<void *>(0x2E8D9498C56DD0D1, blip, toggle); }
static bool IS_BLIP_FLASHING(int blip) { return invoke<bool>(0xA5E41FD83AD6CEF0, blip); }
static void SET_BLIP_AS_SHORT_RANGE(int blip, bool toggle) { invoke<void *>(0xBE8BE4FE60E27B72, blip, toggle); }
static void SET_BLIP_SCALE(int blip, float scale) { invoke<void *>(0xD38744167B2FA257, blip, scale); }
static void SET_BLIP_PRIORITY(int blip, int priority) { invoke<void *>(0xAE9FC9EF6A9FAC79, blip, priority); }
static void SET_BLIP_DISPLAY(int blip, int displayId) { invoke<void *>(0x9029B2F3DA924928, blip, displayId); }
static void SET_BLIP_CATEGORY(int blip, int index) { invoke<void *>(0x234CDD44D996FD9A, blip, index); }
static void REMOVE_BLIP(int *blip) { invoke<void *>(0x86A652570E5F25DD, blip); }
static void SET_BLIP_AS_FRIENDLY(int blip, bool toggle) { invoke<void *>(0x6F6F290102C02AB4, blip, toggle); }
static void PULSE_BLIP(int blip) { invoke<void *>(0x742D6FD43115AF73, blip); }
static void SHOW_NUMBER_ON_BLIP(int blip, int number) { invoke<void *>(0xA3C0B359DCB848B6, blip, number); }
static void HIDE_NUMBER_ON_BLIP(int blip) { invoke<void *>(0x532CFF637EF80148, blip); }
static void _0x75A16C3DA34F1245(int p0, bool p1) { invoke<void *>(0x75A16C3DA34F1245, p0, p1); }
static void _SET_BLIP_CHECKED(int blip, bool toggle) { invoke<void *>(0x74513EA3E505181E, blip, toggle); }
static void SHOW_HEADING_INDICATOR_ON_BLIP(int blip, bool toggle) { invoke<void *>(0x5FBCA48327B914DF, blip, toggle); }
static void _SET_BLIP_FRIENDLY(int blip, bool toggle) { invoke<void *>(0xB81656BC81FE24D1, blip, toggle); }
static void _SET_BLIP_FRIEND(int blip, bool toggle) { invoke<void *>(0x23C3EB807312F01A, blip, toggle); }
static void _0xDCFB5D4DB8BF367E(int p0, bool p1) { invoke<void *>(0xDCFB5D4DB8BF367E, p0, p1); }
static void _0xC4278F70131BAA6D(int p0, bool p1) { invoke<void *>(0xC4278F70131BAA6D, p0, p1); }
static void _SET_BLIP_SHRINK(int blip, bool toggle) { invoke<void *>(0x2B6D467DAB714E8D, blip, toggle); }
static void _0x25615540D894B814(int p0, bool p1) { invoke<void *>(0x25615540D894B814, p0, p1); }
static bool DOES_BLIP_EXIST(int blip) { return invoke<bool>(0xA6DB27D19ECBB7DA, blip); }
static void SET_WAYPOINT_OFF() { invoke<void *>(0xA7E4E2D361C2627F); }
static void _0xD8E694757BCEA8E9() { invoke<void *>(0xD8E694757BCEA8E9); }
static void REFRESH_WAYPOINT() { invoke<void *>(0x81FA173F170560D1); }
static bool IS_WAYPOINT_ACTIVE() { return invoke<bool>(0x1DD1F58F493F1DA5); }
static void SET_NEW_WAYPOINT(float x, float y) { invoke<void *>(0xFE43368D2AA4F2FC, x, y); }
static void SET_BLIP_BRIGHT(int blip, bool toggle) { invoke<void *>(0xB203913733F27884, blip, toggle); }
static void SET_BLIP_SHOW_CONE(int blip, bool toggle) { invoke<void *>(0x13127EC3665E8EE1, blip, toggle); }
static void _0xC594B315EDF2D4AF(int ped) { invoke<void *>(0xC594B315EDF2D4AF, ped); }
static int SET_MINIMAP_COMPONENT(int p0, bool p1, int p2) { return invoke<int>(0x75A9A10948D1DEA6, p0, p1, p2); }
static int GET_MAIN_PLAYER_BLIP_ID() { return invoke<int>(0xDCD4EC3F419D02FA); }
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<void *>(0x4B0311D3CDC4648F); }
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(int interior, float x, float y, int z, int zoom) { invoke<void *>(0x59E727A1C9D3E31A, interior, x, y, z, zoom); }
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<void *>(0xE81B7D2A3DAB2D81); }
static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { invoke<void *>(0x77E2DD177910E1CF, x, y); }
static int _0x9049FE339D5F6F6F() { return invoke<int>(0x9049FE339D5F6F6F); }
static void _DISABLE_RADAR_THIS_FRAME() { invoke<void *>(0x5FBAE526203990C9); }
static void _0x20FE7FDFEEAD38C0() { invoke<void *>(0x20FE7FDFEEAD38C0); }
static void _CENTER_PLAYER_ON_RADAR_THIS_FRAME() { invoke<void *>(0x6D14BFDC33B34F55); }
static void SET_WIDESCREEN_FORMAT(int p0) { invoke<void *>(0xC3B07BA00A83B0F1, p0); }
static void DISPLAY_AREA_NAME(bool toggle) { invoke<void *>(0x276B6CE369C33678, toggle); }
static void DISPLAY_CASH(bool toggle) { invoke<void *>(0x96DEC8D5430208B7, toggle); }
static void DISPLAY_AMMO_THIS_FRAME(bool display) { invoke<void *>(0xA5E78BA2B1331C55, display); }
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<void *>(0x73115226F4814E62); }
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<void *>(0x719FF505F097FD20); }
static void _0xE67C6DFD386EA5E7(bool p0) { invoke<void *>(0xE67C6DFD386EA5E7, p0); }
static void _0xC2D15BEF167E27BC() { invoke<void *>(0xC2D15BEF167E27BC); }
static void _0x95CF81BD06EE1887() { invoke<void *>(0x95CF81BD06EE1887); }
static void SET_MULTIPLAYER_BANK_CASH() { invoke<void *>(0xDD21B55DF695CD0A); }
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<void *>(0xC7C6789AA1CFEDD0); }
static void SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<void *>(0xFD1D220394BCB824, p0, p1); }
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<void *>(0x968F270E39141ECA); }
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<void *>(0xD46923FC481CA285); }
static void DISPLAY_HELP_TEXT_THIS_FRAME(char *message, bool p1) { invoke<void *>(0x960C9FF8F616E41C, message, p1); }
static void _SHOW_WEAPON_WHEEL(bool forcedShow) { invoke<void *>(0xEB354E5376BC81A7, forcedShow); }
static void _0x0AFC4AF510774B47() { invoke<void *>(0x0AFC4AF510774B47); }
static int _0xA48931185F0536FE() { return invoke<int>(0xA48931185F0536FE); }
static void _0x72C1056D678BB7D8(int weaponint) { invoke<void *>(0x72C1056D678BB7D8, weaponint); }
static void _0x14C9FDCC41F81F63(bool p0) { invoke<void *>(0x14C9FDCC41F81F63, p0); }
static void SET_GPS_FLAGS(int p0, float p1) { invoke<void *>(0x5B440763A4C8D15B, p0, p1); }
static void CLEAR_GPS_FLAGS() { invoke<void *>(0x21986729D6A3A830); }
static void _0x1EAC5F91BCBC5073(bool p0) { invoke<void *>(0x1EAC5F91BCBC5073, p0); }
static void CLEAR_GPS_RACE_TRACK() { invoke<void *>(0x7AA5B4CE533C858B); }
static void _0xDB34E8D56FC13B08(int p0, bool p1, bool p2) { invoke<void *>(0xDB34E8D56FC13B08, p0, p1, p2); }
static void _0x311438A071DD9B1A(int p0, int p1, int p2) { invoke<void *>(0x311438A071DD9B1A, p0, p1, p2); }
static void _0x900086F371220B6F(bool p0, int p1, int p2) { invoke<void *>(0x900086F371220B6F, p0, p1, p2); }
static void _0xE6DE0561D9232A64() { invoke<void *>(0xE6DE0561D9232A64); }
static void _0x3D3D15AF7BCAAF83(int p0, bool p1, bool p2) { invoke<void *>(0x3D3D15AF7BCAAF83, p0, p1, p2); }
static void _0xA905192A6781C41B(float x, float y, float z) { invoke<void *>(0xA905192A6781C41B, x, y, z); }
static void _0x3DDA37128DD1ACA8(bool p0) { invoke<void *>(0x3DDA37128DD1ACA8, p0); }
static void _0x67EEDEA1B9BAFD94() { invoke<void *>(0x67EEDEA1B9BAFD94); }
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<void *>(0xFF4FB7C8CDFA3DA7); }
static void SET_GPS_FLASHES(bool toggle) { invoke<void *>(0x320D0E0D936A0E9B, toggle); }
static void FLASH_MINIMAP_DISPLAY() { invoke<void *>(0xF2DD778C22B15BDA); }
static void _0x6B1DE27EE78E6A19(int p0) { invoke<void *>(0x6B1DE27EE78E6A19, p0); }
static void TOGGLE_STEALTH_RADAR(bool toggle) { invoke<void *>(0x6AFDFB93754950C7, toggle); }
static void KEY_HUD_COLOUR(bool p0, int p1) { invoke<void *>(0x1A5CD7752DD28CD3, p0, p1); }
static void SET_MISSION_NAME(bool p0, char *name) { invoke<void *>(0x5F28ECF5FC84772F, p0, name); }
static void _0xE45087D85F468BC2(bool p0, int *p1) { invoke<void *>(0xE45087D85F468BC2, p0, p1); }
static void _0x817B86108EB94E51(bool p0, int *p1, int *p2, int *p3, int *p4, int *p5, int *p6, int *p7, int *p8) { invoke<void *>(0x817B86108EB94E51, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_MINIMAP_BLOCK_WAYPOINT(bool toggle) { invoke<void *>(0x58FADDED207897DC, toggle); }
static void _SET_NORTH_YANKTON_MAP(bool toggle) { invoke<void *>(0x9133955F1A2DA957, toggle); }
static void _SET_MINIMAP_REVEALED(bool toggle) { invoke<void *>(0xF8DEE0A5600CBB93, toggle); }
static float _0xE0130B41D3CF4574() { return invoke<float>(0xE0130B41D3CF4574); }
static bool _IS_MINIMAP_AREA_REVEALED(float x, float y, float radius) { return invoke<bool>(0x6E31B91145873922, x, y, radius); }
static void _0x0923DBF87DFF735E(float x, float y, float z) { invoke<void *>(0x0923DBF87DFF735E, x, y, z); }
static void _0x71BDB63DBAF8DA59(int p0) { invoke<void *>(0x71BDB63DBAF8DA59, p0); }
static void _0x35EDD5B2E3FF01C0() { invoke<void *>(0x35EDD5B2E3FF01C0); }
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<void *>(0x299FAEBB108AE05B, angle); }
static void UNLOCK_MINIMAP_ANGLE() { invoke<void *>(0x8183455E16C42E3A); }
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<void *>(0x1279E861A329E73F, x, y); }
static void UNLOCK_MINIMAP_POSITION() { invoke<void *>(0x3E93E06DB8EF1F30); }
static void _SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(float altitude, bool p1) { invoke<void *>(0xD201F3FF917A506D, altitude, p1); }
static void _0x3F5CC444DCAAA8F2(int p0, int p1, bool p2) { invoke<void *>(0x3F5CC444DCAAA8F2, p0, p1, p2); }
static void _0x975D66A0BC17064C(int p0) { invoke<void *>(0x975D66A0BC17064C, p0); }
static void _0x06A320535F5F0248(int p0) { invoke<void *>(0x06A320535F5F0248, p0); }
static void _SET_RADAR_BIGMAP_ENABLED(bool toggleBigMap, bool showFullMap) { invoke<void *>(0x231C8F89D0539D8F, toggleBigMap, showFullMap); }
static bool IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<bool>(0xBC4C9EA5391ECC0D, id); }
static bool IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<bool>(0xDD100EB17A94FF65, id); }
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<void *>(0xE374C498D8BADC14, id); }
static bool _0x09C0403ED9A751C2(int p0) { return invoke<bool>(0x09C0403ED9A751C2, p0); }
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<void *>(0x6806C51AD12B83B8, id); }
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<void *>(0x0B4DF1FA60C0E664, id); }
static void _0xA4DEDE28B1814289() { invoke<void *>(0xA4DEDE28B1814289); }
static void RESET_RETICULE_VALUES() { invoke<void *>(0x12782CE0A636E9F0); }
static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<void *>(0x450930E616475D0D, id); }
static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<void *>(0xAABB1F56E2A17CED, id, x, y); }
static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0x223CA69A8C4417FD, id); }
static void CLEAR_REMINDER_MESSAGE() { invoke<void *>(0xB57D8DD645CFA2CF); }
static bool _GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float *screenX, float *screenY) { return invoke<bool>(0xF9904D11F1ACBEC3, worldX, worldY, worldZ, screenX, screenY); }
static void _DISPLAY_JOB_REPORT() { invoke<void *>(0x523A590C1A3CC0D3); }
static void _0xEE4C0E6DBC6F2C6F() { invoke<void *>(0xEE4C0E6DBC6F2C6F); }
static int _0x9135584D09A3437E() { return invoke<int>(0x9135584D09A3437E); }
static bool _0x2432784ACA090DA4(int p0) { return invoke<bool>(0x2432784ACA090DA4, p0); }
static void _0x7679CC1BCEBE3D4C(int p0, float p1, float p2) { invoke<void *>(0x7679CC1BCEBE3D4C, p0, p1, p2); }
static void _0x784BA7E0ECEB4178(int p0, float x, float y, float z) { invoke<void *>(0x784BA7E0ECEB4178, p0, x, y, z); }
static void _0xB094BC1DB4018240(int p0, int p1, float p2, float p3) { invoke<void *>(0xB094BC1DB4018240, p0, p1, p2, p3); }
static void _0x788E7FD431BD67F1(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0x788E7FD431BD67F1, p0, p1, p2, p3, p4, p5); }
static void CLEAR_FLOATING_HELP(int p0, bool p1) { invoke<void *>(0x50085246ABD3FEFA, p0, p1); }
static void _SET_MP_GAMER_TAG_COLOR(int headDisplayId, char *username, bool pointedClanTag, bool isRockstarClan, char *clanTag, int p5, int r, int g, int b) { invoke<void *>(0x6DD05E9D83EFA4C9, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, r, g, b); }
static bool _HAS_MP_GAMER_TAG() { return invoke<bool>(0x6E0EB3EB47C8D7AA); }
static int _CREATE_MP_GAMER_TAG(int ped, char *username, bool pointedClanTag, bool isRockstarClan, char *clanTag, int p5) { return invoke<int>(0xBFEFE3321A3F5015, ped, username, pointedClanTag, isRockstarClan, clanTag, p5); }
static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<void *>(0x31698AA80E0223F8, gamerTagId); }
static bool IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<bool>(0x4E929E7A5796FD26, gamerTagId); }
static bool ADD_TREVOR_RANDOM_MODIFIER(int gamerTagId) { return invoke<bool>(0x595B5178E412E199, gamerTagId); }
static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, bool toggle) { invoke<void *>(0x63BB75ABEDC1F6A0, gamerTagId, component, toggle); }
static void _SET_MP_GAMER_TAG_(int headDisplayId, bool p1) { invoke<void *>(0xEE76FF7E6A0166B0, headDisplayId, p1); }
static void _SET_MP_GAMER_TAG_ICONS(int headDisplayId, bool p1) { invoke<void *>(0xA67F9C46D612B6F1, headDisplayId, p1); }
static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int flag, int color) { invoke<void *>(0x613ED644950626AE, gamerTagId, flag, color); }
static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int headDisplayId, int color) { invoke<void *>(0x3158C77A7E888AB4, headDisplayId, color); }
static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<void *>(0xD48FE545CD46F857, gamerTagId, component, alpha); }
static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<void *>(0xCF228E2AA03099C3, gamerTagId, wantedlvl); }
static void SET_MP_GAMER_TAG_NAME(int gamerTagId, char *string) { invoke<void *>(0xDEA2B8283BAA3944, gamerTagId, string); }
static bool _HAS_MP_GAMER_TAG_2(int gamerTagId) { return invoke<bool>(0xEB709A36958ABE0D, gamerTagId); }
static void _SET_MP_GAMER_TAG_CHATTING(int gamerTagId, char *string) { invoke<void *>(0x7B7723747CCB55B6, gamerTagId, string); }
static int _0x01A358D9128B7A86() { return invoke<int>(0x01A358D9128B7A86); }
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0x97D47996FC48CBAD); }
static int _0xE3B05614DCE1D014(int p0) { return invoke<int>(0xE3B05614DCE1D014, p0); }
static void SET_WARNING_MESSAGE(char *entryLine1, int instructionalKey, char *entryLine2, bool p3, int p4, int *p5, int *p6, bool background) { invoke<void *>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); }
static void _SET_WARNING_MESSAGE_2(char *entryHeader, char *entryLine1, int instructionalKey, char *entryLine2, bool p4, int p5, int *p6, int *p7, bool background) { invoke<void *>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); }
static void _SET_WARNING_MESSAGE_3(char *entryHeader, char *entryLine1, int instructionalKey, char *entryLine2, bool p4, int p5, int p6, int *p7, int *p8, bool p9) { invoke<void *>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); }
static bool IS_WARNING_MESSAGE_ACTIVE() { return invoke<bool>(0xE18B138FABC53103); }
static void _0x7792424AA0EAC32E() { invoke<void *>(0x7792424AA0EAC32E); }
static void _SET_MAP_FULL_SCREEN(bool toggle) { invoke<void *>(0x5354C5BA2EA868A4, toggle); }
static void _0x1EAE6DD17B7A5EFA(int p0) { invoke<void *>(0x1EAE6DD17B7A5EFA, p0); }
static int _0x551DF99658DB6EE8(float p0, float p1, float p2) { return invoke<int>(0x551DF99658DB6EE8, p0, p1, p2); }
static void _0x2708FC083123F9FF() { invoke<void *>(0x2708FC083123F9FF); }
static int _0x1121BFA1A1A522A8() { return invoke<int>(0x1121BFA1A1A522A8); }
static void _0x82CEDC33687E1F50(bool p0) { invoke<void *>(0x82CEDC33687E1F50, p0); }
static void _0x211C4EF450086857() { invoke<void *>(0x211C4EF450086857); }
static void _0xBF4F34A85CA2970C() { invoke<void *>(0xBF4F34A85CA2970C); }
static void ACTIVATE_FRONTEND_MENU(int menuhash, bool Toggle_Pause, int component) { invoke<void *>(0xEF01D36B9C9D0C7B, menuhash, Toggle_Pause, component); }
static void RESTART_FRONTEND_MENU(int menuint, int p1) { invoke<void *>(0x10706DC6AD2D49C0, menuint, p1); }
static int _GET_CURRENT_FRONTEND_MENU() { return invoke<int>(0x2309595AD6145265); }
static void SET_PAUSE_MENU_ACTIVE(bool toggle) { invoke<void *>(0xDF47FC56C71569CF, toggle); }
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<void *>(0x6D3465A73092F0E6); }
static void _0xBA751764F0821256() { invoke<void *>(0xBA751764F0821256); }
static void _0xCC3FDDED67BCFC63() { invoke<void *>(0xCC3FDDED67BCFC63); }
static void SET_FRONTEND_ACTIVE(bool active) { invoke<void *>(0x745711A75AB09277, active); }
static bool IS_PAUSE_MENU_ACTIVE() { return invoke<bool>(0xB0034A223497FFCB); }
static int _0x2F057596F2BD0061() { return invoke<int>(0x2F057596F2BD0061); }
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0x272ACD84970869C5); }
static bool IS_PAUSE_MENU_RESTARTING() { return invoke<bool>(0x1C491717107431C7); }
static void _LOG_DEBUG_INFO(char *p0) { invoke<void *>(0x2162C446DFDF38FD, p0); }
static void _0x77F16B447824DA6C(int p0) { invoke<void *>(0x77F16B447824DA6C, p0); }
static void _0xCDCA26E80FAECB8F() { invoke<void *>(0xCDCA26E80FAECB8F); }
static void _ADD_FRONTEND_MENU_CONTEXT(int hash) { invoke<void *>(0xDD564BDD0472C936, hash); }
static void OBJECT_DECAL_TOGGLE(int hash) { invoke<void *>(0x444D8CF241EC25C5, hash); }
static bool _0x84698AB38D0C6636(int hash) { return invoke<bool>(0x84698AB38D0C6636, hash); }
static int _0x2A25ADC48F87841F() { return invoke<int>(0x2A25ADC48F87841F); }
static void ENABLE_DEATHBLOOD_SEETHROUGH(bool p0) { invoke<void *>(0x4895BDEA16E7C080, p0); }
static void _0xC78E239AC5B2DDB9(bool p0, int p1, int p2) { invoke<void *>(0xC78E239AC5B2DDB9, p0, p1, p2); }
static void _0xF06EBB91A81E09E3(bool p0) { invoke<void *>(0xF06EBB91A81E09E3, p0); }
static int _0x3BAB9A4E4F2FF5C7() { return invoke<int>(0x3BAB9A4E4F2FF5C7); }
static void _0xEC9264727EEC0F28() { invoke<void *>(0xEC9264727EEC0F28); }
static void _0x14621BB1DF14E2B2() { invoke<void *>(0x14621BB1DF14E2B2); }
static int _0x66E7CB63C97B7D20() { return invoke<int>(0x66E7CB63C97B7D20); }
static int _0x593FEAE1F73392D4() { return invoke<int>(0x593FEAE1F73392D4); }
static int _0x4E3CD0EF8A489541() { return invoke<int>(0x4E3CD0EF8A489541); }
static int _0xF284AC67940C6812() { return invoke<int>(0xF284AC67940C6812); }
static int _0x2E22FEFA0100275E() { return invoke<int>(0x2E22FEFA0100275E); }
static void _0x36C1451A88A09630(int *p0, int *p1) { invoke<void *>(0x36C1451A88A09630, p0, p1); }
static void _0x7E17BE53E1AAABAF(int *p0, int *p1, int *p2) { invoke<void *>(0x7E17BE53E1AAABAF, p0, p1, p2); }
static bool _0xA238192F33110615(int *p0, int *p1, int *p2) { return invoke<bool>(0xA238192F33110615, p0, p1, p2); }
static bool SET_USERIDS_UIHIDDEN(int p0, int *p1) { return invoke<bool>(0xEF4CED81CEBEDC6D, p0, p1); }
static bool _0x90A6526CF0381030(int p0, int *p1, int p2, int p3) { return invoke<bool>(0x90A6526CF0381030, p0, p1, p2, p3); }
static bool _0x5FBD7095FE7AE57F(int p0, float *p1) { return invoke<bool>(0x5FBD7095FE7AE57F, p0, p1); }
static bool _0x052991E59076E4E4(int p0, int *p1) { return invoke<bool>(0x052991E59076E4E4, p0, p1); }
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<void *>(0x5E62BE5DC58E9E06); }
static void GIVE_PED_TO_PAUSE_MENU(int ped, int p1) { invoke<void *>(0xAC0BFBDC3BE00E14, ped, p1); }
static void _0x3CA6050692BC61B0(bool p0) { invoke<void *>(0x3CA6050692BC61B0, p0); }
static void _0xECF128344E9FF9F1(bool p0) { invoke<void *>(0xECF128344E9FF9F1, p0); }
static void _SHOW_SOCIAL_CLUB_LEGAL_SCREEN() { invoke<void *>(0x805D7CBB36FD6C4C); }
static int _0xF13FE2A80C05C561() { return invoke<int>(0xF13FE2A80C05C561); }
static int _0x6F72CD94F7B5B68C() { return invoke<int>(0x6F72CD94F7B5B68C); }
static void _0x75D3691713C3B05A() { invoke<void *>(0x75D3691713C3B05A); }
static void _0xD2B32BE3FC1626C6() { invoke<void *>(0xD2B32BE3FC1626C6); }
static void _0x9E778248D6685FE0(char *p0) { invoke<void *>(0x9E778248D6685FE0, p0); }
static bool IS_SOCIAL_CLUB_ACTIVE() { return invoke<bool>(0xC406BE343FC4B9AF); }
static void _0xCEF214315D276FD1(bool p0) { invoke<void *>(0xCEF214315D276FD1, p0); }
static void _SET_PED_ENEMY_AI_BLIP(int pedHandle, bool showViewCones) { invoke<void *>(0xD30C50DF888D58B5, pedHandle, showViewCones); }
static bool DOES_PED_HAVE_AI_BLIP(int ped) { return invoke<bool>(0x15B8ECF844EE67ED, ped); }
static void _0xE52B8E7F85D39A08(int ped, int unk) { invoke<void *>(0xE52B8E7F85D39A08, ped, unk); }
static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(int p0, bool p1) { invoke<void *>(0x3EED80DFF7325CAA, p0, p1); }
static void _0x0C4BBF625CA98C4E(int ped, bool p1) { invoke<void *>(0x0C4BBF625CA98C4E, ped, p1); }
static void _SET_AI_BLIP_MAX_DISTANCE(int ped, float distance) { invoke<void *>(0x97C65887D4B37FA9, ped, distance); }
static int *_0x7CD934010E115C2C(int ped) { return invoke<int *>(0x7CD934010E115C2C, ped); }
static int _GET_AI_BLIP(int ped) { return invoke<int>(0x56176892826A4FE8, ped); }
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(bool enabled) { invoke<void *>(0x175B6BFC15CDD0C5, enabled); }
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<void *>(0x7FDFADE676AA3CB0, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<void *>(0xD8B9A8AC5608FF94, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); }
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<void *>(0xAAD68E1AB39DA632, x, y, z, radius, red, green, blue, alpha); }
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<void *>(0x083A2CA4F2E573BD, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<void *>(0x73B1189623049839, x, y, z, size, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT(char *text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<void *>(0x3903E216620488E8, text, x, y, z, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT_2D(char *text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<void *>(0xA3BB2E9555C05A8F, text, x, y, z, red, green, blue, alpha); }
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<void *>(0x6B7256074AE34680, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<void *>(0xAC26716048436851, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); }
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<void *>(0xD3A9971CADAC7252, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void _0x23BA6B0C2AD7B0D3(bool p0) { invoke<void *>(0x23BA6B0C2AD7B0D3, p0); }
static int _0x1DD2139A9A20DCE8() { return invoke<int>(0x1DD2139A9A20DCE8); }
static int _0x90A78ECAA4E78453() { return invoke<int>(0x90A78ECAA4E78453); }
static void _0x0A46AF8A78DC5E0A() { invoke<void *>(0x0A46AF8A78DC5E0A); }
static bool _0x4862437A486F91B0(int *p0, int p1, int p2, int p3) { return invoke<bool>(0x4862437A486F91B0, p0, p1, p2, p3); }
static int _0x1670F8D05056F257(int *p0) { return invoke<int>(0x1670F8D05056F257, p0); }
static int _0x7FA5D82B8F58EC06() { return invoke<int>(0x7FA5D82B8F58EC06); }
static int _0x5B0316762AFD4A64() { return invoke<int>(0x5B0316762AFD4A64); }
static void _0x346EF3ECAAAB149E() { invoke<void *>(0x346EF3ECAAAB149E); }
static int _0xA67C35C56EB1BD9D() { return invoke<int>(0xA67C35C56EB1BD9D); }
static int _0x0D6CA79EEEBD8CA3() { return invoke<int>(0x0D6CA79EEEBD8CA3); }
static void _0xD801CC02177FA3F1() { invoke<void *>(0xD801CC02177FA3F1); }
static int _0x3DEC726C25A11BAC(int p0) { return invoke<int>(0x3DEC726C25A11BAC, p0); }
static int _0x0C0C4E81E1AC60A0() { return invoke<int>(0x0C0C4E81E1AC60A0); }
static bool _0x759650634F07B6B4(int p0) { return invoke<bool>(0x759650634F07B6B4, p0); }
static int _0xCB82A0BF0E3E3265(int p0) { return invoke<int>(0xCB82A0BF0E3E3265, p0); }
static void _0x6A12D88881435DCA() { invoke<void *>(0x6A12D88881435DCA); }
static void _0x1072F115DAB0717E(bool p0, bool p1) { invoke<void *>(0x1072F115DAB0717E, p0, p1); }
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0x34D23450F028B0BF); }
static int _0xDC54A7AF8B3A14EF() { return invoke<int>(0xDC54A7AF8B3A14EF); }
static int _0x473151EBC762C6DA() { return invoke<int>(0x473151EBC762C6DA); }
static int _0x2A893980E96B659A(int p0) { return invoke<int>(0x2A893980E96B659A, p0); }
static int _0xF5BED327CEA362B1(int p0) { return invoke<int>(0xF5BED327CEA362B1, p0); }
static void _0x4AF92ACD3141D96C() { invoke<void *>(0x4AF92ACD3141D96C); }
static int _0xE791DF1F73ED2C8B(int p0) { return invoke<int>(0xE791DF1F73ED2C8B, p0); }
static int _0xEC72C258667BE5EA(int p0) { return invoke<int>(0xEC72C258667BE5EA, p0); }
static int _RETURN_TWO(int p0) { return invoke<int>(0x40AFB081F8ADD4EE, p0); }
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<void *>(0xF2A1B2771A01DBD4, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<void *>(0xD0F64B265C8C8B33, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); }
static void _DRAW_SPOT_LIGHT_WITH_SHADOW(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<void *>(0x5BCA583A583194DB, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); }
static void _0xC9B18B4619F48F7B(float p0) { invoke<void *>(0xC9B18B4619F48F7B, p0); }
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, bool bobUpAndDown, bool faceintera, int p19, bool rotate, char *textureDict, char *textureName, bool drawOnEnts) { invoke<void *>(0x28477EC23D892089, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceintera, p19, rotate, textureDict, textureName, drawOnEnts); }
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0x0134F0835AB6BFCB, type, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved); }
static void _SET_CHECKPOINT_SCALE(int checkpoint, float p0) { invoke<void *>(0x4B5B4DA5D79F1943, checkpoint, p0); }
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<void *>(0x2707AAE9D9297D89, checkpoint, nearHeight, farHeight, radius); }
static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<void *>(0x7167371E8AD747F7, checkpoint, red, green, blue, alpha); }
static void _SET_CHECKPOINT_ICON_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<void *>(0xB9EA40907C680580, checkpoint, red, green, blue, alpha); }
static void _0xF51D36185993515D(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<void *>(0xF51D36185993515D, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); }
static void _0x615D3925E87A3B26(int checkpoint) { invoke<void *>(0x615D3925E87A3B26, checkpoint); }
static void DELETE_CHECKPOINT(int checkpoint) { invoke<void *>(0xF5ED37F54CD4D52E, checkpoint); }
static void _0x22A249A53034450A(bool p0) { invoke<void *>(0x22A249A53034450A, p0); }
static void _0xDC459CFA0CCE245B(bool p0) { invoke<void *>(0xDC459CFA0CCE245B, p0); }
static void REQUEST_STREAMED_TEXTURE_DICT(char *textureDict, bool p1) { invoke<void *>(0xDFA2EF8E04127DD5, textureDict, p1); }
static bool HAS_STREAMED_TEXTURE_DICT_LOADED(char *textureDict) { return invoke<bool>(0x0145F696AAAAD2E4, textureDict); }
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char *textureDict) { invoke<void *>(0xBE2CACCF5A8AA805, textureDict); }
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<void *>(0x3A618A217E5154F0, x, y, width, height, r, g, b, a); }
static void _0xC6372ECD45D73BCD(bool p0) { invoke<void *>(0xC6372ECD45D73BCD, p0); }
static void _SET_2D_LAYER(int layer) { invoke<void *>(0x61BB1D9B3A95D802, layer); }
static void _SCREEN_DRAW_POSITION_BEGIN(int x, int y) { invoke<void *>(0xB8A850F20A067EB6, x, y); }
static void _SCREEN_DRAW_POSITION_END() { invoke<void *>(0xE3A3DB414A373DAB); }
static void _SCREEN_DRAW_POSITION_RATIO(float x, float y, float p2, float p3) { invoke<void *>(0xF5A2C681787E579D, x, y, p2, p3); }
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xBAF107B6BB2C97F0); }
static void DRAW_SPRITE(char *textureDict, char *textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha) { invoke<void *>(0xE7FFAE5EBF23D890, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha); }
static int ADD_ENTITY_ICON(int entity, char *icon) { return invoke<int>(0x9CD43EEE12BF4DD0, entity, icon); }
static void SET_ENTITY_ICON_VISIBILITY(int entity, bool toggle) { invoke<void *>(0xE0E8BEECCA96BA31, entity, toggle); }
static void SET_ENTITY_ICON_COLOR(int entity, int red, int green, int blue, int alpha) { invoke<void *>(0x1D5F595CCAE2E238, entity, red, green, blue, alpha); }
static void SET_DRAW_ORIGIN(float x, float y, float z, int p3) { invoke<void *>(0xAA0008F3BBB8F416, x, y, z, p3); }
static void CLEAR_DRAW_ORIGIN() { invoke<void *>(0xFF0B610F6BE0D7AF); }
static void ATTACH_TV_AUDIO_TO_ENTITY(int entity) { invoke<void *>(0x845BAD77CC770633, entity); }
static void SET_TV_AUDIO_FRONTEND(bool toggle) { invoke<void *>(0x113D2C5DC57E1774, toggle); }
static int LOAD_MOVIE_MESH_SET(char *movieMeshSetName) { return invoke<int>(0xB66064452270E8F1, movieMeshSetName); }
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<void *>(0xEB119AA014E89183, movieMeshSet); }
static int _0x9B6E70C5CEEF4EEB(int p0) { return invoke<int>(0x9B6E70C5CEEF4EEB, p0); }
static void GET_SCREEN_RESOLUTION(int *x, int *y) { invoke<void *>(0x888D57E407E63624, x, y); }
static bool GET_IS_WIDESCREEN() { return invoke<bool>(0x30CF4BDA4FCB1905); }
static bool GET_IS_HIDEF() { return invoke<bool>(0x84ED31191CC5D2C9); }
static void SET_NIGHTVISION(bool toggle) { invoke<void *>(0x18F621F7A5B1F85D, toggle); }
static bool _IS_NIGHTVISION_ACTIVE() { return invoke<bool>(0x2202A3F42C8E5F79); }
static void SET_NOISEOVERIDE(bool toggle) { invoke<void *>(0xE787BF1C5CF823C9, toggle); }
static void SET_NOISINESSOVERIDE(float value) { invoke<void *>(0xCB6A7C3BB17A0C67, value); }
static bool GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float *screenX, float *screenY) { return invoke<bool>(0x34E82F05DF2974F5, worldX, worldY, worldZ, screenX, screenY); }
static Vector3 GET_TEXTURE_RESOLUTION(char *textureDict, char *textureName) { return invoke<Vector3>(0x35736EE65BD00C11, textureDict, textureName); }
static void _0xE2892E7E55D7073A(float p0) { invoke<void *>(0xE2892E7E55D7073A, p0); }
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<void *>(0x0AB84296FED9CFC6, p0, p1, fadeIn, duration, fadeOut); }
static void _0x3669F1B198DCAA4F() { invoke<void *>(0x3669F1B198DCAA4F); }
static void _SET_BLACKOUT(bool enable) { invoke<void *>(0x1268615ACE24D504, enable); }
static int CREATE_TRACKED_POINT() { return invoke<int>(0xE2C9439ED45DEA60); }
static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<void *>(0x164ECBB3CF750CB0, point, x, y, z, radius); }
static bool IS_TRACKED_POINT_VISIBLE(int point) { return invoke<bool>(0xC45CCDAAC9221CA8, point); }
static void DESTROY_TRACKED_POINT(int point) { invoke<void *>(0xB25DC90BAD56CA42, point); }
static void _0x03FC694AE06C5A20() { invoke<void *>(0x03FC694AE06C5A20); }
static void _0x5F0F3F56635809EF(float p0) { invoke<void *>(0x5F0F3F56635809EF, p0); }
static void _0x5E9DAF5A20F15908(float p0) { invoke<void *>(0x5E9DAF5A20F15908, p0); }
static void _0x36F6626459D91457(float p0) { invoke<void *>(0x36F6626459D91457, p0); }
static void _SET_FAR_SHADOWS_SUPPRESSED(bool toggle) { invoke<void *>(0x80ECBC0C856D3B0B, toggle); }
static void _0xB11D94BC55F41932(char *p0) { invoke<void *>(0xB11D94BC55F41932, p0); }
static void _0x6DDBF9DFFC4AC080(bool p0) { invoke<void *>(0x6DDBF9DFFC4AC080, p0); }
static void _0xD39D13C9FEBF0511(bool p0) { invoke<void *>(0xD39D13C9FEBF0511, p0); }
static void _0x02AC28F3A01FA04A(float p0) { invoke<void *>(0x02AC28F3A01FA04A, p0); }
static void _0x0AE73D8DF3A762B2(bool p0) { invoke<void *>(0x0AE73D8DF3A762B2, p0); }
static void _0xA51C4B86B71652AE(bool p0) { invoke<void *>(0xA51C4B86B71652AE, p0); }
static void _0x312342E1A4874F3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8) { invoke<void *>(0x312342E1A4874F3F, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0x2485D34E50A22E84(float p0, float p1, float p2) { invoke<void *>(0x2485D34E50A22E84, p0, p1, p2); }
static void _0x12995F2E53FFA601(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void *>(0x12995F2E53FFA601, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _0xDBAA5EC848BA2D46(int p0, int p1) { invoke<void *>(0xDBAA5EC848BA2D46, p0, p1); }
static void _0xC0416B061F2B7E5E(bool p0) { invoke<void *>(0xC0416B061F2B7E5E, p0); }
static void _0xB1BB03742917A5D6(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<void *>(0xB1BB03742917A5D6, type, xPos, yPos, zPos, p4, red, green, blue, alpha); }
static void _0x9CFDD90B2B844BF7(float p0, float p1, float p2, float p3, float p4) { invoke<void *>(0x9CFDD90B2B844BF7, p0, p1, p2, p3, p4); }
static void _0x06F761EA47C1D3ED(bool p0) { invoke<void *>(0x06F761EA47C1D3ED, p0); }
static int _0xA4819F5E23E2FFAD() { return invoke<int>(0xA4819F5E23E2FFAD); }
static Vector3 _0xA4664972A9B8F8BA(int p0) { return invoke<Vector3>(0xA4664972A9B8F8BA, p0); }
static void SET_SEETHROUGH(bool toggle) { invoke<void *>(0x7E08924259E08CE0, toggle); }
static bool _IS_SEETHROUGH_ACTIVE() { return invoke<bool>(0x44B80ABAB9D80BD3); }
static void _0xD7D0B00177485411(int p0, float p1) { invoke<void *>(0xD7D0B00177485411, p0, p1); }
static void _0xB3C641F3630BF6DA(float p0) { invoke<void *>(0xB3C641F3630BF6DA, p0); }
static int _0xE59343E9E96529E7() { return invoke<int>(0xE59343E9E96529E7); }
static void _0xE63D7C6EECECB66B(bool p0) { invoke<void *>(0xE63D7C6EECECB66B, p0); }
static void _0xE3E2C1B4C59DBC77(int unk) { invoke<void *>(0xE3E2C1B4C59DBC77, unk); }
static bool _TRANSITION_TO_BLURRED(float transitionTime) { return invoke<bool>(0xA328A24AAA6B7FDC, transitionTime); }
static bool _TRANSITION_FROM_BLURRED(float transitionTime) { return invoke<bool>(0xEFACC8AEF94430D5, transitionTime); }
static void _0xDE81239437E8C5A8() { invoke<void *>(0xDE81239437E8C5A8); }
static float IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<float>(0x5CCABFFCA31DDE33); }
static int _0x7B226C785A52A0A9() { return invoke<int>(0x7B226C785A52A0A9); }
static void _SET_FROZEN_RENDERING_DISABLED(bool enabled) { invoke<void *>(0xDFC252D8A3E15AB7, enabled); }
static void _0xE1C8709406F2C41C() { invoke<void *>(0xE1C8709406F2C41C); }
static void _0x851CD923176EBA7C() { invoke<void *>(0x851CD923176EBA7C); }
static void _0xBA3D65906822BED5(bool p0, bool p1, float p2, float p3, float p4, float p5) { invoke<void *>(0xBA3D65906822BED5, p0, p1, p2, p3, p4, p5); }
static bool _0x7AC24EAB6D74118D(bool p0) { return invoke<bool>(0x7AC24EAB6D74118D, p0); }
static int _0xBCEDB009461DA156() { return invoke<int>(0xBCEDB009461DA156); }
static bool _0x27FEB5254759CDE3(char *textureDict, bool p1) { return invoke<bool>(0x27FEB5254759CDE3, textureDict, p1); }
static int START_PARTICLE_FX_NON_LOOPED_AT_COORD(char *effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, bool xAxis, bool yAxis, bool zAxis) { return invoke<int>(0x25129531F77B9ED3, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static bool _START_PARTICLE_FX_NON_LOOPED_AT_COORD_2(char *effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, bool xAxis, bool yAxis, bool zAxis) { return invoke<bool>(0xF56B8137DF10135D, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static bool START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char *effectName, int ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ) { return invoke<bool>(0x0E7E72961BA18619, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static bool _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(char *effectName, int ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ) { return invoke<bool>(0xA41B6A43642AC2CF, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static bool START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char *effectName, int entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, bool axisX, bool axisY, bool axisZ) { return invoke<bool>(0x0D53A3B8DA0809D2, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<void *>(0x26143A59EF48B262, r, g, b); }
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<void *>(0x77168D722C58B2FC, alpha); }
static int START_PARTICLE_FX_LOOPED_AT_COORD(char *effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, bool xAxis, bool yAxis, bool zAxis, bool p11) { return invoke<int>(0xE184F4F0DC5910E7, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(char *effectName, int ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, bool xAxis, bool yAxis, bool zAxis) { return invoke<int>(0xF28DA9F38CD1787C, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(char *effectName, int entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, bool xAxis, bool yAxis, bool zAxis) { return invoke<int>(0x1AE42C1660FD6517, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_2(char *effectName, int entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, bool xAxis, bool yAxis, bool zAxis) { return invoke<int>(0x6F60E89A7B64EE1D, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, bool p1) { invoke<void *>(0x8F75998877616996, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX(int ptfxHandle, bool p1) { invoke<void *>(0xC401503DFE8D53CF, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX_FROM_ENTITY(int entity) { invoke<void *>(0xB8FEAEEBCC127425, entity); }
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<void *>(0xDD19FA1C6D657305, X, Y, Z, radius); }
static bool DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<bool>(0x74AFEF0D2E1E409B, ptfxHandle); }
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<void *>(0xF7DDEBEC43483C43, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char *propertyName, float amount, bool Id) { invoke<void *>(0x5F0C4B5B1C393BE2, ptfxHandle, propertyName, amount, Id); }
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, bool p4) { invoke<void *>(0x7F8F65877F88783B, ptfxHandle, r, g, b, p4); }
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<void *>(0x726845132380142E, ptfxHandle, alpha); }
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<void *>(0xB44250AAA456492D, ptfxHandle, scale); }
static void _SET_PARTICLE_FX_LOOPED_RANGE(int ptfxHandle, float range) { invoke<void *>(0xDCB194B85EF7B541, ptfxHandle, range); }
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(bool p0) { invoke<void *>(0xEEC4047028426510, p0); }
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(int p0, bool p1) { invoke<void *>(0xACEE6F360FC1F6B6, p0, p1); }
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(int p0) { invoke<void *>(0x96EF97DAEB89BEF5, p0); }
static void SET_PARTICLE_FX_BLOOD_SCALE(bool p0) { invoke<void *>(0x5F6DF3D92271E8A1, p0); }
static void ENABLE_CLOWN_BLOOD_VFX(bool toggle) { invoke<void *>(0xD821490579791273, toggle); }
static void ENABLE_ALIEN_BLOOD_VFX(bool Toggle) { invoke<void *>(0x9DCE1F0F78260875, Toggle); }
static void _USE_PARTICLE_FX_ASSET_NEXT_CALL(char *name) { invoke<void *>(0x6C38AF3693A69A91, name); }
static void WASH_DECALS_IN_RANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x9C30613D50A6ADEF, p0, p1, p2, p3, p4); }
static void WASH_DECALS_FROM_VEHICLE(int vehicle, float p1) { invoke<void *>(0x5B712761429DBC14, vehicle, p1); }
static void FADE_DECALS_IN_RANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0xD77EDADB0420E6E0, p0, p1, p2, p3, p4); }
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<void *>(0x5D6B2D4830A67C62, x, y, z, range); }
static void REMOVE_DECALS_FROM_OBJECT(int obj) { invoke<void *>(0xCCF71CBDDF5B6CB9, obj); }
static void REMOVE_DECALS_FROM_OBJECT_FACING(int obj, float x, float y, float z) { invoke<void *>(0xA6F6F70FDC6D144C, obj, x, y, z); }
static void REMOVE_DECALS_FROM_VEHICLE(int vehicle) { invoke<void *>(0xE91F1B65F2B48D57, vehicle); }
static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, bool p17, bool p18, bool p19) { return invoke<int>(0xB302244A1839BDAD, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); }
static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0x4F5212C7AD880DF8, x, y, z, groundLvl, width, transparency); }
static void _0x99AC7F0D8B9C893D(float p0) { invoke<void *>(0x99AC7F0D8B9C893D, p0); }
static void _0x967278682CB6967A(int p0, int p1, int p2, int p3) { invoke<void *>(0x967278682CB6967A, p0, p1, p2, p3); }
static void _0x0A123435A26C36CD() { invoke<void *>(0x0A123435A26C36CD); }
static void REMOVE_DECAL(int decal) { invoke<void *>(0xED3F346429CCD659, decal); }
static bool IS_DECAL_ALIVE(int decal) { return invoke<bool>(0xC694D74949CAFD0C, decal); }
static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0x323F647679A09103, decal); }
static void _0xD9454B5752C857DC() { invoke<void *>(0xD9454B5752C857DC); }
static void _0x27CFB1B1E078CB2D() { invoke<void *>(0x27CFB1B1E078CB2D); }
static void _0x4B5CFC83122DF602() { invoke<void *>(0x4B5CFC83122DF602); }
static bool _0x2F09F7976C512404(float xCoord, float yCoord, float zCoord, float p3) { return invoke<bool>(0x2F09F7976C512404, xCoord, yCoord, zCoord, p3); }
static void _0x8A35C742130C6080(int p0, int *p1, int *p2) { invoke<void *>(0x8A35C742130C6080, p0, p1, p2); }
static void _0xB7ED70C49521A61D(int p0) { invoke<void *>(0xB7ED70C49521A61D, p0); }
static void MOVE_VEHICLE_DECALS(int p0, int p1) { invoke<void *>(0x84C8D7C2D30D3280, p0, p1); }
static bool _ADD_CLAN_DECAL_TO_VEHICLE(int vehicle, int ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, int p13, int alpha) { return invoke<bool>(0x428BDCB9DA58DA53, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); }
static void _0xD2300034310557E4(int vehicle, int p1) { invoke<void *>(0xD2300034310557E4, vehicle, p1); }
static int _0xFE26117A5841B2FF(int vehicle, int p1) { return invoke<int>(0xFE26117A5841B2FF, vehicle, p1); }
static bool _DOES_VEHICLE_HAVE_DECAL(int vehicle, int p1) { return invoke<bool>(0x060D935D3981A275, vehicle, p1); }
static void _0x0E4299C549F0D1F1(bool p0) { invoke<void *>(0x0E4299C549F0D1F1, p0); }
static void _0x02369D5C8A51FDCF(bool p0) { invoke<void *>(0x02369D5C8A51FDCF, p0); }
static void _0x46D1A61A21F566FC(float p0) { invoke<void *>(0x46D1A61A21F566FC, p0); }
static void _0x2A2A52824DB96700(int *p0) { invoke<void *>(0x2A2A52824DB96700, p0); }
static void _0x1600FD8CF72EBC12(float p0) { invoke<void *>(0x1600FD8CF72EBC12, p0); }
static void _0xEFB55E7C25D3B3BE() { invoke<void *>(0xEFB55E7C25D3B3BE); }
static void DISABLE_VEHICLE_DISTANTLIGHTS(bool toggle) { invoke<void *>(0xC9F98AC1884E73A2, toggle); }
static void _0x03300B57FCAC6DDB(bool p0) { invoke<void *>(0x03300B57FCAC6DDB, p0); }
static void SET_TIMECYCLE_MODIFIER(char *modifierName) { invoke<void *>(0x2C933ABF17A1DF41, modifierName); }
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<void *>(0x82E7FFCD5B2326B3, strength); }
static void SET_TRANSITION_TIMECYCLE_MODIFIER(char *modifierName, float transition) { invoke<void *>(0x3BCF567485E1971C, modifierName, transition); }
static void _0x1CBA05AE7BD7EE05(float p0) { invoke<void *>(0x1CBA05AE7BD7EE05, p0); }
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<void *>(0x0F07E7745A236711); }
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xFDF3D97C674AFB66); }
static int _0x459FD2C8D0AB78BC() { return invoke<int>(0x459FD2C8D0AB78BC); }
static void PUSH_TIMECYCLE_MODIFIER() { invoke<void *>(0x58F735290861E6B4); }
static void POP_TIMECYCLE_MODIFIER() { invoke<void *>(0x3C8938D7D872211E); }
static void _0xBBF327DED94E4DEB(char *p0) { invoke<void *>(0xBBF327DED94E4DEB, p0); }
static void _0xBDEB86F4D5809204(float p0) { invoke<void *>(0xBDEB86F4D5809204, p0); }
static void _0xBF59707B3E5ED531(char *p0) { invoke<void *>(0xBF59707B3E5ED531, p0); }
static void _0x1A8E2C8B9CF4549C(int *p0, int *p1) { invoke<void *>(0x1A8E2C8B9CF4549C, p0, p1); }
static void _0x15E33297C3E8DC60(int p0) { invoke<void *>(0x15E33297C3E8DC60, p0); }
static void _0x5096FD9CCB49056D(int *p0) { invoke<void *>(0x5096FD9CCB49056D, p0); }
static void _0x92CCC17A7A2285DA() { invoke<void *>(0x92CCC17A7A2285DA); }
static int REQUEST_SCALEFORM_MOVIE(char *scaleformName) { return invoke<int>(0x11FE353CF9733E6F, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(char *scaleformName) { return invoke<int>(0xC514489CFB8AF806, scaleformName); }
static bool HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<bool>(0x85F01B8D5B90570E, scaleformHandle); }
static bool HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<bool>(0x8217150E1217EBFD, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int *scaleformHandle) { invoke<void *>(0x1D132D614DD86811, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, bool toggle) { invoke<void *>(0x6D8EB211944DCE08, scaleform, toggle); }
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int unk) { invoke<void *>(0x54972ADAF0294A93, scaleformHandle, x, y, width, height, red, green, blue, alpha, unk); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int unk) { invoke<void *>(0x0DF606929C105BE1, scaleform, red, green, blue, alpha, unk); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<void *>(0xCF537FDE4FBD4CE5, scaleform1, scaleform2, red, green, blue, alpha); }
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int p13) { invoke<void *>(0x87D51D72255D4E78, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); }
static void _DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int p13) { invoke<void *>(0x1CE592FDC749D6F5, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); }
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, char *method) { invoke<void *>(0xFBD96D87AC96D533, scaleform, method); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, char *functionName, float param1, float param2, float param3, float param4, float param5) { invoke<void *>(0xD0837058AE2E4BEE, scaleform, functionName, param1, param2, param3, param4, param5); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, char *functionName, char *param1, char *param2, char *param3, char *param4, char *param5) { invoke<void *>(0x51BC1ED3CC44E8F7, scaleform, functionName, param1, param2, param3, param4, param5); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, char *functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, char *stringParam1, char *stringParam2, char *stringParam3, char *stringParam4, char *stringParam5) { invoke<void *>(0xEF662D8D57E290B1, scaleform, functionName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); }
static bool _PUSH_SCALEFORM_MOVIE_FUNCTION_FROM_HUD_COMPONENT(int hudComponent, char *functionName) { return invoke<bool>(0x98C494FD5BDFBFD5, hudComponent, functionName); }
static bool _PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, char *functionName) { return invoke<bool>(0xF6E48914C7A8694E, scaleform, functionName); }
static bool _PUSH_SCALEFORM_MOVIE_FUNCTION_N(char *functionName) { return invoke<bool>(0xAB58C27C2E6123C6, functionName); }
static bool _0xB9449845F73F5E9C(char *functionName) { return invoke<bool>(0xB9449845F73F5E9C, functionName); }
static void _POP_SCALEFORM_MOVIE_FUNCTION_VOID() { invoke<void *>(0xC6796A8FFA375E53); }
static int _POP_SCALEFORM_MOVIE_FUNCTION() { return invoke<int>(0xC50AA39A577AF886); }
static bool _0x768FF8961BA904D6(int funcData) { return invoke<bool>(0x768FF8961BA904D6, funcData); }
static int _0x2DE7EFA66B906036(int funcData) { return invoke<int>(0x2DE7EFA66B906036, funcData); }
static char *SITTING_TV(int scaleform) { return invoke<char *>(0xE1E258829A885245, scaleform); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(int value) { invoke<void *>(0xC3D0841A0CC546A6, value); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float value) { invoke<void *>(0xD69736AAE04DB51A, value); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_bool(bool value) { invoke<void *>(0xC58424BA936EB458, value); }
static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(char *componentType) { invoke<void *>(0x80338406F3475E55, componentType); }
static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<void *>(0x362E2D3FE93A9959); }
static void _END_TEXT_COMMAND_SCALEFORM_STRING_2() { invoke<void *>(0xAE4E8157D9ECF087); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(char *value) { invoke<void *>(0xBA7148484BD90365, value); }
static void _0xE83A3E3557A56640(char *button) { invoke<void *>(0xE83A3E3557A56640, button); }
static bool _0x5E657EF1099EDD65(int p0) { return invoke<bool>(0x5E657EF1099EDD65, p0); }
static void _0xEC52C631A1831C03(int p0) { invoke<void *>(0xEC52C631A1831C03, p0); }
static void _REQUEST_HUD_SCALEFORM(int hudComponent) { invoke<void *>(0x9304881D6F6537EA, hudComponent); }
static bool _HAS_HUD_SCALEFORM_LOADED(int hudComponent) { return invoke<bool>(0xDF6E5987D2B4D140, hudComponent); }
static void _0xF44A5456AC3F4F97(int p0) { invoke<void *>(0xF44A5456AC3F4F97, p0); }
static bool _0xD1C7CB175E012964(int scaleformHandle) { return invoke<bool>(0xD1C7CB175E012964, scaleformHandle); }
static void SET_TV_CHANNEL(int channel) { invoke<void *>(0xBAABBB23EB6E484E, channel); }
static int GET_TV_CHANNEL() { return invoke<int>(0xFC1E275A90D39995); }
static void SET_TV_VOLUME(float volume) { invoke<void *>(0x2982BF73F66E9DDC, volume); }
static float GET_TV_VOLUME() { return invoke<float>(0x2170813D3DD8661B); }
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<void *>(0xFDDC2B4ED3C69DF0, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); }
static void _0xF7B38B8305F1FE8B(int p0, char *p1, bool p2) { invoke<void *>(0xF7B38B8305F1FE8B, p0, p1, p2); }
static void _0x2201C576FACAEBE8(int p0, char *p1, int p2) { invoke<void *>(0x2201C576FACAEBE8, p0, p1, p2); }
static void _0xBEB3D46BB7F043C0(int p0) { invoke<void *>(0xBEB3D46BB7F043C0, p0); }
static bool _LOAD_TV_CHANNEL(int tvChannel) { return invoke<bool>(0x0AD973CA1E077B60, tvChannel); }
static void _0x74C180030FDE4B69(bool p0) { invoke<void *>(0x74C180030FDE4B69, p0); }
static void _0xD1C55B110E4DF534(int p0) { invoke<void *>(0xD1C55B110E4DF534, p0); }
static void ENABLE_MOVIE_SUBTITLES(bool toggle) { invoke<void *>(0x873FA65C778AD970, toggle); }
static bool _0xD3A10FC7FD8D98CD() { return invoke<bool>(0xD3A10FC7FD8D98CD); }
static bool _0xF1CEA8A4198D8E9A(char *p0) { return invoke<bool>(0xF1CEA8A4198D8E9A, p0); }
static bool _0x98C4FE6EC34154CA(char *p0, int ped, int p2, float posX, float posY, float posZ) { return invoke<bool>(0x98C4FE6EC34154CA, p0, ped, p2, posX, posY, posZ); }
static void _0x7A42B2E236E71415() { invoke<void *>(0x7A42B2E236E71415); }
static void _0x108BE26959A9D9BB(bool p0) { invoke<void *>(0x108BE26959A9D9BB, p0); }
static void _0xA356990E161C9E65(bool p0) { invoke<void *>(0xA356990E161C9E65, p0); }
static void _0x1C4FC5752BCD8E48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { invoke<void *>(0x1C4FC5752BCD8E48, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void _0x5CE62918F8D703C7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<void *>(0x5CE62918F8D703C7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _START_SCREEN_EFFECT(char *effectName, int duration, bool looped) { invoke<void *>(0x2206BF9A37B7F724, effectName, duration, looped); }
static void _STOP_SCREEN_EFFECT(char *effectName) { invoke<void *>(0x068E835A1D0DC0E3, effectName); }
static bool _GET_SCREEN_EFFECT_IS_ACTIVE(char *effectName) { return invoke<bool>(0x36AD3E690DA5ACEB, effectName); }
static void _STOP_ALL_SCREEN_EFFECTS() { invoke<void *>(0xB4EDDC19532BFB85); }
static int STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<int>(0xEB0A72181D4AA4AD, statSlot); }
static bool STAT_LOAD(int p0) { return invoke<bool>(0xA651443F437B1CE6, p0); }
static bool STAT_SAVE(int p0, bool p1, int p2) { return invoke<bool>(0xE07BCA305B82D2FD, p0, p1, p2); }
static void _0x5688585E6D563CD8(int p0) { invoke<void *>(0x5688585E6D563CD8, p0); }
static bool STAT_LOAD_PENDING(int p0) { return invoke<bool>(0xA1750FFAFA181661, p0); }
static int STAT_SAVE_PENDING() { return invoke<int>(0x7D3A583856F2C5AC); }
static int STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<int>(0xBBB6AD006F1BBEA3); }
static int STAT_DELETE_SLOT(int p0) { return invoke<int>(0x49A49BED12794D70, p0); }
static bool STAT_SLOT_IS_LOADED(int p0) { return invoke<bool>(0x0D0A9F0E7BD91E3C, p0); }
static bool _0x7F2C4CDF2E82DF4C(int p0) { return invoke<bool>(0x7F2C4CDF2E82DF4C, p0); }
static int _0xE496A53BA5F50A56(int p0) { return invoke<int>(0xE496A53BA5F50A56, p0); }
static void _0xF434A10BA01C37D0(bool p0) { invoke<void *>(0xF434A10BA01C37D0, p0); }
static bool _0x7E6946F68A38B74F(int p0) { return invoke<bool>(0x7E6946F68A38B74F, p0); }
static void _0xA8733668D1047B51(int p0) { invoke<void *>(0xA8733668D1047B51, p0); }
static bool _0xECB41AC6AB754401() { return invoke<bool>(0xECB41AC6AB754401); }
static int _0xC0E0D686DDFC6EAE() { return invoke<int>(0xC0E0D686DDFC6EAE); }
static bool STAT_SET_INT(int statName, int value, bool save) { return invoke<bool>(0xB3271D7AB655B441, statName, value, save); }
static bool STAT_SET_FLOAT(int statName, float value, bool save) { return invoke<bool>(0x4851997F37FE9B3C, statName, value, save); }
static bool STAT_SET_bool(int statName, bool value, bool save) { return invoke<bool>(0x4B33C4243DE0C432, statName, value, save); }
static bool STAT_SET_GXT_LABEL(int statName, char *value, bool save) { return invoke<bool>(0x17695002FD8B2AE0, statName, value, save); }
static bool STAT_SET_DATE(int statName, int *value, int numFields, bool save) { return invoke<bool>(0x2C29BFB64F4FCBE4, statName, value, numFields, save); }
static bool STAT_SET_STRING(int statName, char *value, bool save) { return invoke<bool>(0xA87B2335D12531D7, statName, value, save); }
static bool STAT_SET_POS(int statName, float x, float y, float z, bool save) { return invoke<bool>(0xDB283FDE680FE72E, statName, x, y, z, save); }
static bool STAT_SET_MASKED_INT(int statName, int p1, int p2, int p3, bool save) { return invoke<bool>(0x7BBB1B54583ED410, statName, p1, p2, p3, save); }
static bool STAT_SET_USER_ID(int statName, char *value, bool save) { return invoke<bool>(0x8CDDF1E452BABE11, statName, value, save); }
static bool STAT_SET_CURRENT_POSIX_TIME(int statName, bool p1) { return invoke<bool>(0xC2F84B7F9C4D0C61, statName, p1); }
static bool STAT_GET_INT(int statint, int *outValue, int p2) { return invoke<bool>(0x767FBC2AC802EF3D, statint, outValue, p2); }
static bool STAT_GET_FLOAT(int statint, float *outValue, int p2) { return invoke<bool>(0xD7AE6C9C9C6AC54C, statint, outValue, p2); }
static bool STAT_GET_bool(int statint, bool *outValue, int p2) { return invoke<bool>(0x11B5E6D2AE73F48E, statint, outValue, p2); }
static bool STAT_GET_DATE(int statint, int *p1, int p2, int p3) { return invoke<bool>(0x8B0FACEFC36C824B, statint, p1, p2, p3); }
static char *STAT_GET_STRING(int statint, int p1) { return invoke<char *>(0xE50384ACC2C3DB74, statint, p1); }
static bool STAT_GET_POS(int p0, int *p1, int *p2, int *p3, int p4) { return invoke<bool>(0x350F82CCB186AA1B, p0, p1, p2, p3, p4); }
static bool STAT_GET_MASKED_INT(int p0, int *p1, int p2, int p3, int p4) { return invoke<bool>(0x655185A06D9EEAAB, p0, p1, p2, p3, p4); }
static char *STAT_GET_USER_ID(int p0) { return invoke<char *>(0x2365C388E393BBE2, p0); }
static char *STAT_GET_LICENSE_PLATE(int statName) { return invoke<char *>(0x5473D4195058B2E4, statName); }
static bool STAT_SET_LICENSE_PLATE(int statName, char *str) { return invoke<bool>(0x69FF13266D7296DA, statName, str); }
static void STAT_INCREMENT(int statName, float value) { invoke<void *>(0x9B5A68C6489E9909, statName, value); }
static bool _0x5A556B229A169402() { return invoke<bool>(0x5A556B229A169402); }
static bool _0xB1D2BB1E1631F5B1() { return invoke<bool>(0xB1D2BB1E1631F5B1); }
static bool _0xBED9F5693F34ED17(int statName, int p1, float *outValue) { return invoke<bool>(0xBED9F5693F34ED17, statName, p1, outValue); }
static void _0x26D7399B9587FE89(int p0) { invoke<void *>(0x26D7399B9587FE89, p0); }
static void _0xA78B8FA58200DA56(int p0) { invoke<void *>(0xA78B8FA58200DA56, p0); }
static int STAT_GET_NUMBER_OF_DAYS(int statName) { return invoke<int>(0xE0E854F5280FB769, statName); }
static int STAT_GET_NUMBER_OF_HOURS(int statName) { return invoke<int>(0xF2D4B2FE415AAFC3, statName); }
static int STAT_GET_NUMBER_OF_MINUTES(int statName) { return invoke<int>(0x7583B4BE4C5A41B5, statName); }
static int STAT_GET_NUMBER_OF_SECONDS(int statName) { return invoke<int>(0x2CE056FF3723F00B, statName); }
static void _STAT_SET_PROFILE_SETTING(int profileSetting, int value) { invoke<void *>(0x68F01422BE1D838F, profileSetting, value); }
static int _0xF4D8E7AC2A27758C(int p0) { return invoke<int>(0xF4D8E7AC2A27758C, p0); }
static int _0x94F12ABF9C79E339(int p0) { return invoke<int>(0x94F12ABF9C79E339, p0); }
static int _GET_PSTAT_bool_HASH(int index, bool spStat, bool charStat, int character) { return invoke<int>(0x80C75307B1C42837, index, spStat, charStat, character); }
static int _GET_PSTAT_INT_HASH(int index, bool spStat, bool charStat, int character) { return invoke<int>(0x61E111E323419E07, index, spStat, charStat, character); }
static int _GET_TUPSTAT_bool_HASH(int index, bool spStat, bool charStat, int character) { return invoke<int>(0xC4BB08EE7907471E, index, spStat, charStat, character); }
static int _GET_TUPSTAT_INT_HASH(int index, bool spStat, bool charStat, int character) { return invoke<int>(0xD16C2AD6B8E32854, index, spStat, charStat, character); }
static bool STAT_GET_bool_MASKED(int statName, int mask, int p2) { return invoke<bool>(0x10FE3F1B79F9B071, statName, mask, p2); }
static bool STAT_SET_bool_MASKED(int statName, bool value, int mask, bool save) { return invoke<bool>(0x5BC62EC1937B9E5B, statName, value, mask, save); }
static void _0x5009DFD741329729(char *p0, int p1) { invoke<void *>(0x5009DFD741329729, p0, p1); }
static void PLAYSTATS_NPC_INVITE(int *p0) { invoke<void *>(0x93054C88E6AA7C44, p0); }
static void PLAYSTATS_AWARD_XP(int p0, int p1, int p2) { invoke<void *>(0x46F917F6B4128FE4, p0, p1, p2); }
static void PLAYSTATS_RANK_UP(int p0) { invoke<void *>(0xC7F2DE41D102BFB4, p0); }
static void _0x098760C7461724CD() { invoke<void *>(0x098760C7461724CD); }
static void _0xA071E0ED98F91286(int p0, int p1) { invoke<void *>(0xA071E0ED98F91286, p0, p1); }
static void _0xC5BE134EC7BA96A0(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0xC5BE134EC7BA96A0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_STARTED(int *p0, int p1, int p2, bool p3) { invoke<void *>(0xC19A2925C34D2231, p0, p1, p2, p3); }
static void PLAYSTATS_MISSION_OVER(int *p0, int p1, int p2, bool p3, bool p4, bool p5) { invoke<void *>(0x7C4BB33A8CED7324, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MISSION_CHECKPOINT(int *p0, int p1, int p2, int p3) { invoke<void *>(0xC900596A63978C1D, p0, p1, p2, p3); }
static void _0x71862B1D855F32E1(int *p0, int p1, int p2, int p3) { invoke<void *>(0x71862B1D855F32E1, p0, p1, p2, p3); }
static void _0x121FB4DDDC2D5291(int p0, int p1, int p2, float p3) { invoke<void *>(0x121FB4DDDC2D5291, p0, p1, p2, p3); }
static void PLAYSTATS_RACE_CHECKPOINT(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x9C375C315099DDE4, p0, p1, p2, p3, p4); }
static bool _0x6DEE77AFF8C21BD1(int *p0, int *p1) { return invoke<bool>(0x6DEE77AFF8C21BD1, p0, p1); }
static void PLAYSTATS_MATCH_STARTED(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void *>(0xBC80E22DED931E3D, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_SHOP_ITEM(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x176852ACAAC173D1, p0, p1, p2, p3, p4); }
static void _0x1CAE5D2E3F9A07F0(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0x1CAE5D2E3F9A07F0, p0, p1, p2, p3, p4, p5); }
static void _0xCB00196B31C39EB1(int p0, int p1, int p2, int p3) { invoke<void *>(0xCB00196B31C39EB1, p0, p1, p2, p3); }
static void _0x2B69F5074C894811(int p0, int p1, int p2, int p3) { invoke<void *>(0x2B69F5074C894811, p0, p1, p2, p3); }
static void _0x7EEC2A316C250073(int p0, int p1, int p2) { invoke<void *>(0x7EEC2A316C250073, p0, p1, p2); }
static void _0xADDD1C754E2E2914(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) { invoke<void *>(0xADDD1C754E2E2914, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void _0x79AB33F0FBFAC40C(int p0) { invoke<void *>(0x79AB33F0FBFAC40C, p0); }
static void PLAYSTATS_WEBSITE_VISITED(int scaleformint, int p1) { invoke<void *>(0xDDF24D535060F811, scaleformint, p1); }
static void PLAYSTATS_FRIEND_ACTIVITY(int p0, int p1) { invoke<void *>(0x0F71DE29AB2258F1, p0, p1); }
static void PLAYSTATS_ODDJOB_DONE(int p0, int p1, int p2) { invoke<void *>(0x69DEA3E9DB727B4C, p0, p1, p2); }
static void PLAYSTATS_PROP_CHANGE(int p0, int p1, int p2, int p3) { invoke<void *>(0xBA739D6D5A05D6E7, p0, p1, p2, p3); }
static void PLAYSTATS_CLOTH_CHANGE(int p0, int p1, int p2, int p3, int p4) { invoke<void *>(0x34B973047A2268B9, p0, p1, p2, p3, p4); }
static void _0xE95C8A1875A02CA4(int p0, int p1, int p2) { invoke<void *>(0xE95C8A1875A02CA4, p0, p1, p2); }
static void PLAYSTATS_CHEAT_APPLIED(char *cheat) { invoke<void *>(0x6058665D72302D3F, cheat); }
static void _0xF8C54A461C3E11DC(int *p0, int *p1, int *p2, int *p3) { invoke<void *>(0xF8C54A461C3E11DC, p0, p1, p2, p3); }
static void _0xA736CF7FB7C5BFF4(int *p0, int *p1, int *p2, int *p3) { invoke<void *>(0xA736CF7FB7C5BFF4, p0, p1, p2, p3); }
static void _0x14E0B2D1AD1044E0(int *p0, int *p1, int *p2, int *p3) { invoke<void *>(0x14E0B2D1AD1044E0, p0, p1, p2, p3); }
static void _0x90D0622866E80445(int p0, char *p1) { invoke<void *>(0x90D0622866E80445, p0, p1); }
static void _0x5DA3A8DE8CB6226F(int time) { invoke<void *>(0x5DA3A8DE8CB6226F, time); }
static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, int p1) { return invoke<int>(0x117B45156D7EFF2E, p0, p1); }
static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0xC4B5467A1886EA7E, p0, p1, p2); }
static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, int p1, int p2) { return invoke<int>(0xBF4FEF46DB7894D3, p0, p1, p2); }
static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0xA34CB6E6F0DF4A0B); }
static int LEADERBOARDS_READ_CLEAR(int p0, int p1, int p2) { return invoke<int>(0x7CCE5C737A665701, p0, p1, p2); }
static bool LEADERBOARDS_READ_PENDING(int p0, int p1, int p2) { return invoke<bool>(0xAC392C8483342AC2, p0, p1, p2); }
static int _0xA31FD15197B192BD() { return invoke<int>(0xA31FD15197B192BD); }
static bool LEADERBOARDS_READ_SUCCESSFUL(int p0, int p1, int p2) { return invoke<bool>(0x2FB19228983E832C, p0, p1, p2); }
static bool LEADERBOARDS2_READ_FRIENDS_BY_ROW(int *p0, int *p1, int p2, bool p3, int p4, int p5) { return invoke<bool>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); }
static bool LEADERBOARDS2_READ_BY_HANDLE(int *p0, int *p1) { return invoke<bool>(0xC30713A383BFBF0E, p0, p1); }
static bool LEADERBOARDS2_READ_BY_ROW(int *p0, int *p1, int p2, int *p3, int p4, int *p5, int p6) { return invoke<bool>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); }
static bool LEADERBOARDS2_READ_BY_RANK(int *p0, int p1, int p2) { return invoke<bool>(0xBA2C7DB0C129449A, p0, p1, p2); }
static bool LEADERBOARDS2_READ_BY_RADIUS(int *p0, int p1, int *p2) { return invoke<bool>(0x5CE587FB5A42C8C4, p0, p1, p2); }
static bool LEADERBOARDS2_READ_BY_SCORE_INT(int *p0, int p1, int p2) { return invoke<bool>(0x7EEC7E4F6984A16A, p0, p1, p2); }
static bool LEADERBOARDS2_READ_BY_SCORE_FLOAT(int *p0, float p1, int p2) { return invoke<bool>(0xE662C8B759D08F3C, p0, p1, p2); }
static bool _0xC38DC1E90D22547C(int *p0, int *p1, int *p2) { return invoke<bool>(0xC38DC1E90D22547C, p0, p1, p2); }
static bool _0xA0F93D5465B3094D(int *p0) { return invoke<bool>(0xA0F93D5465B3094D, p0); }
static void _0x71B008056E5692D6() { invoke<void *>(0x71B008056E5692D6); }
static bool _0x34770B9CE0E03B91(int p0, int *p1) { return invoke<bool>(0x34770B9CE0E03B91, p0, p1); }
static int _0x88578F6EC36B4A3A(int p0, int p1) { return invoke<int>(0x88578F6EC36B4A3A, p0, p1); }
static float _0x38491439B6BA7F7D(int p0, int p1) { return invoke<float>(0x38491439B6BA7F7D, p0, p1); }
static bool LEADERBOARDS2_WRITE_DATA(int *p0) { return invoke<bool>(0xAE2206545888AE49, p0); }
static void _0x0BCA1D2C47B0D269(int p0, int p1, float p2) { invoke<void *>(0x0BCA1D2C47B0D269, p0, p1, p2); }
static void _0x2E65248609523599(int p0, int p1, int p2) { invoke<void *>(0x2E65248609523599, p0, p1, p2); }
static bool LEADERBOARDS_CACHE_DATA_ROW(int *p0) { return invoke<bool>(0xB9BB18E2C40142ED, p0); }
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<void *>(0xD4B02A6B476E1FDC); }
static void _0x8EC74CEB042E7CFF(int p0) { invoke<void *>(0x8EC74CEB042E7CFF, p0); }
static bool LEADERBOARDS_GET_CACHE_EXISTS(int p0) { return invoke<bool>(0x9C51349BE6CDFE2C, p0); }
static int LEADERBOARDS_GET_CACHE_TIME(int p0) { return invoke<int>(0xF04C1C27DA35F6C8, p0); }
static int _0x58A651CD201D89AD(int p0) { return invoke<int>(0x58A651CD201D89AD, p0); }
static bool LEADERBOARDS_GET_CACHE_DATA_ROW(int p0, int p1, int *p2) { return invoke<bool>(0x9120E8DBA3D69273, p0, p1, p2); }
static void _0x11FF1C80276097ED(char *p0, int p1, int p2) { invoke<void *>(0x11FF1C80276097ED, p0, p1, p2); }
static void _0x30A6614C1F7799B8(int p0, float p1, int p2) { invoke<void *>(0x30A6614C1F7799B8, p0, p1, p2); }
static void _0x6483C25849031C4F(int p0, int p1, int p2, int *p3) { invoke<void *>(0x6483C25849031C4F, p0, p1, p2, p3); }
static bool _0x5EAD2BF6484852E4() { return invoke<bool>(0x5EAD2BF6484852E4); }
static void _0xC141B8917E0017EC() { invoke<void *>(0xC141B8917E0017EC); }
static void _0xB475F27C6A994D65() { invoke<void *>(0xB475F27C6A994D65); }
static void _0xF1A1803D3476F215(int value) { invoke<void *>(0xF1A1803D3476F215, value); }
static void _0x38BAAA5DD4C9D19F(int value) { invoke<void *>(0x38BAAA5DD4C9D19F, value); }
static void _0x55384438FC55AD8E(int value) { invoke<void *>(0x55384438FC55AD8E, value); }
static void _0x723C1CE13FBFDB67(int p0, int p1) { invoke<void *>(0x723C1CE13FBFDB67, p0, p1); }
static void _0x0D01D20616FC73FB(int p0, int p1) { invoke<void *>(0x0D01D20616FC73FB, p0, p1); }
static void _0x428EAF89E24F6C36(int p0, float p1) { invoke<void *>(0x428EAF89E24F6C36, p0, p1); }
static void _0x047CBED6F6F8B63C() { invoke<void *>(0x047CBED6F6F8B63C); }
static bool _0xC980E62E33DF1D5C(int *p0, int *p1) { return invoke<bool>(0xC980E62E33DF1D5C, p0, p1); }
static void _0x6F361B8889A792A3() { invoke<void *>(0x6F361B8889A792A3); }
static int _0xC70DDCE56D0D3A99() { return invoke<int>(0xC70DDCE56D0D3A99); }
static int _0x886913BBEACA68C1(int *p0) { return invoke<int>(0x886913BBEACA68C1, p0); }
static void ADD_SCRIPT_TO_RANDOM_PED(char *name, int model, float p2, float p3) { invoke<void *>(0x4EE5367468A65CCC, name, model, p2, p3); }
static void REGISTER_OBJECT_SCRIPT_BRAIN(char *scriptName, int objectName, int p2, float p3, int p4, int p5) { invoke<void *>(0x0BE84C318BA6EC22, scriptName, objectName, p2, p3, p4, p5); }
static bool IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(int object) { return invoke<bool>(0xCCBA154209823057, object); }
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(int *p0, float p1, int p2) { invoke<void *>(0x3CDC7136613284BD, p0, p1, p2); }
static bool IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<bool>(0xC5042CC6F5E3D450); }
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<void *>(0x67AA4D73F0CFA86B, brainSet); }
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<void *>(0x14D8518E9760F08F, brainSet); }
static void _0x0B40ED49D7D6FF84() { invoke<void *>(0x0B40ED49D7D6FF84); }
static void _0x4D953DF78EBF8158() { invoke<void *>(0x4D953DF78EBF8158); }
static void _0x6D6840CEE8845831(char *action) { invoke<void *>(0x6D6840CEE8845831, action); }
static void _0x6E91B04E08773030(char *action) { invoke<void *>(0x6E91B04E08773030, action); }
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<void *>(0xA4E8E696C532FBC7, phoneType); }
static void DESTROY_MOBILE_PHONE() { invoke<void *>(0x3BC861DF703E5097); }
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<void *>(0xCBDD322A73D6D932, scale); }
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, int p3) { invoke<void *>(0xBB779C0CA917E865, rotX, rotY, rotZ, p3); }
static void GET_MOBILE_PHONE_ROTATION(Vector3 *rotation, int p1) { invoke<void *>(0x1CEFB61F193070AE, rotation, p1); }
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<void *>(0x693A5C6D6734085B, posX, posY, posZ); }
static void GET_MOBILE_PHONE_POSITION(Vector3 *position) { invoke<void *>(0x584FDFDA48805B86, position); }
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(bool toggle) { invoke<void *>(0xF511F759238A5122, toggle); }
static bool CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<bool>(0xC4E2813898C97A4B); }
static void CELL_CAM_ACTIVATE(bool p0, bool p1) { invoke<void *>(0xFDE8F069C542D126, p0, p1); }
static void _DISABLE_PHONE_THIS_FRAME(bool toggle) { invoke<void *>(0x015C49A93E3E086E, toggle); }
static void _0xA2CCBE62CD4C91A4(int *toggle) { invoke<void *>(0xA2CCBE62CD4C91A4, toggle); }
static void _0x466DA42C89865553(float p0) { invoke<void *>(0x466DA42C89865553, p0); }
static bool CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(int entity) { return invoke<bool>(0x439E9BC95B7E7FBE, entity); }
static void GET_MOBILE_PHONE_RENDER_ID(int *renderId) { invoke<void *>(0xB4A53E05F68B6FA1, renderId); }
static bool APP_DATA_VALID() { return invoke<bool>(0x846AA8E7D55EE5B6); }
static int APP_GET_INT(char *property) { return invoke<int>(0xD3A58A12C77D9D4B, property); }
static float APP_GET_FLOAT(char *property) { return invoke<float>(0x1514FB24C02C2322, property); }
static char *APP_GET_STRING(char *property) { return invoke<char *>(0x749B023950D2311C, property); }
static void APP_SET_INT(char *property, int value) { invoke<void *>(0x607E8E3D3E4F9611, property, value); }
static void APP_SET_FLOAT(char *property, float value) { invoke<void *>(0x25D7687C68E0DAA4, property, value); }
static void APP_SET_STRING(char *property, char *value) { invoke<void *>(0x3FF2FCEC4B7721B4, property, value); }
static void APP_SET_APP(char *appName) { invoke<void *>(0xCFD0406ADAF90D2B, appName); }
static void APP_SET_BLOCK(char *blockName) { invoke<void *>(0x262AB456A3D21F93, blockName); }
static void APP_CLEAR_BLOCK() { invoke<void *>(0x5FE1DF3342DB7DBA); }
static void APP_CLOSE_APP() { invoke<void *>(0xE41C65E07A5F05FC); }
static void APP_CLOSE_BLOCK() { invoke<void *>(0xE8E3FCF72EAC0EF8); }
static bool APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<bool>(0x71EEE69745088DA0); }
static bool APP_HAS_SYNCED_DATA(char *appName) { return invoke<bool>(0xCA52279A7271517F, appName); }
static void APP_SAVE_DATA() { invoke<void *>(0x95C5D356CDA6E85F); }
static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0xC9853A2BE3DED1A6); }
static bool APP_DELETE_APP_DATA(char *appName) { return invoke<bool>(0x44151AEA95C8A003, appName); }
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<void *>(0x47C3B5848C3E45D8, hour, minute, second); }
static void PAUSE_CLOCK(bool toggle) { invoke<void *>(0x4055E40BD2DBEC1D, toggle); }
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<void *>(0xC8CA9670B9D83B3B, hour, minute, second); }
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<void *>(0xD716F30D8C8980E2, hours, minutes, seconds); }
static int GET_CLOCK_HOURS() { return invoke<int>(0x25223CA6B4D20B7F); }
static int GET_CLOCK_MINUTES() { return invoke<int>(0x13D2B8ADD79640F2); }
static int GET_CLOCK_SECONDS() { return invoke<int>(0x494E97C2EF27C470); }
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<void *>(0xB096419DF0D06CE7, day, month, year); }
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xD972E4BD7AEB235F); }
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x3D10BC92A4DB1D35); }
static int GET_CLOCK_MONTH() { return invoke<int>(0xBBC72712E80257A1); }
static int GET_CLOCK_YEAR() { return invoke<int>(0x961777E64BDAF717); }
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x2F8B4D1C595B11DB); }
static void GET_POSIX_TIME(int *year, int *month, int *day, int *hour, int *minute, int *second) { invoke<void *>(0xDA488F299A5B164E, year, month, day, hour, minute, second); }
static void GET_LOCAL_TIME(int *year, int *month, int *day, int *hour, int *minute, int *second) { invoke<void *>(0x50C7A99057A69748, year, month, day, hour, minute, second); }
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown1, bool unknown2) { invoke<void *>(0xBF1A602B5BA52FEE, x1, y1, z1, x2, y2, z2, unknown1, unknown2); }
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, bool unknown1, bool unknown2, bool unknown3) { invoke<void *>(0x1A5AA1208AF5DB59, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); }
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown) { invoke<void *>(0x34F060F4BF92E018, x1, y1, z1, x2, y2, z2, unknown); }
static bool GET_SAFE_COORD_FOR_PED(float x, float y, float z, bool onGround, Vector3 *outPosition, int flags) { return invoke<bool>(0xB61C8E878A4199CA, x, y, z, onGround, outPosition, flags); }
static bool GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3 *outPosition, int nodeType, float p5, float p6) { return invoke<bool>(0x240A18690AE96513, x, y, z, outPosition, nodeType, p5, p6); }
static bool GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3 *outPosition, float unknown1, int unknown2) { return invoke<bool>(0x2EABE3B06F58C1BE, x, y, z, outPosition, unknown1, unknown2); }
static bool GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3 *outPosition, float *outHeading, int nodeType, float p6, int p7) { return invoke<bool>(0xFF071FB798B803B0, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
static bool GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3 *outPosition, int unknown1, int unknown2, int unknown3) { return invoke<bool>(0xE50E52416CCF948B, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return invoke<int>(0x22D7275A79FE8215, x, y, z, nth, nodetype, p5, p6); }
static bool GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3 *outPosition, float *heading, int *unknown1, int unknown2, float unknown3, float unknown4) { return invoke<bool>(0x80CA6A8B6C094CC4, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3 *outPosition, float outHeading, int p6, float p7, float p8) { return invoke<int>(0x6448050E9C2A7207, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); }
static bool GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3 *outPosition, float *outHeading, int nodetype, int p10, int p11) { return invoke<bool>(0x45905BE8654AE067, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodetype, p10, p11); }
static bool GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int *density, int *flags) { return invoke<bool>(0x0568566ACBB5DEDC, x, y, z, density, flags); }
static bool IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<bool>(0x1EAF30FCFBF5AF74, vehicleNodeId); }
static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3 *outPosition) { invoke<void *>(0x703123E5E7D429C2, nodeId, outPosition); }
static bool _GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) { return invoke<bool>(0xA2AE5C478B96E3B6, nodeID); }
static bool _GET_IS_SLOW_ROAD_FLAG(int nodeID) { return invoke<bool>(0x4F5070AA58F69279, nodeID); }
static int GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3 *p5, Vector3 *p6, int *p7, int *p8, float *p9, bool p10) { return invoke<int>(0x132F52BBA570FE92, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
static bool LOAD_ALL_PATH_NODES(bool keepInMemory) { return invoke<bool>(0x80E4A6EDDB0BE8D9, keepInMemory); }
static void _0x228E5C6AD4D74BFD(bool p0) { invoke<void *>(0x228E5C6AD4D74BFD, p0); }
static bool _0xF7B79A50B905A30D(float p0, float p1, float p2, float p3) { return invoke<bool>(0xF7B79A50B905A30D, p0, p1, p2, p3); }
static bool _0x07FB139B592FA687(float p0, float p1, float p2, float p3) { return invoke<bool>(0x07FB139B592FA687, p0, p1, p2, p3); }
static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<void *>(0x1EE7063B80FFC77C, p0, p1, p2, p3, p4, p5); }
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) { invoke<void *>(0x0027501B9F3B407E, x1, y1, z1, x2, y2, z2, p6); }
static void _0x0B919E1FB47CC4E0(float p0) { invoke<void *>(0x0B919E1FB47CC4E0, p0); }
static void _0xAA76052DDA9BFC3E(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void *>(0xAA76052DDA9BFC3E, p0, p1, p2, p3, p4, p5, p6); }
static void SET_PED_PATHS_BACK_TO_ORIGINAL(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0xE04B48F2CC926253, p0, p1, p2, p3, p4, p5); }
static bool GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, bool p4, bool p5, bool p6, Vector3 *outPosition, int *nodeId) { return invoke<bool>(0x93E0DB8440B73A7D, x, y, z, radius, p4, p5, p6, outPosition, nodeId); }
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, int *streetName, int *crossingRoad) { invoke<void *>(0x2EB41072B4C1E4C0, x, y, z, streetName, crossingRoad); }
static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, bool p3, float *direction, float *p5, float *distToNxJunction) { return invoke<int>(0xF90125F1F79ECDF8, x, y, z, p3, direction, p5, distToNxJunction); }
static void SET_IGNORE_NO_GPS_FLAG(bool ignore) { invoke<void *>(0x72751156E7678833, ignore); }
static void _0x1FC289A0C3FF470F(bool p0) { invoke<void *>(0x1FC289A0C3FF470F, p0); }
static void SET_GPS_DISABLED_ZONE(int p0, int p1, int p2, int p3, int p4, int p5) { invoke<void *>(0xDC20483CD3DD5201, p0, p1, p2, p3, p4, p5); }
static int _0xBBB45C3CF5C8AA85() { return invoke<int>(0xBBB45C3CF5C8AA85); }
static int _0x869DAACBBE9FA006() { return invoke<int>(0x869DAACBBE9FA006); }
static int _0x16F46FB18C8009E4(int p0, int p1, int p2, int p3, int p4) { return invoke<int>(0x16F46FB18C8009E4, p0, p1, p2, p3, p4); }
static bool IS_POINT_ON_ROAD(float x, float y, float z, int vehicle) { return invoke<bool>(0x125BF4ABFC536B09, x, y, z, vehicle); }
static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<void *>(0x387EAD7EE42F6685, x, y, radius); }
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<void *>(0x916F0A3CDEC3445E); }
static void DISABLE_NAVMESH_IN_AREA(int p0, int p1, int p2, int p3, int p4, int p5, int p6) { invoke<void *>(0x4C8872D8CDBE1B8B, p0, p1, p2, p3, p4, p5, p6); }
static bool ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<bool>(0x8415D95B194A3AEA); }
static bool IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<bool>(0xF813C7E63F9062A5, x1, y1, z1, x2, y2, z2); }
static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, int p8) { return invoke<int>(0xFCD5C8E06E502F5A, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void UPDATE_NAVMESH_BLOCKING_OBJECT(int p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8) { invoke<void *>(0x109E99373F290687, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_NAVMESH_BLOCKING_OBJECT(int p0) { invoke<void *>(0x46399A7895957C0E, p0); }
static bool DOES_NAVMESH_BLOCKING_OBJECT_EXIST(int p0) { return invoke<bool>(0x0EAEB0DB4B132399, p0); }
static float _0x29C24BFBED8AB8FB(float p0, float p1) { return invoke<float>(0x29C24BFBED8AB8FB, p0, p1); }
static float _0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3) { return invoke<float>(0x8ABE8608576D9CE3, p0, p1, p2, p3); }
static float _0x336511A34F2E5185(float left, float right) { return invoke<float>(0x336511A34F2E5185, left, right); }
static float _0x3599D741C9AC6310(float p0, float p1, float p2, float p3) { return invoke<float>(0x3599D741C9AC6310, p0, p1, p2, p3); }
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xADD95C7005C4A197, x1, y1, z1, x2, y2, z2); }
static bool IS_CONTROL_ENABLED(int inputGroup, int control) { return invoke<bool>(0x1CEA6BFDF248E5D9, inputGroup, control); }
static bool IS_CONTROL_PRESSED(int inputGroup, int control) { return invoke<bool>(0xF3A21BCD95725A4A, inputGroup, control); }
static bool IS_CONTROL_RELEASED(int inputGroup, int control) { return invoke<bool>(0x648EE3E7F38877DD, inputGroup, control); }
static bool IS_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<bool>(0x580417101DDB492F, inputGroup, control); }
static bool IS_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<bool>(0x50F940259D3841E6, inputGroup, control); }
static int GET_CONTROL_VALUE(int inputGroup, int control) { return invoke<int>(0xD95E79E8686D2C27, inputGroup, control); }
static float GET_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0xEC3C9B8D5327B563, inputGroup, control); }
static float _0x5B84D09CEC5209C5(int inputGroup, int control) { return invoke<float>(0x5B84D09CEC5209C5, inputGroup, control); }
static bool IS_DISABLED_CONTROL_PRESSED(int inputGroup, int control) { return invoke<bool>(0xE2587F8CBBD87B1D, inputGroup, control); }
static bool IS_DISABLED_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<bool>(0x91AEF906BCA88877, inputGroup, control); }
static bool IS_DISABLED_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<bool>(0x305C8DCD79DA8B0F, inputGroup, control); }
static float GET_DISABLED_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0x11E65974A982637C, inputGroup, control); }
static float _0x4F8A26A890FD62FB(int inputGroup, int control) { return invoke<float>(0x4F8A26A890FD62FB, inputGroup, control); }
static int _0xD7D22F5592AED8BA(int p0) { return invoke<int>(0xD7D22F5592AED8BA, p0); }
static char *GET_CONTROL_INSTRUCTIONAL_BUTTON(int inputGroup, int control, bool p2) { return invoke<char *>(0x0499D7B09FC9B407, inputGroup, control, p2); }
static char *_0x80C2FD58D720C801(int inputGroup, int control, bool p2) { return invoke<char *>(0x80C2FD58D720C801, inputGroup, control, p2); }
static void SET_PAD_SHAKE(int p0, int duration, int frequency) { invoke<void *>(0x48B3886C1358D0D5, p0, duration, frequency); }
static void STOP_PAD_SHAKE(int p0) { invoke<void *>(0x38C16A305E8CDC8D, p0); }
static void _0xF239400E16C23E08(int p0, int p1) { invoke<void *>(0xF239400E16C23E08, p0, p1); }
static bool IS_LOOK_INVERTED() { return invoke<bool>(0x77B612531280010D); }
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xBB41AFBBBC0A0287); }
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(bool toggle) { invoke<void *>(0x798FDEB5B1575088, toggle); }
static void SET_INPUT_EXCLUSIVE(int inputGroup, int control) { invoke<void *>(0xEDE476E5EE29EDB1, inputGroup, control); }
static void DISABLE_CONTROL_ACTION(int inputGroup, int control, bool disable) { invoke<void *>(0xFE99B66D079CF6BC, inputGroup, control, disable); }
static void ENABLE_CONTROL_ACTION(int inputGroup, int control, bool enable) { invoke<void *>(0x351220255D64C155, inputGroup, control, enable); }
static void DISABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<void *>(0x5F4B6931816E599B, inputGroup); }
static void ENABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<void *>(0xA5FFE9B05F199DE7, inputGroup); }
static bool _0x3D42B92563939375(char *p0) { return invoke<bool>(0x3D42B92563939375, p0); }
static bool _0x4683149ED1DDE7A1(char *p0) { return invoke<bool>(0x4683149ED1DDE7A1, p0); }
static void _0x643ED62D5EA3BEBD() { invoke<void *>(0x643ED62D5EA3BEBD); }
static void _DISABLE_INPUT_GROUP(int inputGroup) { invoke<void *>(0x7F4724035FDCA1DD, inputGroup); }
static void _0xAD6875BBC0FC899C(int p0) { invoke<void *>(0xAD6875BBC0FC899C, p0); }
static bool _0x22DA66936E0FFF37(int p0) { return invoke<bool>(0x22DA66936E0FFF37, p0); }
static bool _0x8F5EA1C01D65A100(int p0) { return invoke<bool>(0x8F5EA1C01D65A100, p0); }
static bool _0xC84527E235FCA219(char *p0, bool p1, char *p2, int *p3, int *p4, char *type, bool p6) { return invoke<bool>(0xC84527E235FCA219, p0, p1, p2, p3, p4, type, p6); }
static bool _0xA5EFC3E847D60507(char *p0, char *p1, char *p2, char *p3, bool p4) { return invoke<bool>(0xA5EFC3E847D60507, p0, p1, p2, p3, p4); }
static bool _0x648E7A5434AF7969(char *p0, int *p1, bool p2, int *p3, int *p4, int *p5, char *type) { return invoke<bool>(0x648E7A5434AF7969, p0, p1, p2, p3, p4, p5, type); }
static bool _0x4645DE9980999E93(char *p0, char *p1, char *p2, char *p3, char *type) { return invoke<bool>(0x4645DE9980999E93, p0, p1, p2, p3, type); }
static bool _0x692D808C34A82143(char *p0, float p1, char *type) { return invoke<bool>(0x692D808C34A82143, p0, p1, type); }
static bool _0xA69AC4ADE82B57A4(int p0) { return invoke<bool>(0xA69AC4ADE82B57A4, p0); }
static bool _0x9CB0BFA7A9342C3D(int p0, bool p1) { return invoke<bool>(0x9CB0BFA7A9342C3D, p0, p1); }
static bool _0x52818819057F2B40(int p0) { return invoke<bool>(0x52818819057F2B40, p0); }
static bool _0x01095C95CD46B624(int p0) { return invoke<bool>(0x01095C95CD46B624, p0); }
static bool _LOAD_UGC_FILE(char *filename) { return invoke<bool>(0xC5238C011AF405E4, filename); }
static void DATAFILE_CREATE() { invoke<void *>(0xD27058A1CA2B13EE); }
static void DATAFILE_DELETE() { invoke<void *>(0x9AB9C1CFC8862DFB); }
static void _0x2ED61456317B8178() { invoke<void *>(0x2ED61456317B8178); }
static void _0xC55854C7D7274882() { invoke<void *>(0xC55854C7D7274882); }
static char *DATAFILE_GET_FILE_DICT() { return invoke<char *>(0x906B778CA1DC72B6); }
static bool _0x83BCCE3224735F05(char *filename) { return invoke<bool>(0x83BCCE3224735F05, filename); }
static bool _0x4DFDD9EB705F8140(bool *p0) { return invoke<bool>(0x4DFDD9EB705F8140, p0); }
static bool DATAFILE_IS_SAVE_PENDING() { return invoke<bool>(0xBEDB96A7584AA8CF); }
static void _OBJECT_VALUE_ADD_boolEAN(int *objectData, char *key, bool value) { invoke<void *>(0x35124302A556A325, objectData, key, value); }
static void _OBJECT_VALUE_ADD_INTEGER(int *objectData, char *key, int value) { invoke<void *>(0xE7E035450A7948D5, objectData, key, value); }
static void _OBJECT_VALUE_ADD_FLOAT(int *objectData, char *key, float value) { invoke<void *>(0xC27E1CC2D795105E, objectData, key, value); }
static void _OBJECT_VALUE_ADD_STRING(int *objectData, char *key, char *value) { invoke<void *>(0x8FF3847DADD8E30C, objectData, key, value); }
static void _OBJECT_VALUE_ADD_VECTOR3(int *objectData, char *key, float valueX, float valueY, float valueZ) { invoke<void *>(0x4CD49B76338C7DEE, objectData, key, valueX, valueY, valueZ); }
static int *_OBJECT_VALUE_ADD_OBJECT(int *objectData, char *key) { return invoke<int *>(0xA358F56F10732EE1, objectData, key); }
static int *_OBJECT_VALUE_ADD_ARRAY(int *objectData, char *key) { return invoke<int *>(0x5B11728527CA6E5F, objectData, key); }
static bool _OBJECT_VALUE_GET_boolEAN(int *objectData, char *key) { return invoke<bool>(0x1186940ED72FFEEC, objectData, key); }
static int _OBJECT_VALUE_GET_INTEGER(int *objectData, char *key) { return invoke<int>(0x78F06F6B1FB5A80C, objectData, key); }
static float _OBJECT_VALUE_GET_FLOAT(int *objectData, char *key) { return invoke<float>(0x06610343E73B9727, objectData, key); }
static char *_OBJECT_VALUE_GET_STRING(int *objectData, char *key) { return invoke<char *>(0x3D2FD9E763B24472, objectData, key); }
static Vector3 _OBJECT_VALUE_GET_VECTOR3(int *objectData, char *key) { return invoke<Vector3>(0x46CD3CB66E0825CC, objectData, key); }
static int *_OBJECT_VALUE_GET_OBJECT(int *objectData, char *key) { return invoke<int *>(0xB6B9DDC412FCEEE2, objectData, key); }
static int *_OBJECT_VALUE_GET_ARRAY(int *objectData, char *key) { return invoke<int *>(0x7A983AA9DA2659ED, objectData, key); }
static int _OBJECT_VALUE_GET_TYPE(int *objectData, char *key) { return invoke<int>(0x031C55ED33227371, objectData, key); }
static void _ARRAY_VALUE_ADD_boolEAN(int *arrayData, bool value) { invoke<void *>(0xF8B0F5A43E928C76, arrayData, value); }
static void _ARRAY_VALUE_ADD_INTEGER(int *arrayData, int value) { invoke<void *>(0xCABDB751D86FE93B, arrayData, value); }
static void _ARRAY_VALUE_ADD_FLOAT(int *arrayData, float value) { invoke<void *>(0x57A995FD75D37F56, arrayData, value); }
static void _ARRAY_VALUE_ADD_STRING(int *arrayData, char *value) { invoke<void *>(0x2F0661C155AEEEAA, arrayData, value); }
static void _ARRAY_VALUE_ADD_VECTOR3(int *arrayData, float valueX, float valueY, float valueZ) { invoke<void *>(0x407F8D034F70F0C2, arrayData, valueX, valueY, valueZ); }
static int *_ARRAY_VALUE_ADD_OBJECT(int *arrayData) { return invoke<int *>(0x6889498B3E19C797, arrayData); }
static bool _ARRAY_VALUE_GET_boolEAN(int *arrayData, int arrayIndex) { return invoke<bool>(0x50C1B2874E50C114, arrayData, arrayIndex); }
static int _ARRAY_VALUE_GET_INTEGER(int *arrayData, int arrayIndex) { return invoke<int>(0x3E5AE19425CD74BE, arrayData, arrayIndex); }
static float _ARRAY_VALUE_GET_FLOAT(int *arrayData, int arrayIndex) { return invoke<float>(0xC0C527B525D7CFB5, arrayData, arrayIndex); }
static char *_ARRAY_VALUE_GET_STRING(int *arrayData, int arrayIndex) { return invoke<char *>(0xD3F2FFEB8D836F52, arrayData, arrayIndex); }
static Vector3 _ARRAY_VALUE_GET_VECTOR3(int *arrayData, int arrayIndex) { return invoke<Vector3>(0x8D2064E5B64A628A, arrayData, arrayIndex); }
static int *_ARRAY_VALUE_GET_OBJECT(int *arrayData, int arrayIndex) { return invoke<int *>(0x8B5FADCC4E3A145F, arrayData, arrayIndex); }
static int _ARRAY_VALUE_GET_SIZE(int *arrayData) { return invoke<int>(0x065DB281590CEA2D, arrayData); }
static int _ARRAY_VALUE_GET_TYPE(int *arrayData, int arrayIndex) { return invoke<int>(0x3A0014ADB172A3C5, arrayData, arrayIndex); }
static int START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, bool isGasFire) { return invoke<int>(0x6B83617E04503888, X, Y, Z, maxChildren, isGasFire); }
static void REMOVE_SCRIPT_FIRE(int fireHandle) { invoke<void *>(0x7FF548385680673F, fireHandle); }
static int START_ENTITY_FIRE(int entity) { return invoke<int>(0xF6A9D9708F6F23DF, entity); }
static void STOP_ENTITY_FIRE(int entity) { invoke<void *>(0x7F0DD2EBBB651AFF, entity); }
static bool IS_ENTITY_ON_FIRE(int entity) { return invoke<bool>(0x28D3FED7190D3A0B, entity); }
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0x50CAD495A460B305, x, y, z, radius); }
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<void *>(0x056A8A219B8E829F, x, y, z, radius); }
static bool GET_CLOSEST_FIRE_POS(Vector3 *outPosition, float x, float y, float z) { return invoke<bool>(0x352A9F6BCF90081F, outPosition, x, y, z); }
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, bool isAudible, bool isInvisible, float cameraShake) { invoke<void *>(0xE3AD2BDBAEE269AC, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static void ADD_OWNED_EXPLOSION(int ped, float x, float y, float z, int explosionType, float damageScale, bool isAudible, bool isInvisible, float cameraShake) { invoke<void *>(0x172AA1B624FA1013, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, int explosionFx, float damageScale, bool isAudible, bool isInvisible, float cameraShake) { invoke<void *>(0x36DD3FE58B5E5212, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
static bool IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<bool>(0x2E2EBA0EE7CED0E0, explosionType, x1, y1, z1, x2, y2, z2); }
static bool IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<bool>(0xAB0F816885B0E483, explosionType, x, y, z, radius); }
static bool IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<bool>(0xA079A6C51525DC4B, explosionType, x1, y1, z1, x2, y2, z2, angle); }
static int _GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<int>(0x14BA4BA137AF6CEC, explosionType, x1, y1, z1, x2, y2, z2, radius); }
static void SET_DECISION_MAKER(int ped, int name) { invoke<void *>(0xB604A2942ADED0EE, ped, name); }
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(int name, int type) { invoke<void *>(0x4FC9381A7AEE8968, name, type); }
static void BLOCK_DECISION_MAKER_EVENT(int name, int type) { invoke<void *>(0xE42FCDFD0E4196F7, name, type); }
static void UNBLOCK_DECISION_MAKER_EVENT(int name, int type) { invoke<void *>(0xD7CD9CF34F2C99E8, name, type); }
static int ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) { return invoke<int>(0xD9F8455409B525E9, type, x, y, z, duration); }
static int ADD_SHOCKING_EVENT_FOR_ENTITY(int type, int entity, float duration) { return invoke<int>(0x7FD8F3BE76F89422, type, entity, duration); }
static bool IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return invoke<bool>(0x1374ABB7C15BAB92, type, x, y, z, radius); }
static bool REMOVE_SHOCKING_EVENT(int event) { return invoke<bool>(0x2CDA538C44C6CCE5, event); }
static void REMOVE_ALL_SHOCKING_EVENTS(bool p0) { invoke<void *>(0xEAABE8FDFA21274C, p0); }
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<void *>(0x340F1415B68AEADE); }
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<void *>(0x2F9A292AD0A3BD89); }
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) { invoke<void *>(0x3FD2EC8BF1F1CF30, type); }
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<void *>(0x5F3B7749C112D552); }
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x27040C25DE6CB2F4, x, y, z); }
static int GET_ZONE_FROM_NAME_ID(char *zoneName) { return invoke<int>(0x98CD1D2934B76CC1, zoneName); }
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x4334BC40AA0CB4BB, zoneId); }
static char *GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char *>(0xCD90657D4C30E1CA, x, y, z); }
static void SET_ZONE_ENABLED(int zoneId, bool toggle) { invoke<void *>(0xBA5ECEEA120E5611, zoneId, toggle); }
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x5F7B268D15BA0739, zoneId); }
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, int vehicleint) { invoke<void *>(0x5F7D596BAC2E7777, scheduleId, vehicleint); }
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<void *>(0x5C0DE367AA0D911C, scheduleId); }
static int GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<int>(0x7EE64D51E8498728, x, y, z); }
static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12, bool rigid, float p14, bool breakWhenShot, int *unkPtr) { return invoke<int>(0xE832D760399EB220, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
static void DELETE_ROPE(int *rope) { invoke<void *>(0x52B4829281364649, rope); }
static void DELETE_CHILD_ROPE(int rope) { invoke<void *>(0xAA5D6B1888E4DB20, rope); }
static bool DOES_ROPE_EXIST(int *rope) { return invoke<bool>(0xFD5448BE3111ED96, rope); }
static void ROPE_DRAW_SHADOW_ENABLED(int *rope, bool toggle) { invoke<void *>(0xF159A63806BB5BA8, rope, toggle); }
static void LOAD_ROPE_DATA(int rope, char *rope_preset) { invoke<void *>(0xCBB203C04D1ABD27, rope, rope_preset); }
static void PIN_ROPE_VERTEX(int rope, int vertex, float x, float y, float z) { invoke<void *>(0x2B320CF14146B69A, rope, vertex, x, y, z); }
static void UNPIN_ROPE_VERTEX(int rope, int vertex) { invoke<void *>(0x4B5AE2EEE4A8F180, rope, vertex); }
static int GET_ROPE_VERTEX_COUNT(int rope) { return invoke<int>(0x3655F544CD30F0B5, rope); }
static void ATTACH_ENTITIES_TO_ROPE(int rope, int ent1, int ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, bool p10, bool p11, int *p12, int *p13) { invoke<void *>(0x3D95EC8B6D940AC3, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
static void ATTACH_ROPE_TO_ENTITY(int rope, int entity, float x, float y, float z, bool p5) { invoke<void *>(0x4B490A6832559A65, rope, entity, x, y, z, p5); }
static void DETACH_ROPE_FROM_ENTITY(int rope, int entity) { invoke<void *>(0xBCF3026912A8647D, rope, entity); }
static void ROPE_SET_UPDATE_PINVERTS(int rope) { invoke<void *>(0xC8D667EE52114ABA, rope); }
static void _0xDC57A637A20006ED(int p0, int p1) { invoke<void *>(0xDC57A637A20006ED, p0, p1); }
static void _0x36CCB9BE67B970FD(int p0, bool p1) { invoke<void *>(0x36CCB9BE67B970FD, p0, p1); }
static bool _0x84DE3B5FB3E666F0(int *p0) { return invoke<bool>(0x84DE3B5FB3E666F0, p0); }
static Vector3 GET_ROPE_LAST_VERTEX_COORD(int rope) { return invoke<Vector3>(0x21BB0FBD3E217C2D, rope); }
static Vector3 GET_ROPE_VERTEX_COORD(int rope, int vertex) { return invoke<Vector3>(0xEA61CA8E80F09E4D, rope, vertex); }
static void START_ROPE_WINDING(int rope) { invoke<void *>(0x1461C72C889E343E, rope); }
static void STOP_ROPE_WINDING(int rope) { invoke<void *>(0xCB2D4AB84A19AA7C, rope); }
static void START_ROPE_UNWINDING_FRONT(int rope) { invoke<void *>(0x538D1179EC1AA9A9, rope); }
static void STOP_ROPE_UNWINDING_FRONT(int rope) { invoke<void *>(0xFFF3A50779EFBBB3, rope); }
static void ROPE_CONVERT_TO_SIMPLE(int rope) { invoke<void *>(0x5389D48EFA2F079A, rope); }
static void ROPE_LOAD_TEXTURES() { invoke<void *>(0x9B9039DBF2D258C1); }
static bool ROPE_ARE_TEXTURES_LOADED() { return invoke<bool>(0xF2D0E6A75CC05597); }
static void ROPE_UNLOAD_TEXTURES() { invoke<void *>(0x6CE36C35C1AC8163); }
static void _0xBC0CE682D4D05650(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13) { invoke<void *>(0xBC0CE682D4D05650, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void _0xB1B6216CA2E7B55E(int p0, bool p1, bool p2) { invoke<void *>(0xB1B6216CA2E7B55E, p0, p1, p2); }
static void _0xB743F735C03D7810(int p0, int p1) { invoke<void *>(0xB743F735C03D7810, p0, p1); }
static float _GET_ROPE_LENGTH(int rope) { return invoke<float>(0x73040398DFF9A4A6, rope); }
static void ROPE_FORCE_LENGTH(int rope, float length) { invoke<void *>(0xD009F759A723DB1B, rope, length); }
static void ROPE_RESET_LENGTH(int rope, bool length) { invoke<void *>(0xC16DE94D9BEA14A0, rope, length); }
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<void *>(0xE37F721824571784, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
static void SET_DAMPING(int rope, int vertex, float value) { invoke<void *>(0xEEA3B200A6FEB65B, rope, vertex, value); }
static void ACTIVATE_PHYSICS(int entity) { invoke<void *>(0x710311ADF0E20730, entity); }
static void SET_CGOFFSET(int rope, float x, float y, float z) { invoke<void *>(0xD8FA3908D7B86904, rope, x, y, z); }
static Vector3 GET_CGOFFSET(int rope) { return invoke<Vector3>(0x8214A4B5A7A33612, rope); }
static void SET_CG_AT_BOUNDCENTER(int rope) { invoke<void *>(0xBE520D9761FF811F, rope); }
static void BREAK_ENTITY_GLASS(int p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, int p9, bool p10) { invoke<void *>(0x2E648D16F6E308F3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_DISABLE_BREAKING(int rope, bool enabled) { invoke<void *>(0x5CEC1A84620E7D5B, rope, enabled); }
static void SET_DISABLE_FRAG_DAMAGE(int object, bool toggle) { invoke<void *>(0x01BA3AED21C16CFB, object, toggle); }
static bool GET_WATER_HEIGHT(float x, float y, float z, float *height) { return invoke<bool>(0xF6829842C06AE524, x, y, z, height); }
static bool GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float *height) { return invoke<bool>(0x8EE6B53CE13A9794, x, y, z, height); }
static bool TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3 *result) { return invoke<bool>(0xFFA5D878809819DB, x1, y1, z1, x2, y2, z2, result); }
static bool TEST_PROBE_AGAINST_ALL_WATER(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { return invoke<bool>(0x8974647ED222EA5F, p0, p1, p2, p3, p4, p5, p6, p7); }
static bool TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int p3, int *p4) { return invoke<bool>(0x2B3451FA1E3142E2, x, y, z, p3, p4); }
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<void *>(0xC443FD757C3BA637, x, y, radius, height); }
static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, int entity, int p8) { return invoke<int>(0x7EE9F5D83DD4F90E, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int _START_SHAPE_TEST_RAY(float x1, float y1, float z1, float x2, float y2, float z2, int flags, int entity, int p8) { return invoke<int>(0x377906D8A31E5586, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_SHAPE_TEST_BOUNDING_BOX(int entity, int flags1, int flags2) { return invoke<int>(0x052837721A854EC7, entity, flags1, flags2); }
static int START_SHAPE_TEST_BOX(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, int p9, int p10, int entity, int p12) { return invoke<int>(0xFE466162C4401D18, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); }
static int START_SHAPE_TEST_BOUND(int entity, int flags1, int flags2) { return invoke<int>(0x37181417CE7C8900, entity, flags1, flags2); }
static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, int entity, int p9) { return invoke<int>(0x28579D1B8F8AAC80, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int _START_SHAPE_TEST_CAPSULE_2(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, int entity, int p9) { return invoke<int>(0xE6AC6C45FBE83004, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int GET_SHAPE_TEST_RESULT(int rayHandle, bool *hit, Vector3 *endCoords, Vector3 *surfaceNormal, int *entityHit) { return invoke<int>(0x3D87450E15D98694, rayHandle, hit, endCoords, surfaceNormal, entityHit); }
static int _GET_SHAPE_TEST_RESULT_EX(int rayHandle, bool *hit, Vector3 *endCoords, Vector3 *surfaceNormal, int *materialint, int *entityHit) { return invoke<int>(0x65287525D951F6BE, rayHandle, hit, endCoords, surfaceNormal, materialint, entityHit); }
static void _SHAPE_TEST_RESULT_ENTITY(int entityHit) { invoke<void *>(0x2B3334BCA57CD799, entityHit); }
static bool NETWORK_IS_SIGNED_IN() { return invoke<bool>(0x054354A99211EB96); }
static bool NETWORK_IS_SIGNED_ONLINE() { return invoke<bool>(0x1077788E268557C2); }
static bool _NETWORK_ARE_ROS_AVAILABLE() { return invoke<bool>(0x85443FF4C328F53B); }
static bool NETWORK_IS_CLOUD_AVAILABLE() { return invoke<bool>(0x9A4CF4F48AD77302); }
static bool _0x67A5589628E0CFF6() { return invoke<bool>(0x67A5589628E0CFF6); }
static int _0xBA9775570DB788CF() { return invoke<int>(0xBA9775570DB788CF); }
static bool NETWORK_IS_HOST() { return invoke<bool>(0x8DB296B814EDDA07); }
static bool NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<bool>(0x25CB5A9F37BFD063); }
static bool _0x72D918C99BCACC54(int p0) { return invoke<bool>(0x72D918C99BCACC54, p0); }
static bool _0xAEEF48CDF5B6CE7C(int p0, int p1) { return invoke<bool>(0xAEEF48CDF5B6CE7C, p0, p1); }
static bool _0x595F028698072DD9(int p0, int p1, bool p2) { return invoke<bool>(0x595F028698072DD9, p0, p1, p2); }
static bool NETWORK_CAN_BAIL() { return invoke<bool>(0x580CE4438479CC61); }
static void NETWORK_BAIL() { invoke<void *>(0x95914459A87EBA28); }
static void _0x283B6062A2C01E9B() { invoke<void *>(0x283B6062A2C01E9B); }
static bool NETWORK_CAN_ACCESS_MULTIPLAYER(int *loadingState) { return invoke<bool>(0xAF50DA1A3F8B1BA4, loadingState); }
static bool NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<bool>(0x9747292807126EDA); }
static bool NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<bool>(0x7E782A910C362C25); }
static int NETWORK_SESSION_ENTER(int p0, int p1, int p2, int maxints, int p4, int p5) { return invoke<int>(0x330ED4D05491934F, p0, p1, p2, maxints, p4, p5); }
static bool NETWORK_SESSION_FRIEND_MATCHMAKING(int p0, int p1, int maxints, bool p3) { return invoke<bool>(0x2CFC76E0D087C994, p0, p1, maxints, p3); }
static bool NETWORK_SESSION_CREW_MATCHMAKING(int p0, int p1, int p2, int maxints, bool p4) { return invoke<bool>(0x94BC51E9449D917F, p0, p1, p2, maxints, p4); }
static bool NETWORK_SESSION_ACTIVITY_QUICKMATCH(int p0, int p1, int p2, int p3) { return invoke<bool>(0xBE3E347A87ACEB82, p0, p1, p2, p3); }
static bool NETWORK_SESSION_HOST(int p0, int maxints, bool p2) { return invoke<bool>(0x6F3D4ED9BEE4E61D, p0, maxints, p2); }
static bool NETWORK_SESSION_HOST_CLOSED(int p0, int maxints) { return invoke<bool>(0xED34C0C02C098BB7, p0, maxints); }
static bool NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxints) { return invoke<bool>(0xB9CFD27A5D578D83, p0, maxints); }
static bool NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<bool>(0xFBCFA2EA2E206890); }
static bool NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<bool>(0x74732C6CA90DA2B4); }
static bool NETWORK_SESSION_IS_SOLO() { return invoke<bool>(0xF3929C2379B60CCE); }
static bool NETWORK_SESSION_IS_PRIVATE() { return invoke<bool>(0xCEF70AA5B3F89BA1); }
static bool NETWORK_SESSION_END(bool p0, bool p1) { return invoke<bool>(0xA02E59562D711006, p0, p1); }
static void NETWORK_SESSION_KICK_PLAYER(int player) { invoke<void *>(0xFA8904DC5F304220, player); }
static bool _NETWORK_SESSION_IS_PLAYER_VOTED_TO_KICK(int player) { return invoke<bool>(0xD6D09A6F32F49EF1, player); }
static void _0x49EC8030F5015F8B(int p0) { invoke<void *>(0x49EC8030F5015F8B, p0); }
static void _NETWORK_SESSION_SET_MAX_PLAYERS(int playerType, int playerCount) { invoke<void *>(0x8B6A4DD0AF9CE215, playerType, playerCount); }
static int _NETWORK_SESSION_GET_UNK(int p0) { return invoke<int>(0x56CE820830EF040B, p0); }
static void _0xCAE55F48D3D7875C(int p0) { invoke<void *>(0xCAE55F48D3D7875C, p0); }
static void _0xF49ABC20D8552257(int p0) { invoke<void *>(0xF49ABC20D8552257, p0); }
static void _0x4811BBAC21C5FCD5(int p0) { invoke<void *>(0x4811BBAC21C5FCD5, p0); }
static void _0x5539C3EBF104A53A(bool p0) { invoke<void *>(0x5539C3EBF104A53A, p0); }
static void _0x702BC4D605522539(int p0) { invoke<void *>(0x702BC4D605522539, p0); }
static void _0x3F52E880AAF6C8CA(bool p0) { invoke<void *>(0x3F52E880AAF6C8CA, p0); }
static void _0xF1EEA2DDA9FFA69D(int p0) { invoke<void *>(0xF1EEA2DDA9FFA69D, p0); }
static void _0x1153FA02A659051C() { invoke<void *>(0x1153FA02A659051C); }
static void _NETWORK_SESSION_HOSTED(bool p0) { invoke<void *>(0xC19F6C8E7865A6FF, p0); }
static void NETWORK_ADD_FOLLOWERS(int *p0, int p1) { invoke<void *>(0x236406F60CF216D6, p0, p1); }
static void NETWORK_CLEAR_FOLLOWERS() { invoke<void *>(0x058F43EC59A8631A); }
static void _NETWORK_GET_SERVER_TIME(int *hours, int *minutes, int *seconds) { invoke<void *>(0x6D03BFBD643B2A02, hours, minutes, seconds); }
static void _0x600F8CB31C7AAB6E(int p0) { invoke<void *>(0x600F8CB31C7AAB6E, p0); }
static bool NETWORK_X_AFFECTS_GAMERS(int p0) { return invoke<bool>(0xE532D6811B3A4D2A, p0); }
static bool NETWORK_FIND_MATCHED_GAMERS(int p0, float p1, float p2, float p3) { return invoke<bool>(0xF7B2CFDE5C9F700D, p0, p1, p2, p3); }
static bool NETWORK_IS_FINDING_GAMERS() { return invoke<bool>(0xDDDF64C91BFCF0AA); }
static int _0xF9B83B77929D8863() { return invoke<int>(0xF9B83B77929D8863); }
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xA1B043EE79A916FB); }
static bool NETWORK_GET_FOUND_GAMER(int *p0, int p1) { return invoke<bool>(0x9DCFF2AFB68B3476, p0, p1); }
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<void *>(0x6D14CCEE1B40381A); }
static bool _0x85A0EF54A500882C(int *p0) { return invoke<bool>(0x85A0EF54A500882C, p0); }
static int _0x2CC848A861D01493() { return invoke<int>(0x2CC848A861D01493); }
static int _0x94A8394D150B013A() { return invoke<int>(0x94A8394D150B013A); }
static int _0x5AE17C6B0134B7F1() { return invoke<int>(0x5AE17C6B0134B7F1); }
static bool _0x02A8BEC6FD9AF660(int *p0, int p1) { return invoke<bool>(0x02A8BEC6FD9AF660, p0, p1); }
static void _0x86E0660E4F5C956D() { invoke<void *>(0x86E0660E4F5C956D); }
static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<void *>(0xC6F8AB8A4189CF3A); }
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<void *>(0x2FBF47B1B36D36F9); }
static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<void *>(0xA29177F7703B5644); }
static bool NETWORK_HAS_PENDING_INVITE() { return invoke<bool>(0xAC8C7B9B88C4A668); }
static int _0xC42DD763159F3461() { return invoke<int>(0xC42DD763159F3461); }
static int _0x62A0296C1BB1CEB3() { return invoke<int>(0x62A0296C1BB1CEB3); }
static bool NETWORK_SESSION_WAS_INVITED() { return invoke<bool>(0x23DFB504655D0CE4); }
static void NETWORK_SESSION_GET_INVITER(int *networkHandle) { invoke<void *>(0xE57397B4A3429DD0, networkHandle); }
static int _0xD313DE83394AF134() { return invoke<int>(0xD313DE83394AF134); }
static void NETWORK_SUPPRESS_INVITE(bool toggle) { invoke<void *>(0xA0682D67EF1FBA3D, toggle); }
static void NETWORK_BLOCK_INVITES(bool toggle) { invoke<void *>(0x34F9E9049454A7A0, toggle); }
static void _0xF814FEC6A19FD6E0() { invoke<void *>(0xF814FEC6A19FD6E0); }
static void _NETWORK_BLOCK_KICKED_PLAYERS(bool p0) { invoke<void *>(0x6B07B9CE4D390375, p0); }
static void _0x7AC752103856FB20(bool p0) { invoke<void *>(0x7AC752103856FB20, p0); }
static int _0x74698374C45701D2() { return invoke<int>(0x74698374C45701D2); }
static void _0x140E6A44870A11CE() { invoke<void *>(0x140E6A44870A11CE); }
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<void *>(0xC74C33FCA52856D5, p0); }
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<void *>(0x3442775428FD2DAA); }
static bool NETWORK_IS_GAME_IN_PROGRESS() { return invoke<bool>(0x10FAB35428CCC9D7); }
static bool NETWORK_IS_SESSION_ACTIVE() { return invoke<bool>(0xD83C2B94E7508980); }
static bool NETWORK_IS_IN_SESSION() { return invoke<bool>(0xCA97246103B63917); }
static bool NETWORK_IS_SESSION_STARTED() { return invoke<bool>(0x9DE624D2FC4B603F); }
static bool NETWORK_IS_SESSION_BUSY() { return invoke<bool>(0xF4435D66A8E2905E); }
static bool NETWORK_CAN_SESSION_END() { return invoke<bool>(0x4EEBC3694E49C572); }
static void NETWORK_SESSION_MARK_VISIBLE(bool p0) { invoke<void *>(0x271CC6AB59EBF9A5, p0); }
static int NETWORK_SESSION_IS_VISIBLE() { return invoke<int>(0xBA416D68C631496A); }
static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(bool p0) { invoke<void *>(0xA73667484D7037C3, p0); }
static void NETWORK_SESSION_CHANGE_SLOTS(int p0, bool p1) { invoke<void *>(0xB4AB419E0D86ACAE, p0, p1); }
static void NETWORK_SESSION_VOICE_HOST() { invoke<void *>(0x9C1556705F864230); }
static void NETWORK_SESSION_VOICE_LEAVE() { invoke<void *>(0x6793E42BE02B575D); }
static void _0xABD5E88B8A2D3DB2(int *globalPtr) { invoke<void *>(0xABD5E88B8A2D3DB2, globalPtr); }
static void NETWORK_SET_KEEP_FOCUSPOINT(bool p0, int p1) { invoke<void *>(0x7F8413B7FC2AA6B9, p0, p1); }
static void _0x5B8ED3DB018927B1(int p0) { invoke<void *>(0x5B8ED3DB018927B1, p0); }
static bool _0x855BC38818F6F684() { return invoke<bool>(0x855BC38818F6F684); }
static bool _0xEF0912DDF7C4CB4B() { return invoke<bool>(0xEF0912DDF7C4CB4B); }
static bool NETWORK_SEND_TEXT_MESSAGE(char *message, int *networkHandle) { return invoke<bool>(0x3A214F2EC889B100, message, networkHandle); }
static void NETWORK_SET_ACTIVITY_SPECTATOR(bool toggle) { invoke<void *>(0x75138790B4359A74, toggle); }
static int NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<int>(0x12103B9E0C9F92FB); }
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<void *>(0x9D277B76D1D12222, maxSpectators); }
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(bool p0) { return invoke<int>(0x73E2B500410DA5A2, p0); }
static bool NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(int *networkHandle) { return invoke<bool>(0x2763BBAA72A7BCB9, networkHandle); }
static int NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, int p4, int p5) { return invoke<int>(0xA60BB5CE242BB254, p0, p1, p2, p3, p4, p5); }
static bool NETWORK_DO_TRANSITION_QUICKMATCH(int p0, int p1, int p2, int p3) { return invoke<bool>(0x71FB0EBCD4915D56, p0, p1, p2, p3); }
static bool NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(int p0, int p1, int p2, int p3) { return invoke<bool>(0xA091A5E44F0072E5, p0, p1, p2, p3); }
static bool NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(int p0, int p1, int p2, int p3, int *p4, int p5) { return invoke<bool>(0x9C4AB58491FDC98A, p0, p1, p2, p3, p4, p5); }
static int NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<int>(0xA06509A691D12BE4); }
static void _0xB13E88E655E5A3BC() { invoke<void *>(0xB13E88E655E5A3BC); }
static void _0x261E97AD7BCF3D40(bool p0) { invoke<void *>(0x261E97AD7BCF3D40, p0); }
static void _0x39917E1B4CB0F911(bool p0) { invoke<void *>(0x39917E1B4CB0F911, p0); }
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(int *p0) { invoke<void *>(0xEF26739BCD9907D5, p0); }
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<void *>(0xFB3272229A82C759); }
static bool NETWORK_INVITE_GAMERS_TO_TRANSITION(int *p0, int p1) { return invoke<bool>(0x4A595C32F77DFF76, p0, p1); }
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(int *networkHandle) { invoke<void *>(0xCA2C8073411ECDB6, networkHandle); }
static int NETWORK_LEAVE_TRANSITION() { return invoke<int>(0xD23A1A815D21DB19); }
static int NETWORK_LAUNCH_TRANSITION() { return invoke<int>(0x2DCF46CB1A4F0884); }
static void NETWORK_BAIL_TRANSITION() { invoke<void *>(0xEAA572036990CD1B); }
static bool NETWORK_DO_TRANSITION_TO_GAME(bool p0, int maxints) { return invoke<bool>(0x3E9BB38102A589B0, p0, maxints); }
static bool NETWORK_DO_TRANSITION_TO_NEW_GAME(bool p0, int maxints, bool p2) { return invoke<bool>(0x4665F51EFED00034, p0, maxints, p2); }
static bool NETWORK_DO_TRANSITION_TO_FREEMODE(int *p0, int p1, bool p2, int players, bool p4) { return invoke<bool>(0x3AAD8B2FCA1E289F, p0, p1, p2, players, p4); }
static bool NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(int *p0, int *p1, int players, bool p3, bool p4, bool p5) { return invoke<bool>(0x9E80A5BA8109F974, p0, p1, players, p3, p4, p5); }
static int NETWORK_IS_TRANSITION_TO_GAME() { return invoke<int>(0x9D7696D8F4FA6CB7); }
static int NETWORK_GET_TRANSITION_MEMBERS(int *p0, int p1) { return invoke<int>(0x73B000F7FBC55829, p0, p1); }
static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<void *>(0x521638ADA1BA0D18, p0, p1); }
static void _0xEBEFC2E77084F599(int p0, char *p1, bool p2) { invoke<void *>(0xEBEFC2E77084F599, p0, p1, p2); }
static bool NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(int *networkHandle, char *p1, int p2, int p3, bool p4) { return invoke<bool>(0x31D1D2B858D25E6B, networkHandle, p1, p2, p3, p4); }
static bool NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(int *p0) { return invoke<bool>(0x5728BB6D63E3FF1D, p0); }
static int NETWORK_IS_TRANSITION_HOST() { return invoke<int>(0x0B824797C9BF2159); }
static bool NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(int *networkHandle) { return invoke<bool>(0x6B5C83BA3EFE6A10, networkHandle); }
static bool NETWORK_GET_TRANSITION_HOST(int *networkHandle) { return invoke<bool>(0x65042B9774C4435E, networkHandle); }
static bool NETWORK_IS_IN_TRANSITION() { return invoke<bool>(0x68049AEFF83D8F0A); }
static bool NETWORK_IS_TRANSITION_STARTED() { return invoke<bool>(0x53FA83401D9C07FE); }
static int NETWORK_IS_TRANSITION_BUSY() { return invoke<int>(0x520F3282A53D26B7); }
static int NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<int>(0x292564C735375EDF); }
static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<void *>(0x2B3A8F7CA3A38FDE); }
static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<void *>(0x43F4DBA69710E01E); }
static int _0x37A4494483B9F5C9() { return invoke<int>(0x37A4494483B9F5C9); }
static void NETWORK_SET_TRANSITION_ACTIVITY_ID(int p0) { invoke<void *>(0x30DE938B516F0AD2, p0); }
static void NETWORK_CHANGE_TRANSITION_SLOTS(int p0, int p1) { invoke<void *>(0xEEEDA5E6D7080987, p0, p1); }
static void _0x973D76AA760A6CB6(bool p0) { invoke<void *>(0x973D76AA760A6CB6, p0); }
static bool NETWORK_HAS_PLAYER_STARTED_TRANSITION(int player) { return invoke<bool>(0x9AC9CCBFA8C29795, player); }
static bool NETWORK_ARE_TRANSITION_DETAILS_VALID(int p0) { return invoke<bool>(0x2615AA2A695930C1, p0); }
static bool NETWORK_JOIN_TRANSITION(int player) { return invoke<bool>(0x9D060B08CD63321A, player); }
static bool NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(int *p0) { return invoke<bool>(0x7284A47B3540E6CF, p0); }
static bool NETWORK_IS_ACTIVITY_SESSION() { return invoke<bool>(0x05095437424397FA); }
static void _NETWORK_BLOCK_INVITES_2(bool p0) { invoke<void *>(0x4A9FDE3A5A6D0437, p0); }
static bool _NETWORK_SEND_PRESENCE_INVITE(int *networkHandle, int *p1, int p2, int p3) { return invoke<bool>(0xC3C7A6AFDB244624, networkHandle, p1, p2, p3); }
static bool _NETWORK_SEND_PRESENCE_TRANSITION_INVITE(int *p0, int *p1, int p2, int p3) { return invoke<bool>(0xC116FF9B4D488291, p0, p1, p2, p3); }
static int _0x742B58F723233ED9(int p0) { return invoke<int>(0x742B58F723233ED9, p0); }
static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xCEFA968912D0F78D); }
static bool NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<bool>(0xFA91550DF9318B22, p0); }
static bool NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<bool>(0xF0210268DB0974B1, p0); }
static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0xDFF09646E12EC386, p0); }
static int NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<int>(0x4962CC4AA2F345B7, p0); }
static bool NETWORK_GET_PRESENCE_INVITE_HANDLE(int p0, int *p1) { return invoke<bool>(0x38D5B0FEBB086F75, p0, p1); }
static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(int p0) { return invoke<int>(0x26E1CD96B0903D60, p0); }
static int _0x24409FC4C55CB22D(int p0) { return invoke<int>(0x24409FC4C55CB22D, p0); }
static int _0xD39B3FFF8FFDD5BF(int p0) { return invoke<int>(0xD39B3FFF8FFDD5BF, p0); }
static int _0x728C4CC7920CD102(int p0) { return invoke<int>(0x728C4CC7920CD102, p0); }
static bool _0x3DBF2DF0AEB7D289(int p0) { return invoke<bool>(0x3DBF2DF0AEB7D289, p0); }
static bool _0x8806CEBFABD3CE05(int p0) { return invoke<bool>(0x8806CEBFABD3CE05, p0); }
static bool NETWORK_HAS_FOLLOW_INVITE() { return invoke<bool>(0x76D9B976C4C09FDE); }
static int NETWORK_ACTION_FOLLOW_INVITE() { return invoke<int>(0xC88156EBB786F8D5); }
static int NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<int>(0x439BFDE3CD0610F6); }
static void _0xEBF8284D8CADEB53() { invoke<void *>(0xEBF8284D8CADEB53); }
static void NETWORK_REMOVE_TRANSITION_INVITE(int *p0) { invoke<void *>(0x7524B431B2E6F7EE, p0); }
static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<void *>(0x726E0375C7A26368); }
static void _0xF083835B70BA9BFE() { invoke<void *>(0xF083835B70BA9BFE); }
static bool NETWORK_INVITE_GAMERS(int *p0, int p1, int *p2, int *p3) { return invoke<bool>(0x9D80CD1D0E6327DE, p0, p1, p2, p3); }
static bool NETWORK_HAS_INVITED_GAMER(int *p0) { return invoke<bool>(0x4D86CD31E8976ECE, p0); }
static bool NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(int *p0) { return invoke<bool>(0x74881E6BCAE2327C, p0); }
static bool NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(int *p0) { return invoke<bool>(0x7206F674F2A3B1BB, p0); }
static void _0x0D77A82DC2D0DA59(int *p0, int *p1) { invoke<void *>(0x0D77A82DC2D0DA59, p0, p1); }
static bool FILLOUT_PM_PLAYER_LIST(int *networkHandle, int p1, int p2) { return invoke<bool>(0xCBBD7C4991B64809, networkHandle, p1, p2); }
static bool FILLOUT_PM_PLAYER_LIST_WITH_NAMES(int *p0, int *p1, int p2, int p3) { return invoke<bool>(0x716B6DB9D1886106, p0, p1, p2, p3); }
static bool USING_NETWORK_WEAPONTYPE(int p0) { return invoke<bool>(0xE26CCFF8094D8C74, p0); }
static int _0x2FC5650B0271CB57() { return invoke<int>(0x2FC5650B0271CB57); }
static int _0x120364DE2845DAF8(int *p0, int p1) { return invoke<int>(0x120364DE2845DAF8, p0, p1); }
static int _0xFD8B834A8BA05048() { return invoke<int>(0xFD8B834A8BA05048); }
static bool NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(int *networkHandle) { return invoke<bool>(0x8DE9945BCC9AEC52, networkHandle); }
static bool NETWORK_IS_IN_PARTY() { return invoke<bool>(0x966C2BC2A7FE3F30); }
static bool NETWORK_IS_PARTY_MEMBER(int *networkHandle) { return invoke<bool>(0x676ED266AADD31E0, networkHandle); }
static int _0x2BF66D2E7414F686() { return invoke<int>(0x2BF66D2E7414F686); }
static int _0x14922ED3E38761F0() { return invoke<int>(0x14922ED3E38761F0); }
static void _0xFA2888E3833C8E96() { invoke<void *>(0xFA2888E3833C8E96); }
static void _0x77FADDCBE3499DF7(int p0) { invoke<void *>(0x77FADDCBE3499DF7, p0); }
static void _0xF1B84178F8674195(int p0) { invoke<void *>(0xF1B84178F8674195, p0); }
static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0x599E4FA1F87EB5FF); }
static int _NETWORK_GET_RANDOM_INT_IN_RANGE(int rangeStart, int rangeEnd) { return invoke<int>(0xE30CF56F1EFA5F43, rangeStart, rangeEnd); }
static bool NETWORK_PLAYER_IS_CHEATER() { return invoke<bool>(0x655B91F1495A9090); }
static int _0x172F75B6EE2233BA() { return invoke<int>(0x172F75B6EE2233BA); }
static bool NETWORK_PLAYER_IS_BADSPORT() { return invoke<bool>(0x19D8DA0E5A68045A); }
static bool _NETWORK_IS_PLAYER_IN_SCRIPT(int player, int p1, int scriptint) { return invoke<bool>(0x46FB3ED415C7641C, player, p1, scriptint); }
static bool BAD_SPORT_PLAYER_LEFT_DETECTED(int *networkHandle, int event, int amountReceived) { return invoke<bool>(0xEC5E3AF5289DCA81, networkHandle, event, amountReceived); }
static void _0xE66C690248F11150(int p0, int p1) { invoke<void *>(0xE66C690248F11150, p0, p1); }
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int lobbySize, bool p1, int playerId) { invoke<void *>(0x1CA59E306ECB80A5, lobbySize, p1, playerId); }
static bool NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<bool>(0x2910669969E9535E); }
static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoke<int>(0xA6C90FBC38E395EE); }
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x18D0456E86604654); }
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0x57D158647A6BFABF); }
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int *vars, int numVars) { invoke<void *>(0x3E9B2F01C50DF595, vars, numVars); }
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int *vars, int numVars) { invoke<void *>(0x3364AA97340CA215, vars, numVars); }
static void _0x64F62AFB081E260D() { invoke<void *>(0x64F62AFB081E260D); }
static bool _0x5D10B3795F3FC886() { return invoke<bool>(0x5D10B3795F3FC886); }
static int NETWORK_GET_PLAYER_INDEX(int player) { return invoke<int>(0x24FB80D107371267, player); }
static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0x1B84DF6AF2A46938, index); }
static int NETWORK_GET_PLAYER_INDEX_FROM_PED(int ped) { return invoke<int>(0x6C0E2E0125610278, ped); }
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xA4A79DD2D9600654); }
static bool NETWORK_IS_PLAYER_CONNECTED(int player) { return invoke<bool>(0x93DC1BE4E1ABE9D1, player); }
static int _0xCF61D4B4702EE9EB() { return invoke<int>(0xCF61D4B4702EE9EB); }
static bool NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<bool>(0x6FF8FF40B6357D45, p0); }
static bool NETWORK_IS_PLAYER_ACTIVE(int player) { return invoke<bool>(0xB8DFD30D6973E135, player); }
static bool NETWORK_IS_PLAYER_A_PARTICIPANT(int p0) { return invoke<bool>(0x3CA58F6CB7CBD784, p0); }
static bool NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<bool>(0x83CD99A1E6061AB5); }
static int NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<int>(0xC7B4D79B01FA7A5C); }
static int NETWORK_GET_HOST_OF_SCRIPT(char *scriptName, int p1, int p2) { return invoke<int>(0x1D6A14F1F9A736FC, scriptName, p1, p2); }
static void NETWORK_SET_MISSION_FINISHED() { invoke<void *>(0x3B3D11CD9FFCDFC9); }
static bool NETWORK_IS_SCRIPT_ACTIVE(char *scriptName, int player, bool p2, int p3) { return invoke<bool>(0x9D40DF90FAD26098, scriptName, player, p2, p3); }
static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(int *p0, int p1, int p2) { return invoke<int>(0x3658E8CD94FC121A, p0, p1, p2); }
static int _0x638A3A81733086DB() { return invoke<int>(0x638A3A81733086DB); }
static bool _0x1AD5B71586B94820(int p0, int *p1, int p2) { return invoke<bool>(0x1AD5B71586B94820, p0, p1, p2); }
static void _0x2302C0264EA58D31() { invoke<void *>(0x2302C0264EA58D31); }
static void _0x741A3D8380319A81() { invoke<void *>(0x741A3D8380319A81); }
static int PARTICIPANT_ID() { return invoke<int>(0x90986E8876CE0A83); }
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0x57A3BDDAD8E5AA0A); }
static int NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, int *weaponint) { return invoke<int>(0x7A1ADEEF01740A24, netId, weaponint); }
static bool _NETWORK_GET_DESROYER_OF_ENTITY(int p0, int p1, int *weaponint) { return invoke<bool>(0x4CACA84440FA26F6, p0, p1, weaponint); }
static int NETWORK_GET_ENTITY_KILLER_OF_PLAYER(int player, int *weaponint) { return invoke<int>(0x42B2DAA6B596F5F8, player, weaponint); }
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, bool unk, bool changetime) { invoke<void *>(0xEA23C49EAA83ACFB, x, y, z, heading, unk, changetime); }
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<void *>(0x2D95C7E2D7E07307, time); }
static bool NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<bool>(0x8A8694B48715B000); }
static void NETWORK_DISABLE_INVINCIBLE_FLASHING(int player, bool p1) { invoke<void *>(0x9DD368BF06983221, player, p1); }
static void _0x524FF0AEFF9C3973(int p0) { invoke<void *>(0x524FF0AEFF9C3973, p0); }
static bool _0xB07D3185E11657A5(int p0) { return invoke<bool>(0xB07D3185E11657A5, p0); }
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(int entity) { return invoke<int>(0xA11700682F3AD45C, entity); }
static int NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<int>(0xCE4E5D9B0A4FF560, netId); }
static bool NETWORK_GET_ENTITY_IS_NETWORKED(int entity) { return invoke<bool>(0xC7827959479DCC78, entity); }
static bool NETWORK_GET_ENTITY_IS_LOCAL(int entity) { return invoke<bool>(0x0991549DE4D64762, entity); }
static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(int entity) { invoke<void *>(0x06FAACD625D80CAA, entity); }
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(int entity) { invoke<void *>(0x7368E683BB9038D6, entity); }
static bool NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<bool>(0x38CE16C96BD11344, netID); }
static bool NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int entity) { return invoke<bool>(0x18A47D074708FD68, entity); }
static bool NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<bool>(0xA670B3662FAFFBD0, netId); }
static bool NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<bool>(0x4D36070FE0215186, netId); }
static bool NETWORK_REQUEST_CONTROL_OF_ENTITY(int entity) { return invoke<bool>(0xB69317BF5E782347, entity); }
static bool NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<bool>(0x870DDFD5A4A796E4, doorID); }
static bool NETWORK_HAS_CONTROL_OF_ENTITY(int entity) { return invoke<bool>(0x01BF60A500E28887, entity); }
static bool NETWORK_HAS_CONTROL_OF_PICKUP(int pickup) { return invoke<bool>(0x5BC9495F0B3B6FA6, pickup); }
static bool NETWORK_HAS_CONTROL_OF_DOOR(int doorint) { return invoke<bool>(0xCB3C68ADB06195DF, doorint); }
static int VEH_TO_NET(int vehicle) { return invoke<int>(0xB4C94523F023419C, vehicle); }
static int PED_TO_NET(int ped) { return invoke<int>(0x0EDEC3C276198689, ped); }
static int OBJ_TO_NET(int object) { return invoke<int>(0x99BFDC94A603E541, object); }
static int NET_TO_VEH(int netHandle) { return invoke<int>(0x367B936610BA360C, netHandle); }
static int NET_TO_PED(int netHandle) { return invoke<int>(0xBDCD95FC216A8B3E, netHandle); }
static int NET_TO_OBJ(int netHandle) { return invoke<int>(0xD8515F5FEA14CB3F, netHandle); }
static int NET_TO_ENT(int netHandle) { return invoke<int>(0xBFFEAB45A9A9094A, netHandle); }
static void NETWORK_GET_LOCAL_HANDLE(int *networkHandle, int bufferSize) { invoke<void *>(0xE86051786B66CD8E, networkHandle, bufferSize); }
static void NETWORK_HANDLE_FROM_USER_ID(char *userId, int *networkHandle, int bufferSize) { invoke<void *>(0xDCD51DD8F87AEC5C, userId, networkHandle, bufferSize); }
static void NETWORK_HANDLE_FROM_MEMBER_ID(char *memberId, int *networkHandle, int bufferSize) { invoke<void *>(0xA0FD21BED61E5C4C, memberId, networkHandle, bufferSize); }
static void NETWORK_HANDLE_FROM_PLAYER(int player, int *networkHandle, int bufferSize) { invoke<void *>(0x388EB2B86C73B6B3, player, networkHandle, bufferSize); }
static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, int *networkHandle, int bufferSize) { invoke<void *>(0xD45CB817D7E177D2, friendIndex, networkHandle, bufferSize); }
static bool NETWORK_GAMERTAG_FROM_HANDLE_START(int *networkHandle) { return invoke<bool>(0x9F0C0A981D73FA56, networkHandle); }
static bool NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<bool>(0xB071E27958EF4CF0); }
static bool NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<bool>(0xFD00798DBA7523DD); }
static char *NETWORK_GET_GAMERTAG_FROM_HANDLE(int *networkHandle) { return invoke<char *>(0x426141162EBE5CDB, networkHandle); }
static bool NETWORK_ARE_HANDLES_THE_SAME(int *netHandle1, int *netHandle2) { return invoke<bool>(0x57DBA049E110F217, netHandle1, netHandle2); }
static bool NETWORK_IS_HANDLE_VALID(int *networkHandle, int bufferSize) { return invoke<bool>(0x6F79B93B0A8E4133, networkHandle, bufferSize); }
static int NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int *networkHandle) { return invoke<int>(0xCE5F689CF5A0A49D, networkHandle); }
static char *NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int *networkHandle) { return invoke<char *>(0xC82630132081BB6F, networkHandle); }
static bool NETWORK_IS_GAMER_IN_MY_SESSION(int *networkHandle) { return invoke<bool>(0x0F10B05DDF8D16E9, networkHandle); }
static void NETWORK_SHOW_PROFILE_UI(int *networkHandle) { invoke<void *>(0x859ED1CEA343FCA8, networkHandle); }
static char *NETWORK_PLAYER_GET_NAME(int player) { return invoke<char *>(0x7718D2E2060837D2, player); }
static char *NETWORK_PLAYER_GET_USERID(int player, int *userID) { return invoke<char *>(0x4927FC39CD0869A0, player, userID); }
static bool NETWORK_PLAYER_IS_ROCKSTAR_DEV(int player) { return invoke<bool>(0x544ABDDA3B409B6D, player); }
static bool _NETWORK_PLAYER_SOMETHING(int player) { return invoke<bool>(0x565E430DB3B05BEC, player); }
static bool NETWORK_IS_INACTIVE_PROFILE(int *p0) { return invoke<bool>(0x7E58745504313A2E, p0); }
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xAFEBB0D5D8F687D2); }
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0x203F1CFD823B27A4); }
static char *NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<char *>(0xE11EBBB2A783FE8B, friendIndex); }
static bool NETWORK_IS_FRIEND_ONLINE(char *name) { return invoke<bool>(0x425A44533437B64D, name); }
static bool NETWORK_IS_FRIEND_IN_SAME_TITLE(char *friendName) { return invoke<bool>(0x2EA9A3BEDF3F17B8, friendName); }
static bool NETWORK_IS_FRIEND_IN_MULTIPLAYER(char *friendName) { return invoke<bool>(0x57005C18827F3A28, friendName); }
static bool NETWORK_IS_FRIEND(int *networkHandle) { return invoke<bool>(0x1A24A179F9B31654, networkHandle); }
static int NETWORK_IS_PENDING_FRIEND(int p0) { return invoke<int>(0x0BE73DA6984A6E33, p0); }
static int NETWORK_IS_ADDING_FRIEND() { return invoke<int>(0x6EA101606F6E4D81); }
static bool NETWORK_ADD_FRIEND(int *networkHandle, char *message) { return invoke<bool>(0x8E02D73914064223, networkHandle, message); }
static bool NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<bool>(0xBAD8F2A42B844821, friendIndex); }
static bool _0x82377B65E943F72D(int p0) { return invoke<bool>(0x82377B65E943F72D, p0); }
static bool NETWORK_CAN_SET_WAYPOINT() { return invoke<bool>(0xC927EC229934AF60); }
static int _0xB309EBEA797E001F(int p0) { return invoke<int>(0xB309EBEA797E001F, p0); }
static int _0x26F07DD83A5F7F98() { return invoke<int>(0x26F07DD83A5F7F98); }
static bool NETWORK_HAS_HEADSET() { return invoke<bool>(0xE870F9F1F7B4F1FA); }
static void _0x7D395EA61622E116(bool p0) { invoke<void *>(0x7D395EA61622E116, p0); }
static bool NETWORK_GAMER_HAS_HEADSET(int *p0) { return invoke<bool>(0xF2FD55CB574BCC55, p0); }
static bool NETWORK_IS_GAMER_TALKING(int *p0) { return invoke<bool>(0x71C33B22606CD88A, p0); }
static bool NETWORK_CAN_COMMUNICATE_WITH_GAMER(int *player) { return invoke<bool>(0xA150A4F065806B1F, player); }
static bool NETWORK_IS_GAMER_MUTED_BY_ME(int *p0) { return invoke<bool>(0xCE60DE011B6C7978, p0); }
static bool NETWORK_AM_I_MUTED_BY_GAMER(int *p0) { return invoke<bool>(0xDF02A2C93F1F26DA, p0); }
static bool NETWORK_IS_GAMER_BLOCKED_BY_ME(int *p0) { return invoke<bool>(0xE944C4F5AF1B5883, p0); }
static bool NETWORK_AM_I_BLOCKED_BY_GAMER(int *p0) { return invoke<bool>(0x15337C7C268A27B2, p0); }
static bool NETWORK_IS_PLAYER_TALKING(int player) { return invoke<bool>(0x031E11F3D447647E, player); }
static bool NETWORK_PLAYER_HAS_HEADSET(int player) { return invoke<bool>(0x3FB99A8B08D18FD6, player); }
static bool NETWORK_IS_PLAYER_MUTED_BY_ME(int player) { return invoke<bool>(0x8C71288AE68EDE39, player); }
static bool NETWORK_AM_I_MUTED_BY_PLAYER(int player) { return invoke<bool>(0x9D6981DFC91A8604, player); }
static bool NETWORK_IS_PLAYER_BLOCKED_BY_ME(int player) { return invoke<bool>(0x57AF1F8E27483721, player); }
static bool NETWORK_AM_I_BLOCKED_BY_PLAYER(int player) { return invoke<bool>(0x87F395D957D4353D, player); }
static float NETWORK_GET_PLAYER_LOUDNESS(int p0) { return invoke<float>(0x21A1684A25C2867F, p0); }
static void NETWORK_SET_TALKER_PROXIMITY(float p0) { invoke<void *>(0xCBF12D65F95AD686, p0); }
static int NETWORK_GET_TALKER_PROXIMITY() { return invoke<int>(0x84F0F13120B4E098); }
static void NETWORK_SET_VOICE_ACTIVE(bool toggle) { invoke<void *>(0xBABEC9E69A91C57B, toggle); }
static void _0xCFEB46DCD7D8D5EB(bool p0) { invoke<void *>(0xCFEB46DCD7D8D5EB, p0); }
static void NETWORK_OVERRIDE_TRANSITION_CHAT(bool p0) { invoke<void *>(0xAF66059A131AA269, p0); }
static void NETWORK_SET_TEAM_ONLY_CHAT(bool toggle) { invoke<void *>(0xD5B4883AC32F24C3, toggle); }
static void _0x6F697A66CE78674E(int team, bool toggle) { invoke<void *>(0x6F697A66CE78674E, team, toggle); }
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bool toggle) { invoke<void *>(0x70DA3BF8DACD3210, toggle); }
static void _0x3C5C1E2C2FF814B1(bool p0) { invoke<void *>(0x3C5C1E2C2FF814B1, p0); }
static void _0xF46A1E03E8755980(bool p0) { invoke<void *>(0xF46A1E03E8755980, p0); }
static void _0x6A5D89D7769A40D8(bool p0) { invoke<void *>(0x6A5D89D7769A40D8, p0); }
static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(int player, bool toggle) { invoke<void *>(0x3039AE5AD2C9C0C4, player, toggle); }
static void _NETWORK_CHAT_MUTE(bool p0) { invoke<void *>(0x57B192B4D4AD23D5, p0); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(int player, bool toggle) { invoke<void *>(0xDDF73E2B1FEC5AB4, player, toggle); }
static void _0x0FF2862B61A58AF9(bool p0) { invoke<void *>(0x0FF2862B61A58AF9, p0); }
static void NETWORK_SET_VOICE_CHANNEL(int p0) { invoke<void *>(0xEF6212C2EFEF1A23, p0); }
static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<void *>(0xE036A705F989E049); }
static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(float x, float y, float z) { invoke<void *>(0xDBD2056652689917, x, y, z); }
static void _0xF03755696450470C() { invoke<void *>(0xF03755696450470C); }
static void _0x5E3AA4CA2B6FB0EE(int p0) { invoke<void *>(0x5E3AA4CA2B6FB0EE, p0); }
static void _0xCA575C391FEA25CC(int p0) { invoke<void *>(0xCA575C391FEA25CC, p0); }
static void _0xADB57E5B663CCA8B(int p0, float *p1, float *p2) { invoke<void *>(0xADB57E5B663CCA8B, p0, p1, p2); }
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<void *>(0x593850C16A36B692); }
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(bool toggle) { invoke<void *>(0xF808475FA571D823, toggle); }
static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, int p2, int p3) { invoke<void *>(0x1DCCACDCFC569362, p0, p1, p2, p3); }
static void _0x3E200C2BCF4164EB(int p0, int p1) { invoke<void *>(0x3E200C2BCF4164EB, p0, p1); }
static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0x5ED0356A0CE3A34F); }
static void _NETWORK_RESPAWN_COORDS(int player, float x, float y, float z, bool p4, bool p5) { invoke<void *>(0x9769F811D1785B03, player, x, y, z, p4, p5); }
static void _0xBF22E0F32968E967(int player, bool p1) { invoke<void *>(0xBF22E0F32968E967, player, p1); }
static void _0x715135F4B82AC90D(int entity) { invoke<void *>(0x715135F4B82AC90D, entity); }
static bool _NETWORK_PLAYER_IS_IN_CLAN() { return invoke<bool>(0x579CCED0265D4896); }
static bool NETWORK_CLAN_PLAYER_IS_ACTIVE(int *networkHandle) { return invoke<bool>(0xB124B57F571D8F18, networkHandle); }
static bool NETWORK_CLAN_PLAYER_GET_DESC(int *clanDesc, int bufferSize, int *networkHandle) { return invoke<bool>(0xEEE6EACBE8874FBA, clanDesc, bufferSize, networkHandle); }
static bool _0x7543BB439F63792B(int *clanDesc, int bufferSize) { return invoke<bool>(0x7543BB439F63792B, clanDesc, bufferSize); }
static void _0xF45352426FF3A4F0(int *clanDesc, int bufferSize, int *networkHandle) { invoke<void *>(0xF45352426FF3A4F0, clanDesc, bufferSize, networkHandle); }
static int _GET_NUM_MEMBERSHIP_DESC() { return invoke<int>(0x1F471B79ACC90BEF); }
static bool NETWORK_CLAN_GET_MEMBERSHIP_DESC(int *memberDesc, int p1) { return invoke<bool>(0x48DE78AF2C8885B8, memberDesc, p1); }
static bool NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(int *networkHandle) { return invoke<bool>(0xA989044E70010ABE, networkHandle); }
static bool NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(int *p0) { return invoke<bool>(0x5B9E023DC6EBEDC0, p0); }
static bool _NETWORK_IS_CLAN_MEMBERSHIP_FINISHED_DOWNLOADING() { return invoke<bool>(0xB3F64A6A91432477); }
static bool NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int *p0) { return invoke<bool>(0xBB6E6FEE99D866B2, p0); }
static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int *p0) { return invoke<int>(0xAAB11F6C4ADBC2C1, p0); }
static bool NETWORK_CLAN_GET_MEMBERSHIP_VALID(int *p0, int p1) { return invoke<bool>(0x48A59CF88D43DF0E, p0, p1); }
static bool NETWORK_CLAN_GET_MEMBERSHIP(int *p0, int *clanMembership, int p2) { return invoke<bool>(0xC8BC2011F67B3411, p0, clanMembership, p2); }
static bool NETWORK_CLAN_JOIN(int clanDesc) { return invoke<bool>(0x9FAAA4F4FC71F87F, clanDesc); }
static bool _NETWORK_CLAN_ANIMATION(char *animDict, char *animName) { return invoke<bool>(0x729E3401F0430686, animDict, animName); }
static bool _0x2B51EDBEFC301339(int p0, char *p1) { return invoke<bool>(0x2B51EDBEFC301339, p0, p1); }
static int _0xC32EA7A2F6CA7557() { return invoke<int>(0xC32EA7A2F6CA7557); }
static bool _0x5835D9CD92E83184(int *p0, int *p1) { return invoke<bool>(0x5835D9CD92E83184, p0, p1); }
static bool _0x13518FF1C6B28938(int p0) { return invoke<bool>(0x13518FF1C6B28938, p0); }
static bool _0xA134777FF7F33331(int p0, int *p1) { return invoke<bool>(0xA134777FF7F33331, p0, p1); }
static void _0x113E6E3E50E286B0(int p0) { invoke<void *>(0x113E6E3E50E286B0, p0); }
static int NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<int>(0x9AA46BADAD0E27ED); }
static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<void *>(0x042E4B70B93E6054); }
static bool NETWORK_GET_PRIMARY_CLAN_DATA_START(int *p0, int p1) { return invoke<bool>(0xCE86D8191B762107, p0, p1); }
static int NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<int>(0xB5074DB804E28CE7); }
static int NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<int>(0x5B4F04F19376A0BA); }
static bool NETWORK_GET_PRIMARY_CLAN_DATA_NEW(int *p0, int *p1) { return invoke<bool>(0xC080FF658B2E41DA, p0, p1); }
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, bool toggle) { invoke<void *>(0x299EEB23175895FC, netId, toggle); }
static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, bool toggle) { invoke<void *>(0xE05E81A888FA63C8, netId, toggle); }
static void _SET_NETWORK_ID_SYNC_TO_PLAYER(int netId, int player, bool toggle) { invoke<void *>(0xA8A024587329F36A, netId, player, toggle); }
static void NETWORK_SET_ENTITY_CAN_BLEND(int entity, bool toggle) { invoke<void *>(0xD830567D88A1E873, entity, toggle); }
static void _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(int entity, bool toggle) { invoke<void *>(0xF1CA12B18AEF5298, entity, toggle); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, bool p1, bool p2) { invoke<void *>(0xA6928482543022B4, netId, p1, p2); }
static void _0x3FA36981311FA4FF(int netId, bool state) { invoke<void *>(0x3FA36981311FA4FF, netId, state); }
static bool _0xA1607996431332DF(int netId) { return invoke<bool>(0xA1607996431332DF, netId); }
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bool p0, bool p1) { invoke<void *>(0xD1065D68947E7B6E, p0, p1); }
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bool p0) { invoke<void *>(0xE5F773C1A1D9D168, p0); }
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(bool p0) { invoke<void *>(0x7619364C82D3BF14, p0); }
static void SET_PLAYER_INVISIBLE_LOCALLY(int player, bool toggle) { invoke<void *>(0x12B37D54667DB0B8, player, toggle); }
static void SET_PLAYER_VISIBLE_LOCALLY(int player, bool toggle) { invoke<void *>(0xFAA10F1FAFB11AF2, player, toggle); }
static void FADE_OUT_LOCAL_PLAYER(bool p0) { invoke<void *>(0x416DBD4CD6ED8DD2, p0); }
static void NETWORK_FADE_OUT_ENTITY(int entity, bool normal, bool slow) { invoke<void *>(0xDE564951F95E09ED, entity, normal, slow); }
static void NETWORK_FADE_IN_ENTITY(int entity, bool state) { invoke<void *>(0x1F4ED342ACEFE62D, entity, state); }
static bool IS_PLAYER_IN_CUTSCENE(int player) { return invoke<bool>(0xE73092F4157CD126, player); }
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(int p0, bool p1, bool p2) { invoke<void *>(0xE0031D3C8F36AB82, p0, p1, p2); }
static void SET_ENTITY_LOCALLY_INVISIBLE(int entity) { invoke<void *>(0xE135A9FF3F5D05D8, entity); }
static void SET_ENTITY_LOCALLY_VISIBLE(int entity) { invoke<void *>(0x241E289B5C059EDC, entity); }
static bool IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<bool>(0x6E192E33AD436366, netID); }
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, bool p1) { invoke<void *>(0xD45B1FFCCD52FF19, netID, p1); }
static bool IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<bool>(0xD82CF8E64C8729D8, p0, p1, p2, p3); }
static bool IS_SPHERE_VISIBLE_TO_PLAYER(int p0, float p1, float p2, float p3, float p4) { return invoke<bool>(0xDC3A310219E5DA62, p0, p1, p2, p3, p4); }
static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<void *>(0x4E5C93BD0C32FBF8, amount); }
static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<void *>(0xB60FEBA45333D36F, amount); }
static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<void *>(0x76B02E21ED27A469, amount); }
static bool CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<bool>(0x800DD4721A8B008B, amount); }
static bool CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<bool>(0xBCBF4FEF9FA5D781, amount); }
static bool CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<bool>(0x7277F1F2E085EE74, amount); }
static bool CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<bool>(0x69778E7564BADE6D, ped_amt, vehicle_amt, object_amt, pickup_amt); }
static int GET_NUM_RESERVED_MISSION_OBJECTS(bool p0) { return invoke<int>(0xAA81B5F10BC43AC2, p0); }
static int GET_NUM_RESERVED_MISSION_PEDS(bool p0) { return invoke<int>(0x1F13D5AE5CB17E17, p0); }
static int GET_NUM_RESERVED_MISSION_VEHICLES(bool p0) { return invoke<int>(0xCF3A965906452031, p0); }
static int _0x12B6281B6C6706C0(bool p0) { return invoke<int>(0x12B6281B6C6706C0, p0); }
static int _0xCB215C4B56A7FAE7(bool p0) { return invoke<int>(0xCB215C4B56A7FAE7, p0); }
static int _0x0CD9AB83489430EA(bool p0) { return invoke<int>(0x0CD9AB83489430EA, p0); }
static int _0xC7BE335216B5EC7C() { return invoke<int>(0xC7BE335216B5EC7C); }
static int _0x0C1F7D49C39D2289() { return invoke<int>(0x0C1F7D49C39D2289); }
static int _0x0AFCE529F69B21FF() { return invoke<int>(0x0AFCE529F69B21FF); }
static int _0xA72835064DD63E4C() { return invoke<int>(0xA72835064DD63E4C); }
static int GET_NETWORK_TIME() { return invoke<int>(0x7A5487FE9FAA6B48); }
static int _0x89023FBBF9200E9F() { return invoke<int>(0x89023FBBF9200E9F); }
static bool HAS_NETWORK_TIME_STARTED() { return invoke<bool>(0x46718ACEEDEAFC84); }
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0x017008CCDAD48503, timeA, timeB); }
static bool IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<bool>(0xCB2CF5148012C8D0, timeA, timeB); }
static bool IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<bool>(0xDE350F8651E4346C, timeA, timeB); }
static bool IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<bool>(0xF5BC95857BD6D512, timeA, timeB); }
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xA2C6FC031D46FFF0, timeA, timeB); }
static char *GET_TIME_AS_STRING(int time) { return invoke<char *>(0x9E23B1777A927DAD, time); }
static int _GET_POSIX_TIME() { return invoke<int>(0x9A73240B49945C76); }
static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, int *timeStructure) { invoke<void *>(0xAC97AF97FA68E5D5, unixEpoch, timeStructure); }
static void NETWORK_SET_IN_SPECTATOR_MODE(bool toggle, int playerint) { invoke<void *>(0x423DE3854BB50894, toggle, playerint); }
static void _0x419594E137637120(bool p0, int p1, bool p2) { invoke<void *>(0x419594E137637120, p0, p1, p2); }
static void _0xFC18DB55AE19E046(bool p0) { invoke<void *>(0xFC18DB55AE19E046, p0); }
static void _0x5C707A667DF8B9FA(bool p0, int p1) { invoke<void *>(0x5C707A667DF8B9FA, p0, p1); }
static bool NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<bool>(0x048746E388762E11); }
static void NETWORK_SET_IN_MP_CUTSCENE(bool p0, bool p1) { invoke<void *>(0x9CA5DE655269FEC4, p0, p1); }
static bool NETWORK_IS_IN_MP_CUTSCENE() { return invoke<bool>(0x6CC27C9FA2040220); }
static bool NETWORK_IS_PLAYER_IN_MP_CUTSCENE(int player) { return invoke<bool>(0x63F9EE203C3619F2, player); }
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time) { invoke<void *>(0xEC51713AB6EC36E8, netId, time); }
static void _SET_NETWORK_VEHICLE_NON_CONTACT(int vehicle, bool toggle) { invoke<void *>(0x6274C4712850841E, vehicle, toggle); }
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(bool toggle) { invoke<void *>(0x5FFE9B4144F9712F, toggle); }
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int p6, int p7, int p8, float p9) { return invoke<int>(0x7CD6BC4C2BBDD526, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(int ped, int netScene, char *animDict, char *animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, int p9) { invoke<void *>(0x742A637471BCECD9, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(int entity, int netScene, char *animDict, char *animName, float speed, float speedMulitiplier, int flag) { invoke<void *>(0xF2404D68CBC855FA, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); }
static void _NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene, char *animDict, char *animName) { invoke<void *>(0xCF8BD3B0BD6D42D7, netScene, animDict, animName); }
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, int entity, int bone) { invoke<void *>(0x478DCBD2A98B705A, netScene, entity, bone); }
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<void *>(0x9A1B3FCDB36C8697, netScene); }
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<void *>(0xC254481A4574CB2F, netScene); }
static int _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(int netScene) { return invoke<int>(0x02C40BF885C567B6, netScene); }
static int _0xFB1F9381E80FA13F(int p0, int p1) { return invoke<int>(0xFB1F9381E80FA13F, p0, p1); }
static bool _0x5A6FFA2433E2F14C(int player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int flags) { return invoke<bool>(0x5A6FFA2433E2F14C, player, p1, p2, p3, p4, p5, p6, p7, flags); }
static bool _0x4BA92A18502BCA61(int player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, int flags) { return invoke<bool>(0x4BA92A18502BCA61, player, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, flags); }
static int _0x3C891A251567DFCE(int *p0) { return invoke<int>(0x3C891A251567DFCE, p0); }
static void _0xFB8F2A6F3DF08CBE() { invoke<void *>(0xFB8F2A6F3DF08CBE); }
static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3 *coordinates, float *heading) { invoke<void *>(0x371EA43692861CF1, randomInt, coordinates, heading); }
static int _0x6C34F1208B8923FD(int p0) { return invoke<int>(0x6C34F1208B8923FD, p0); }
static void _0x17E0198B3882C2CB() { invoke<void *>(0x17E0198B3882C2CB); }
static void _0xFB680D403909DC70(int p0, int p1) { invoke<void *>(0xFB680D403909DC70, p0, p1); }
static void NETWORK_END_TUTORIAL_SESSION() { invoke<void *>(0xD0AFAFF5A51D72F7); }
static int NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<int>(0xADA24309FE08DACF); }
static int _0xB37E4E6A2388CA7B() { return invoke<int>(0xB37E4E6A2388CA7B); }
static int _0x35F0B98A8387274D() { return invoke<int>(0x35F0B98A8387274D); }
static int _0x3B39236746714134(int p0) { return invoke<int>(0x3B39236746714134, p0); }
static bool _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(int player, int index) { return invoke<bool>(0x9DE986FC9A87C474, player, index); }
static void _0xBBDF066252829606(int p0, bool p1) { invoke<void *>(0xBBDF066252829606, p0, p1); }
static bool _0x919B3C98ED8292F9(int p0) { return invoke<bool>(0x919B3C98ED8292F9, p0); }
static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<void *>(0xE679E3E06E363892, Hours, Minutes, Seconds); }
static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<void *>(0xD972DF67326F966E); }
static bool NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<bool>(0xD7C95D322FF57522); }
static int NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<int>(0x494C8FB299290269, p0, p1, p2, p3, p4, p5); }
static int _0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<int>(0x25B99872D588A101, p0, p1, p2, p3, p4, p5); }
static bool NETWORK_REMOVE_ENTITY_AREA(int p0) { return invoke<bool>(0x93CF869BAA0C4874, p0); }
static bool _0xE64A3CA08DFA37A9(int p0) { return invoke<bool>(0xE64A3CA08DFA37A9, p0); }
static bool _0x4DF7CFFF471A7FB1(int p0) { return invoke<bool>(0x4DF7CFFF471A7FB1, p0); }
static bool _0x4A2D4E8BF4265B0F(int p0) { return invoke<bool>(0x4A2D4E8BF4265B0F, p0); }
static void _NETWORK_SET_NETWORK_ID_DYNAMIC(int netID, bool toggle) { invoke<void *>(0x2B1813ABA29016C5, netID, toggle); }
static bool _NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<bool>(0x924426BFFD82E915); }
static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<void *>(0x42FB3B532D526E6C); }
static int _0x10BD227A753B0D84() { return invoke<int>(0x10BD227A753B0D84); }
static bool NETWORK_DOES_TUNABLE_EXIST(char *tunableContext, char *tunableName) { return invoke<bool>(0x85E5F8B9B898B20A, tunableContext, tunableName); }
static bool NETWORK_ACCESS_TUNABLE_INT(char *tunableContext, char *tunableName, int *value) { return invoke<bool>(0x8BE1146DFD5D4468, tunableContext, tunableName, value); }
static bool NETWORK_ACCESS_TUNABLE_FLOAT(char *tunableContext, char *tunableName, float *value) { return invoke<bool>(0xE5608CA7BC163A5F, tunableContext, tunableName, value); }
static bool NETWORK_ACCESS_TUNABLE_bool(char *tunableContext, char *tunableName) { return invoke<bool>(0xAA6A47A573ABB75A, tunableContext, tunableName); }
static int _GET_TUNABLES_CONTENT_MODIFIER_ID(int contentint) { return invoke<int>(0x187382F8A3E0A6C3, contentint); }
static int _0x7DB53B37A2F211A0() { return invoke<int>(0x7DB53B37A2F211A0); }
static void NETWORK_RESET_BODY_TRACKER() { invoke<void *>(0x72433699B4E6DD64); }
static int _0xD38C4A6D047C019D() { return invoke<int>(0xD38C4A6D047C019D); }
static bool _0x2E0BF682CC778D49(int p0) { return invoke<bool>(0x2E0BF682CC778D49, p0); }
static bool _0x0EDE326D47CD0F3E(int ped, int player) { return invoke<bool>(0x0EDE326D47CD0F3E, ped, player); }
static int NETWORK_EXPLODE_VEHICLE(int vehicle, bool isAudible, bool isInvisible, bool p3) { return invoke<int>(0x301A42153C9AD707, vehicle, isAudible, isInvisible, p3); }
static void _0xCD71A4ECAB22709E(int entity) { invoke<void *>(0xCD71A4ECAB22709E, entity); }
static void _0xA7E30DE9272B6D49(int ped, float x, float y, float z, float p4) { invoke<void *>(0xA7E30DE9272B6D49, ped, x, y, z, p4); }
static void NETWORK_SET_PROPERTY_ID(int p0) { invoke<void *>(0x1775961C2FBBCB5C, p0); }
static void NETWORK_CLEAR_PROPERTY_ID() { invoke<void *>(0xC2B82527CA77053E); }
static void _0x367EF5E2F439B4C6(int p0) { invoke<void *>(0x367EF5E2F439B4C6, p0); }
static void _0x94538037EE44F5CF(bool p0) { invoke<void *>(0x94538037EE44F5CF, p0); }
static int _0xF2EAC213D5EA0623() { return invoke<int>(0xF2EAC213D5EA0623); }
static int _0xEA14EEF5B7CD2C30() { return invoke<int>(0xEA14EEF5B7CD2C30); }
static void _0xB606E6CC59664972(int p0) { invoke<void *>(0xB606E6CC59664972, p0); }
static int _0x1D4DC17C38FEAFF0() { return invoke<int>(0x1D4DC17C38FEAFF0); }
static int _0x662635855957C411(int p0) { return invoke<int>(0x662635855957C411, p0); }
static int _0xB4271092CA7EDF48(int p0) { return invoke<int>(0xB4271092CA7EDF48, p0); }
static int _0xCA94551B50B4932C(int p0) { return invoke<int>(0xCA94551B50B4932C, p0); }
static int _0x2A7776C709904AB0(int p0) { return invoke<int>(0x2A7776C709904AB0, p0); }
static int _0x6F44CBF56D79FAC0(int p0, int p1) { return invoke<int>(0x6F44CBF56D79FAC0, p0, p1); }
static void _0x58C21165F6545892(char *p0, char *p1) { invoke<void *>(0x58C21165F6545892, p0, p1); }
static int _0x2EAC52B4019E2782() { return invoke<int>(0x2EAC52B4019E2782); }
static void SET_STORE_ENABLED(bool toggle) { invoke<void *>(0x9641A9FF718E9C5E, toggle); }
static bool _0xA2F952104FC6DD4B(int p0) { return invoke<bool>(0xA2F952104FC6DD4B, p0); }
static void _0x72D0706CD6CCDB58() { invoke<void *>(0x72D0706CD6CCDB58); }
static int _0x722F5D28B61C5EA8(int p0) { return invoke<int>(0x722F5D28B61C5EA8, p0); }
static int _0x883D79C4071E18B3() { return invoke<int>(0x883D79C4071E18B3); }
static void _0x265635150FB0D82E() { invoke<void *>(0x265635150FB0D82E); }
static void _0x444C4525ECE0A4B9() { invoke<void *>(0x444C4525ECE0A4B9); }
static int _0x59328EB08C5CEB2B() { return invoke<int>(0x59328EB08C5CEB2B); }
static int _0xC64DED7EF0D2FE37(int *p0) { return invoke<int>(0xC64DED7EF0D2FE37, p0); }
static bool _0x4C61B39930D045DA(int p0) { return invoke<bool>(0x4C61B39930D045DA, p0); }
static bool _0x3A3D5568AF297CD5(int p0) { return invoke<bool>(0x3A3D5568AF297CD5, p0); }
static void _DOWNLOAD_CHECK() { invoke<void *>(0x4F18196C8D38768D); }
static int _0xC7ABAC5DE675EE3B() { return invoke<int>(0xC7ABAC5DE675EE3B); }
static int NETWORK_ENABLE_MOTION_DRUGGED() { return invoke<int>(0x0B0CC10720653F3B); }
static bool _0x152D90E4C1B4738A(int *p0, int *p1) { return invoke<bool>(0x152D90E4C1B4738A, p0, p1); }
static int _0x9FEDF86898F100E9() { return invoke<int>(0x9FEDF86898F100E9); }
static int _0x5E24341A7F92A74B() { return invoke<int>(0x5E24341A7F92A74B); }
static int _0x24E4E51FC16305F9() { return invoke<int>(0x24E4E51FC16305F9); }
static int _0xFBC5E768C7A77A6A() { return invoke<int>(0xFBC5E768C7A77A6A); }
static int _0xC55A0B40FFB1ED23() { return invoke<int>(0xC55A0B40FFB1ED23); }
static void _0x17440AA15D1D3739() { invoke<void *>(0x17440AA15D1D3739); }
static bool _0x9BF438815F5D96EA(int p0, int p1, int *p2, int p3, int p4, int p5) { return invoke<bool>(0x9BF438815F5D96EA, p0, p1, p2, p3, p4, p5); }
static bool _0x158EC424F35EC469(char *p0, bool p1, char *contentType) { return invoke<bool>(0x158EC424F35EC469, p0, p1, contentType); }
static bool _0x6D4CB481FAC835E8(int p0, int p1, int *p2, int p3) { return invoke<bool>(0x6D4CB481FAC835E8, p0, p1, p2, p3); }
static bool _0xD5A4B59980401588(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0xD5A4B59980401588, p0, p1, p2, p3); }
static bool _0x3195F8DD0D531052(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0x3195F8DD0D531052, p0, p1, p2, p3); }
static bool _0xF9E1CCAE8BA4C281(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0xF9E1CCAE8BA4C281, p0, p1, p2, p3); }
static bool _0x9F6E2821885CAEE2(int p0, int p1, int p2, int *p3, int *p4) { return invoke<bool>(0x9F6E2821885CAEE2, p0, p1, p2, p3, p4); }
static bool _0x678BB03C1A3BD51E(int p0, int p1, int p2, int *p3, int *p4) { return invoke<bool>(0x678BB03C1A3BD51E, p0, p1, p2, p3, p4); }
static bool SET_BALANCE_ADD_MACHINE(int *p0, int *p1) { return invoke<bool>(0x815E5E3073DA1D67, p0, p1); }
static bool SET_BALANCE_ADD_MACHINES(int *p0, int p1, int *p2) { return invoke<bool>(0xB8322EEB38BE7C26, p0, p1, p2); }
static bool _0xA7862BC5ED1DFD7E(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0xA7862BC5ED1DFD7E, p0, p1, p2, p3); }
static bool NETWORK_GET_BACKGROUND_LOADING_RECIPIENTS(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0x97A770BEEF227E2B, p0, p1, p2, p3); }
static bool _0x5324A0E3E4CE3570(int p0, int p1, int *p2, int *p3) { return invoke<bool>(0x5324A0E3E4CE3570, p0, p1, p2, p3); }
static void _0xE9B99B6853181409() { invoke<void *>(0xE9B99B6853181409); }
static int _0xD53ACDBEF24A46E8() { return invoke<int>(0xD53ACDBEF24A46E8); }
static int _0x02ADA21EA2F6918F() { return invoke<int>(0x02ADA21EA2F6918F); }
static int _0x941E5306BCD7C2C7() { return invoke<int>(0x941E5306BCD7C2C7); }
static int _0xC87E740D9F3872CC() { return invoke<int>(0xC87E740D9F3872CC); }
static int _0xEDF7F927136C224B() { return invoke<int>(0xEDF7F927136C224B); }
static int _0xE0A6138401BCB837() { return invoke<int>(0xE0A6138401BCB837); }
static int _0x769951E2455E2EB5() { return invoke<int>(0x769951E2455E2EB5); }
static int _0x3A17A27D75C74887() { return invoke<int>(0x3A17A27D75C74887); }
static void _0xBA96394A0EECFA65() { invoke<void *>(0xBA96394A0EECFA65); }
static char *_GET_CONTENT_USER_ID(int p0) { return invoke<char *>(0xCD67AD041A394C9C, p0); }
static int _0x703F12425ECA8BF5(int p0) { return invoke<int>(0x703F12425ECA8BF5, p0); }
static bool _0xAEAB987727C5A8A4(int p0) { return invoke<bool>(0xAEAB987727C5A8A4, p0); }
static int _GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xA7BAB11E7C9C6C5A, p0); }
static char *_GET_CONTENT_ID(int p0) { return invoke<char *>(0x55AA95F481D694D2, p0); }
static char *_GET_ROOT_CONTENT_ID(int p0) { return invoke<char *>(0xC0173D6BFF4E0348, p0); }
static int _0xBF09786A7FCAB582(int p0) { return invoke<int>(0xBF09786A7FCAB582, p0); }
static int _GET_CONTENT_DESCRIPTION_HASH(int p0) { return invoke<int>(0x7CF0448787B23758, p0); }
static int _0xBAF6BABF9E7CCC13(int p0, int p1) { return invoke<int>(0xBAF6BABF9E7CCC13, p0, p1); }
static void _0xCFD115B373C0DF63(int p0, int *p1) { invoke<void *>(0xCFD115B373C0DF63, p0, p1); }
static int _GET_CONTENT_FILE_VERSION(int p0, int p1) { return invoke<int>(0x37025B27D9B658B1, p0, p1); }
static int _0x32DD916F3F7C9672(int p0) { return invoke<int>(0x32DD916F3F7C9672, p0); }
static bool _0x3054F114121C21EA(int p0) { return invoke<bool>(0x3054F114121C21EA, p0); }
static bool _0xA9240A96C74CCA13(int p0) { return invoke<bool>(0xA9240A96C74CCA13, p0); }
static int _0x1ACCFBA3D8DAB2EE(int p0, int p1) { return invoke<int>(0x1ACCFBA3D8DAB2EE, p0, p1); }
static int _0x759299C5BB31D2A9(int p0, int p1) { return invoke<int>(0x759299C5BB31D2A9, p0, p1); }
static int _0x87E5C46C187FE0AE(int p0, int p1) { return invoke<int>(0x87E5C46C187FE0AE, p0, p1); }
static int _0x4E548C0D7AE39FF9(int p0, int p1) { return invoke<int>(0x4E548C0D7AE39FF9, p0, p1); }
static bool _0x70EA8DA57840F9BE(int p0) { return invoke<bool>(0x70EA8DA57840F9BE, p0); }
static bool _0x993CBE59D350D225(int p0) { return invoke<bool>(0x993CBE59D350D225, p0); }
static int _0x171DF6A0C07FB3DC(int p0, int p1) { return invoke<int>(0x171DF6A0C07FB3DC, p0, p1); }
static int _0x7FD2990AF016795E(int *p0, int *p1, int p2, int p3, int p4) { return invoke<int>(0x7FD2990AF016795E, p0, p1, p2, p3, p4); }
static int _0x5E0165278F6339EE(int p0) { return invoke<int>(0x5E0165278F6339EE, p0); }
static bool _0x2D5DC831176D0114(int p0) { return invoke<bool>(0x2D5DC831176D0114, p0); }
static bool _0xEBFA8D50ADDC54C4(int p0) { return invoke<bool>(0xEBFA8D50ADDC54C4, p0); }
static bool _0x162C23CA83ED0A62(int p0) { return invoke<bool>(0x162C23CA83ED0A62, p0); }
static int _0x40F7E66472DF3E5C(int p0, int p1) { return invoke<int>(0x40F7E66472DF3E5C, p0, p1); }
static bool _0x5A34CD9C3C5BEC44(int p0) { return invoke<bool>(0x5A34CD9C3C5BEC44, p0); }
static void _0x68103E2247887242() { invoke<void *>(0x68103E2247887242); }
static bool _0x1DE0F5F50D723CAA(int *p0, int *p1, int *p2) { return invoke<bool>(0x1DE0F5F50D723CAA, p0, p1, p2); }
static bool _0x274A1519DFC1094F(int *p0, bool p1, int *p2) { return invoke<bool>(0x274A1519DFC1094F, p0, p1, p2); }
static bool _0xD05D1A6C74DA3498(int *p0, bool p1, int *p2) { return invoke<bool>(0xD05D1A6C74DA3498, p0, p1, p2); }
static int _0x45E816772E93A9DB() { return invoke<int>(0x45E816772E93A9DB); }
static int _0x299EF3C576773506() { return invoke<int>(0x299EF3C576773506); }
static int _0x793FF272D5B365F4() { return invoke<int>(0x793FF272D5B365F4); }
static int _0x5A0A3D1A186A5508() { return invoke<int>(0x5A0A3D1A186A5508); }
static void _0xA1E5E0204A6FCC70() { invoke<void *>(0xA1E5E0204A6FCC70); }
static bool _0xB746D20B17F2A229(int *p0, int *p1) { return invoke<bool>(0xB746D20B17F2A229, p0, p1); }
static int _0x63B406D7884BFA95() { return invoke<int>(0x63B406D7884BFA95); }
static int _0x4D02279C83BE69FE() { return invoke<int>(0x4D02279C83BE69FE); }
static int _0x597F8DBA9B206FC7() { return invoke<int>(0x597F8DBA9B206FC7); }
static bool _0x5CAE833B0EE0C500(int p0) { return invoke<bool>(0x5CAE833B0EE0C500, p0); }
static void _0x61A885D3F7CFEE9A() { invoke<void *>(0x61A885D3F7CFEE9A); }
static void _0xF98DDE0A8ED09323(bool p0) { invoke<void *>(0xF98DDE0A8ED09323, p0); }
static void _0xFD75DABC0957BF33(bool p0) { invoke<void *>(0xFD75DABC0957BF33, p0); }
static bool _0xF53E48461B71EECB(int p0) { return invoke<bool>(0xF53E48461B71EECB, p0); }
static bool _0x098AB65B9ED9A9EC(int *p0, int p1, int p2) { return invoke<bool>(0x098AB65B9ED9A9EC, p0, p1, p2); }
static int _0xDC48473142545431() { return invoke<int>(0xDC48473142545431); }
static bool _0x0AE1F1653B554AB9(int p0) { return invoke<bool>(0x0AE1F1653B554AB9, p0); }
static int _0x62B9FEC9A11F10EF() { return invoke<int>(0x62B9FEC9A11F10EF); }
static int _0xA75E2B6733DA5142() { return invoke<int>(0xA75E2B6733DA5142); }
static int _0x43865688AE10F0D7() { return invoke<int>(0x43865688AE10F0D7); }
static int TEXTURE_DOWNLOAD_REQUEST(int *intHandle, char *FilePath, char *Name, bool p3) { return invoke<int>(0x16160DA74A8E74A2, intHandle, FilePath, Name, p3); }
static int _0x0B203B4AFDE53A4F(int *p0, int *p1, bool p2) { return invoke<int>(0x0B203B4AFDE53A4F, p0, p1, p2); }
static int _0x308F96458B7087CC(int *p0, int p1, int p2, int p3, int *p4, bool p5) { return invoke<int>(0x308F96458B7087CC, p0, p1, p2, p3, p4, p5); }
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<void *>(0x487EB90B98E9FB19, p0); }
static bool TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<bool>(0x5776ED562C134687, p0); }
static char *TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<char *>(0x3448505B6E35262D, p0); }
static int _0x8BD6C6DEA20E82C6(int p0) { return invoke<int>(0x8BD6C6DEA20E82C6, p0); }
static int _0x60EDD13EB3AC1FF3() { return invoke<int>(0x60EDD13EB3AC1FF3); }
static bool NETWORK_IS_CABLE_CONNECTED() { return invoke<bool>(0xEFFB25453D8600F9); }
static int _0x66B59CFFD78467AF() { return invoke<int>(0x66B59CFFD78467AF); }
static int _0x606E4D3E3CCCF3EB() { return invoke<int>(0x606E4D3E3CCCF3EB); }
static bool _IS_ROCKSTAR_BANNED() { return invoke<bool>(0x8020A73847E0CA7D); }
static bool _IS_SOCIALCLUB_BANNED() { return invoke<bool>(0xA0AD7E2AF5349F61); }
static bool _CAN_PLAY_ONLINE() { return invoke<bool>(0x5F91D5D0B36AA310); }
static int _0x422D396F80A96547() { return invoke<int>(0x422D396F80A96547); }
static bool _0xA699957E60D80214(int p0) { return invoke<bool>(0xA699957E60D80214, p0); }
static bool _0xC22912B1D85F26B1(int p0, int *p1, int *p2) { return invoke<bool>(0xC22912B1D85F26B1, p0, p1, p2); }
static void _0x9465E683B12D3F6B() { invoke<void *>(0x9465E683B12D3F6B); }
static void _0xB7C7F6AD6424304B() { invoke<void *>(0xB7C7F6AD6424304B); }
static void _0xC505036A35AFD01B(bool p0) { invoke<void *>(0xC505036A35AFD01B, p0); }
static void _0x267C78C60E806B9A(int p0, bool p1) { invoke<void *>(0x267C78C60E806B9A, p0, p1); }
static void NETWORK_INITIALIZE_CASH(int p0, int p1) { invoke<void *>(0x3DA5ECD1A56CBA6D, p0, p1); }
static void NETWORK_DELETE_CHARACTER(int characterIndex, bool p1, bool p2) { invoke<void *>(0x05A50AF38947EB8D, characterIndex, p1, p2); }
static void NETWORK_CLEAR_CHARACTER_WALLET(int p0) { invoke<void *>(0xA921DED15FDF28F5, p0); }
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, int *networkHandle) { invoke<void *>(0xFB18DF9CB95E0105, amount, networkHandle); }
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, int *networkHandle) { invoke<void *>(0x56A3B51944C50598, value, networkHandle); }
static int _0x1C2473301B1C66BA() { return invoke<int>(0x1C2473301B1C66BA); }
static void NETWORK_REFUND_CASH(int index, char *context, char *reason, bool unk) { invoke<void *>(0xF9C812CD7C46E817, index, context, reason, unk); }
static bool NETWORK_MONEY_CAN_BET(int p0, bool p1, bool p2) { return invoke<bool>(0x81404F3DC124FE5B, p0, p1, p2); }
static bool NETWORK_CAN_BET(int p0) { return invoke<bool>(0x3A54E33660DED67F, p0); }
static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<void *>(0xED1517D3AF17C698, amount); }
static void _NETWORK_EARN_FROM_GANG_PICKUP(int amount) { invoke<void *>(0xA03D4ACE0A3284CE, amount); }
static void _NETWORK_EARN_FROM_ARMOUR_TRUCK(int amount) { invoke<void *>(0xF514621E8EA463D0, amount); }
static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<void *>(0xB1CC1B9EC3007A2A, amount); }
static void NETWORK_EARN_FROM_BETTING(int amount, char *p1) { invoke<void *>(0x827A5BA1A44ACA6D, amount, p1); }
static void NETWORK_EARN_FROM_JOB(int amount, char *p1) { invoke<void *>(0xB2CC4836834E8A98, amount, p1); }
static void NETWORK_EARN_FROM_MISSION_H(int amount, char *heistint) { invoke<void *>(0x61326EE6DF15B0CA, amount, heistint); }
static void NETWORK_EARN_FROM_CHALLENGE_WIN(int p0, int *p1, bool p2) { invoke<void *>(0x2B171E6B2F64D8DF, p0, p1, p2); }
static void NETWORK_EARN_FROM_BOUNTY(int amount, int *networkHandle, int *p2, int p3) { invoke<void *>(0x131BB5DA15453ACF, amount, networkHandle, p2, p3); }
static void NETWORK_EARN_FROM_IMPORT_EXPORT(int p0, int p1) { invoke<void *>(0xF92A014A634442D6, p0, p1); }
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<void *>(0x45B8154E077D9E4D, amount); }
static void NETWORK_EARN_FROM_PROPERTY(int amount, int propertyName) { invoke<void *>(0x849648349D77F5C5, amount, propertyName); }
static void NETWORK_EARN_FROM_AI_TARGET_KILL(int p0, int p1) { invoke<void *>(0x515B4A22E4D3C6D7, p0, p1); }
static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<void *>(0x4337511FA8221D36, amount); }
static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<void *>(0x02CE1D6AC0FC73EA, amount); }
static void NETWORK_EARN_FROM_VEHICLE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) { invoke<void *>(0xB539BD8A4C1EECF8, p0, p1, p2, p3, p4, p5, p6, p7); }
static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8) { invoke<void *>(0x3F4D00167E41E0AD, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static bool NETWORK_CAN_SPEND_MONEY(int p0, bool p1, bool p2, bool p3, int p4) { return invoke<bool>(0xAB3CAA6B422164DA, p0, p1, p2, p3, p4); }
static void NETWORK_BUY_ITEM(int player, int item, int p2, int p3, bool p4, char *item_name, int p6, int p7, int p8, bool p9) { invoke<void *>(0xF0077C797F66A355, player, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
static void NETWORK_SPENT_TAXI(int amount, bool p1, bool p2) { invoke<void *>(0x17C3A7D31EAE39F9, amount, p1, p2); }
static void NETWORK_PAY_EMPLOYEE_WAGE(int p0, bool p1, bool p2) { invoke<void *>(0x5FD5ED82CBBE9989, p0, p1, p2); }
static void NETWORK_PAY_UTILITY_BILL(int p0, bool p1, bool p2) { invoke<void *>(0xAFE08B35EC0C9EAE, p0, p1, p2); }
static void NETWORK_PAY_MATCH_ENTRY_FEE(int value, int *p1, bool p2, bool p3) { invoke<void *>(0x9346E14F2AF74D46, value, p1, p2, p3); }
static void NETWORK_SPENT_BETTING(int p0, int p1, int *p2, bool p3, bool p4) { invoke<void *>(0x1C436FD11FFA692F, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_IN_STRIPCLUB(int p0, bool p1, int p2, bool p3) { invoke<void *>(0xEE99784E4467689C, p0, p1, p2, p3); }
static void NETWORK_BUY_HEALTHCARE(int cost, bool p1, bool p2) { invoke<void *>(0xD9B067E55253E3DD, cost, p1, p2); }
static void NETWORK_BUY_AIRSTRIKE(int cost, bool p1, bool p2) { invoke<void *>(0x763B4BD305338F19, cost, p1, p2); }
static void NETWORK_BUY_HELI_STRIKE(int cost, bool p1, bool p2) { invoke<void *>(0x81AA4610E3FD3A69, cost, p1, p2); }
static void NETWORK_SPENT_AMMO_DROP(int p0, bool p1, bool p2) { invoke<void *>(0xB162DC95C0A3317B, p0, p1, p2); }
static void NETWORK_BUY_BOUNTY(int amount, int victim, bool p2, bool p3) { invoke<void *>(0x7B718E197453F2D9, amount, victim, p2, p3); }
static void NETWORK_BUY_PROPERTY(float propertyCost, int propertyName, bool p2, bool p3) { invoke<void *>(0x650A08A280870AF6, propertyCost, propertyName, p2, p3); }
static void NETWORK_SPENT_HELI_PICKUP(int p0, bool p1, bool p2) { invoke<void *>(0x7BF1D73DB2ECA492, p0, p1, p2); }
static void NETWORK_SPENT_BOAT_PICKUP(int p0, bool p1, bool p2) { invoke<void *>(0x524EE43A37232C00, p0, p1, p2); }
static void NETWORK_SPENT_BULL_SHARK(int p0, bool p1, bool p2) { invoke<void *>(0xA6DD8458CE24012C, p0, p1, p2); }
static void NETWORK_SPENT_CASH_DROP(int amount, bool p1, bool p2) { invoke<void *>(0x289016EC778D60E0, amount, p1, p2); }
static void NETWORK_SPENT_HIRE_MUGGER(int p0, bool p1, bool p2) { invoke<void *>(0xE404BFB981665BF0, p0, p1, p2); }
static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, bool p1, bool p2) { invoke<void *>(0x995A65F15F581359, amount, p1, p2); }
static void NETWORK_SPENT_HIRE_MERCENARY(int p0, bool p1, bool p2) { invoke<void *>(0xE7B80E2BF9D80BD6, p0, p1, p2); }
static void NETWORK_SPENT_BUY_WANTEDLEVEL(int p0, int *p1, bool p2, bool p3) { invoke<void *>(0xE1B13771A843C4F6, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_OFFTHERADAR(int p0, bool p1, bool p2) { invoke<void *>(0xA628A745E2275C5D, p0, p1, p2); }
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(int p0, bool p1, bool p2) { invoke<void *>(0x6E176F1B18BC0637, p0, p1, p2); }
static void NETWORK_SPENT_CARWASH(int p0, int p1, int p2, bool p3, bool p4) { invoke<void *>(0xEC03C719DB2F4306, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_CINEMA(int p0, int p1, bool p2, bool p3) { invoke<void *>(0x6B38ECB05A63A685, p0, p1, p2, p3); }
static void NETWORK_SPENT_TELESCOPE(int p0, bool p1, bool p2) { invoke<void *>(0x7FE61782AD94CC09, p0, p1, p2); }
static void NETWORK_SPENT_HOLDUPS(int p0, bool p1, bool p2) { invoke<void *>(0xD9B86B9872039763, p0, p1, p2); }
static void NETWORK_SPENT_BUY_PASSIVE_MODE(int p0, bool p1, bool p2) { invoke<void *>(0x6D3A430D1A809179, p0, p1, p2); }
static void NETWORK_SPENT_PROSTITUTES(int p0, bool p1, bool p2) { invoke<void *>(0xB21B89501CFAC79E, p0, p1, p2); }
static void NETWORK_SPENT_ARREST_BAIL(int p0, bool p1, bool p2) { invoke<void *>(0x812F5488B1B2A299, p0, p1, p2); }
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, int vehicleModel, int *networkHandle, bool notBankrupt, bool hasTheMoney) { invoke<void *>(0x9FF28D88C766E3E8, amount, vehicleModel, networkHandle, notBankrupt, hasTheMoney); }
static void NETWORK_SPENT_CALL_PLAYER(int p0, int *p1, bool p2, bool p3) { invoke<void *>(0xACDE7185B374177C, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOUNTY(int p0, bool p1, bool p2) { invoke<void *>(0x29B260B84947DFCC, p0, p1, p2); }
static void NETWORK_SPENT_FROM_ROCKSTAR(int bank, bool p1, bool p2) { invoke<void *>(0x6A445B64ED7ABEB5, bank, p1, p2); }
static char *PROCESS_CASH_GIFT(int *p0, int *p1, char *p2) { return invoke<char *>(0x20194D48EAEC9A41, p0, p1, p2); }
static void NETWORK_SPENT_PLAYER_HEALTHCARE(int p0, int p1, bool p2, bool p3) { invoke<void *>(0x7C99101F7FCE2EE5, p0, p1, p2, p3); }
static void NETWORK_SPENT_NO_COPS(int p0, bool p1, bool p2) { invoke<void *>(0xD5BB406F4E04019F, p0, p1, p2); }
static void NETWORK_SPENT_REQUEST_JOB(int p0, bool p1, bool p2) { invoke<void *>(0x8204DA7934DF3155, p0, p1, p2); }
static void NETWORK_BUY_FAIRGROUND_RIDE(int amountSpent, int p1, bool p2, bool p3) { invoke<void *>(0x8A7B3952DD64D2B5, amountSpent, p1, p2, p3); }
static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0x76EF28DA05EA395A); }
static int NETWORK_GET_VC_WALLET_BALANCE(int character) { return invoke<int>(0xA40F9C2623F6A8B5, character); }
static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0x5CBAD97E059E1B94); }
static bool NETWORK_CAN_RECEIVE_PLAYER_CASH(int p0, int p1, int p2, int p3) { return invoke<bool>(0x5D17BE59D2123284, p0, p1, p2, p3); }
static int _0xF70EFA14FE091429(int p0) { return invoke<int>(0xF70EFA14FE091429, p0); }
static bool _0xE260E0BB9CD995AC(int p0) { return invoke<bool>(0xE260E0BB9CD995AC, p0); }
static bool _0xE154B48B68EF72BC(int p0) { return invoke<bool>(0xE154B48B68EF72BC, p0); }
static bool _0x6FCF8DDEA146C45B(int p0) { return invoke<bool>(0x6FCF8DDEA146C45B, p0); }
static int _GET_NUM_DECORATIONS(int character) { return invoke<int>(0x278F76C3B0A8F109, character); }
static bool _0xFF56381874F82086(int p0, int p1, int *outComponent) { return invoke<bool>(0xFF56381874F82086, p0, p1, outComponent); }
static void INIT_SHOP_PED_COMPONENT(int *outComponent) { invoke<void *>(0x1E8C308FD312C036, outComponent); }
static void INIT_SHOP_PED_PROP(int *outProp) { invoke<void *>(0xEB0A2B758F7B850F, outProp); }
static int _0x50F457823CE6EB5F(int p0, int p1, int p2, int p3) { return invoke<int>(0x50F457823CE6EB5F, p0, p1, p2, p3); }
static int _GET_NUM_PROPS_FROM_OUTFIT(int character, int p1, int p2, bool p3, int p4, int componentId) { return invoke<int>(0x9BDF59818B1E38C1, character, p1, p2, p3, p4, componentId); }
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, int *outComponent) { invoke<void *>(0x249E310B2D920699, componentId, outComponent); }
static void GET_SHOP_PED_COMPONENT(int p0, int *p1) { invoke<void *>(0x74C0E2A57EC66760, p0, p1); }
static void GET_SHOP_PED_QUERY_PROP(int p0, int *p1) { invoke<void *>(0xDE44A00999B2837D, p0, p1); }
static int GET_HASH_NAME_FOR_COMPONENT(int entity, int componentId, int drawableVariant, int textureVariant) { return invoke<int>(0x0368B3A838070348, entity, componentId, drawableVariant, textureVariant); }
static int GET_HASH_NAME_FOR_PROP(int entity, int componentId, int propIndex, int propTextureIndex) { return invoke<int>(0x5D6160275CAEC8DD, entity, componentId, propIndex, propTextureIndex); }
static int _0xC17AD0E5752BECDA(int componentint) { return invoke<int>(0xC17AD0E5752BECDA, componentint); }
static void GET_VARIANT_COMPONENT(int componentint, int componentId, int *p2, int *p3, int *p4) { invoke<void *>(0x6E11F282F11863B6, componentint, componentId, p2, p3, p4); }
static int _GET_NUM_FORCED_COMPONENTS(int componentint) { return invoke<int>(0xC6B9DB42C04DD8C3, componentint); }
static void GET_FORCED_COMPONENT(int componentint, int componentId, int *p2, int *p3, int *p4) { invoke<void *>(0x6C93ED8C2F74859B, componentint, componentId, p2, p3, p4); }
static bool _0x341DE7ED1D2A1BFD(int componentint, int drawableSlotint, int componentId) { return invoke<bool>(0x341DE7ED1D2A1BFD, componentint, drawableSlotint, componentId); }
static int _0xF3FBE2D50A6A8C28(int character, bool p1) { return invoke<int>(0xF3FBE2D50A6A8C28, character, p1); }
static void GET_SHOP_PED_QUERY_OUTFIT(int p0, int *outfit) { invoke<void *>(0x6D793F03A631FE56, p0, outfit); }
static void GET_SHOP_PED_OUTFIT(int p0, int *p1) { invoke<void *>(0xB7952076E444979D, p0, p1); }
static int GET_SHOP_PED_OUTFIT_LOCATE(int p0) { return invoke<int>(0x073CA26B079F956E, p0); }
static bool _0xA9F9C2E0FDE11CBB(int p0, int p1, int *p2) { return invoke<bool>(0xA9F9C2E0FDE11CBB, p0, p1, p2); }
static bool _GET_PROP_FROM_OUTFIT(int outfit, int slot, int *item) { return invoke<bool>(0x19F2A026EDF0013F, outfit, slot, item); }
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xA7A866D21CD2329B); }
static int GET_DLC_VEHICLE_MODEL(int dlcintIndex) { return invoke<int>(0xECC01B7C5763333C, dlcintIndex); }
static bool GET_DLC_VEHICLE_DATA(int dlcintIndex, int *outData) { return invoke<bool>(0x33468EDC08E371F6, dlcintIndex, outData); }
static int GET_DLC_VEHICLE_FLAGS(int dlcintIndex) { return invoke<int>(0x5549EE11FA22FCF2, dlcintIndex); }
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xEE47635F352DA367); }
static bool GET_DLC_WEAPON_DATA(int dlcWeaponIndex, int *outData) { return invoke<bool>(0x79923CD21BECE14E, dlcWeaponIndex, outData); }
static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0x405425358A7D61FE, dlcWeaponIndex); }
static bool GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, int *ComponentDataPtr) { return invoke<bool>(0x6CF598A2957C2BF8, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static bool _IS_DLC_DATA_EMPTY(int dlcData) { return invoke<bool>(0xD4D7B033C3AA243C, dlcData); }
static bool IS_DLC_VEHICLE_MOD(int modData) { return invoke<bool>(0x0564B9FF9631B82C, modData); }
static int _0xC098810437312FFF(int modData) { return invoke<int>(0xC098810437312FFF, modData); }
static bool IS_DLC_PRESENT(int dlcint) { return invoke<bool>(0x812595A0644CE1DE, dlcint); }
static bool _0xF2E07819EF1A5289() { return invoke<bool>(0xF2E07819EF1A5289); }
static int _0x9489659372A81585() { return invoke<int>(0x9489659372A81585); }
static int _0xA213B11DFF526300() { return invoke<int>(0xA213B11DFF526300); }
static int _0x8D30F648014A92B5() { return invoke<int>(0x8D30F648014A92B5); }
static bool GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<bool>(0x10D0A8F259E93EC9); }
static bool _NULLIFY(int *variable, int unused) { return invoke<bool>(0x46E2B844905BC5F0, variable, unused); }
static void WAIT(int ms) { invoke<void *>(0x4EDE34FBADD967A6, ms); }
static int START_NEW_SCRIPT(char *scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); }
static int START_NEW_SCRIPT_WITH_ARGS(char *scriptName, int *args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH(int scriptint, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptint, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(int scriptint, int *args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptint, args, argCount, stackSize); }
static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); }
static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); }
static void SETTIMERA(int value) { invoke<void *>(0xC1B1E9A034A63A62, value); }
static void SETTIMERB(int value) { invoke<void *>(0x5AE11BC36633DE4E, value); }
static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); }
static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); }
static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); }
static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); }
static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); }
static float VMAG(float x, float y, float z) { return invoke<float>(0x652D2EEEF1D3E62C, x, y, z); }
static float VMAG2(float x, float y, float z) { return invoke<float>(0xA8CEACB4F35AE058, x, y, z); }
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); }
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); }
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); }
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); }
static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); }
static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); }
static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); }
static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); }
static bool DECOR_SET_TIME(int entity, char *propertyName, int timestamp) { return invoke<bool>(0x95AED7B8E39ECAA4, entity, propertyName, timestamp); }
static bool DECOR_SET_bool(int entity, char *propertyName, bool value) { return invoke<bool>(0x6B1E8E2ED1335B71, entity, propertyName, value); }
static bool DECOR_SET_INT(int entity, char *propertyName, int value) { return invoke<bool>(0x0CE3AA5E1CA19E10, entity, propertyName, value); }
static bool DECOR_GET_bool(int entity, char *propertyName) { return invoke<bool>(0xDACE671663F2F5DB, entity, propertyName); }
static int DECOR_GET_INT(int entity, char *propertyName) { return invoke<int>(0xA06C969B02A97298, entity, propertyName); }
static bool DECOR_EXIST_ON(int entity, char *propertyName) { return invoke<bool>(0x05661B80A8C9165F, entity, propertyName); }
static bool DECOR_REMOVE(int entity, char *propertyName) { return invoke<bool>(0x00EE9F297C738720, entity, propertyName); }
static void DECOR_REGISTER(char *propertyName, int type) { invoke<void *>(0x9FD90732F56403CE, propertyName, type); }
static bool DECOR_IS_REGISTERED_AS_TYPE(char *propertyName, int type) { return invoke<bool>(0x4F14F9F870D6FBC8, propertyName, type); }
static void DECOR_REGISTER_LOCK() { invoke<void *>(0xA9D14EEA259F9248); }
static int _GET_TOTAL_SC_INBOX_IDS() { return invoke<int>(0x03A93FF1A2CA0864); }
static int _SC_INBOX_MESSAGE_INIT(int p0) { return invoke<int>(0xBB8EA16ECBC976C4, p0); }
static bool _IS_SC_INBOX_VALID(int p0) { return invoke<bool>(0x93028F1DB42BFD08, p0); }
static bool _SC_INBOX_MESSAGE_POP(int p0) { return invoke<bool>(0x2C015348CF19CA1D, p0); }
static bool SC_INBOX_MESSAGE_GET_DATA_INT(int p0, char *context, int *out) { return invoke<bool>(0xA00EFE4082C4056E, p0, context, out); }
static bool SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, char *context, char *out) { return invoke<bool>(0x7572EF42FC6A9B6D, p0, context, out); }
static bool _SC_INBOX_MESSAGE_PUSH(int p0) { return invoke<bool>(0x9A2C8064B6C1E41A, p0); }
static char *_SC_INBOX_MESSAGE_GET_STRING(int p0) { return invoke<char *>(0xF3E31D16CBDCB304, p0); }
static void _0xDA024BDBD600F44A(int *p0) { invoke<void *>(0xDA024BDBD600F44A, p0); }
static void _0xA68D3D229F4F3B06(char *p0) { invoke<void *>(0xA68D3D229F4F3B06, p0); }
static bool SC_INBOX_MESSAGE_GET_UGCDATA(int p0, int *p1) { return invoke<bool>(0x69D82604A1A5A254, p0, p1); }
static bool _0x6AFD2CD753FEEF83(char *p0) { return invoke<bool>(0x6AFD2CD753FEEF83, p0); }
static bool _0x87E0052F08BD64E6(int p0, int *p1) { return invoke<bool>(0x87E0052F08BD64E6, p0, p1); }
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(int *player) { invoke<void *>(0x2330C12A7A605D16, player); }
static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<void *>(0x55DF6DB45179236E); }
static void _0x116FB94DC4B79F17(char *p0) { invoke<void *>(0x116FB94DC4B79F17, p0); }
static void _0xBFA0A56A817C6C7D(bool p0) { invoke<void *>(0xBFA0A56A817C6C7D, p0); }
static int _0xBC1CC91205EC8D6E() { return invoke<int>(0xBC1CC91205EC8D6E); }
static int _0xDF649C4E9AFDD788() { return invoke<int>(0xDF649C4E9AFDD788); }
static bool _0x1F1E9682483697C7(int p0, int p1) { return invoke<bool>(0x1F1E9682483697C7, p0, p1); }
static bool _0x287F1F75D2803595(int p0, int *p1) { return invoke<bool>(0x287F1F75D2803595, p0, p1); }
static bool _0x487912FD248EFDDF(int p0, float p1) { return invoke<bool>(0x487912FD248EFDDF, p0, p1); }
static bool _0x8416FE4E4629D7D7(char *p0) { return invoke<bool>(0x8416FE4E4629D7D7, p0); }
static bool _SC_START_CHECK_STRING_TASK(char *string, int *taskHandle) { return invoke<bool>(0x75632C5ECD7ED843, string, taskHandle); }
static bool _SC_HAS_CHECK_STRING_TASK_COMPLETED(int taskHandle) { return invoke<bool>(0x1753344C770358AE, taskHandle); }
static int _SC_GET_CHECK_STRING_STATUS(int taskHandle) { return invoke<int>(0x82E4A58BABC15AE7, taskHandle); }
static int _0x85535ACF97FC0969(int p0) { return invoke<int>(0x85535ACF97FC0969, p0); }
static int _0x930DE22F07B1CCE3(int p0) { return invoke<int>(0x930DE22F07B1CCE3, p0); }
static bool _0xF6BAAAF762E1BF40(char *p0, int *p1) { return invoke<bool>(0xF6BAAAF762E1BF40, p0, p1); }
static bool _0xF22CA0FD74B80E7A(int p0) { return invoke<bool>(0xF22CA0FD74B80E7A, p0); }
static int _0x9237E334F6E43156(int p0) { return invoke<int>(0x9237E334F6E43156, p0); }
static int _0xFF8F3A92B75ED67A() { return invoke<int>(0xFF8F3A92B75ED67A); }
static int _0x4A7D6E727F941747(int *p0) { return invoke<int>(0x4A7D6E727F941747, p0); }
static bool _0x8CC469AB4D349B7C(int p0, char *p1, int *p2) { return invoke<bool>(0x8CC469AB4D349B7C, p0, p1, p2); }
static bool _0x699E4A5C8C893A18(int p0, char *p1, int *p2) { return invoke<bool>(0x699E4A5C8C893A18, p0, p1, p2); }
static bool _0x19853B5B17D77BCA(int p0, int *p1) { return invoke<bool>(0x19853B5B17D77BCA, p0, p1); }
static bool _0x6BFB12CE158E3DD4(int p0) { return invoke<bool>(0x6BFB12CE158E3DD4, p0); }
static bool _0xFE4C1D0D3B9CC17E(int p0, int p1) { return invoke<bool>(0xFE4C1D0D3B9CC17E, p0, p1); }
static int _0xD8122C407663B995() { return invoke<int>(0xD8122C407663B995); }
static bool _0x3001BEF2FECA3680() { return invoke<bool>(0x3001BEF2FECA3680); }
static bool _0x92DA6E70EF249BD1(char *p0, int *p1) { return invoke<bool>(0x92DA6E70EF249BD1, p0, p1); }
static void _0x675721C9F644D161() { invoke<void *>(0x675721C9F644D161); }
static int _0xF2CA003F167E21D2() { return invoke<int>(0xF2CA003F167E21D2); }
static bool _0xEF7D17BC6C85264C() { return invoke<bool>(0xEF7D17BC6C85264C); }
static void _0xB0C56BD3D808D863(bool p0) { invoke<void *>(0xB0C56BD3D808D863, p0); }
static int _0x8AA464D4E0F6ACCD() { return invoke<int>(0x8AA464D4E0F6ACCD); }
static void _IS_IN_LOADING_SCREEN(bool p0) { invoke<void *>(0xFC309E94546FCDB5, p0); }
static bool _IS_UI_LOADING_MULTIPLAYER() { return invoke<bool>(0xC6DC823253FBB366); }
static void _0xC7E7181C09F33B69(bool p0) { invoke<void *>(0xC7E7181C09F33B69, p0); }
static void _0xFA1E0E893D915215(bool p0) { invoke<void *>(0xFA1E0E893D915215, p0); }