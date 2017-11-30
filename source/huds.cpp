#include "huds.h"

#include "natives.h"

void drawText(char *text, int font, float size, float x, float y, Color color, Align align, int layer) {
    switch (align) {
        case center: SET_TEXT_CENTRE(true); break;
        case right:
            SET_TEXT_RIGHT_JUSTIFY(true); 
            SET_TEXT_WRAP(0, x);
            x = 0;
            break;
        default:
            break;
    }
    SET_TEXT_FONT(font);
    SET_TEXT_SCALE(size, size);
    SET_TEXT_COLOUR(color.r, color.g, color.b, color.a);
    SET_TEXT_OUTLINE();
    BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
    ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
    _SET_2D_LAYER(layer);
    END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
}
void drawRect(float x, float y, float width, float height, Color color, int layer) {
	_SET_2D_LAYER(layer);
	DRAW_RECT(x, y, width, height, color.r, color.g, color.b, color.a);
}
void drawSprite(char *textureDict, char *textureName, float x, float y, float width, float height, Color color, float rotation, int layer) {
	_SET_2D_LAYER(layer);
	REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);
	if (HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
		DRAW_SPRITE(textureDict, textureName, x, y, width, height, rotation, color.r, color.g, color.b, color.a);
}