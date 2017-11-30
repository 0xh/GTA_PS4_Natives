#pragma once
#include "structs.h"

void drawText(char *text, int font, float size, float x, float y, Color color, Align align = left, int layer = 0);
void drawRect(float x, float y, float width, float height, Color color, int layer = 0);
void drawSprite(char *textureDict, char *textureName, float x, float y, float width, float height, Color color, float rotation = 0, int layer = 0);