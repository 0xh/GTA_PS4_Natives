#pragma once

typedef struct Vector3 {
	float x, y, z;
	operator float*() {
		static float farray[3];
		farray[0] = x;
		farray[1] = y;
		farray[2] = z;
		return farray;
	}
	Vector3(float* v) {
		x = v[0];
		y = v[1];
		z = v[2];
	}
} Vec3;

typedef struct Color {
    char r, g, b, a;
	Color() {}
	Color(char r, char g, char b, char a) : r(r), g(g), b(b), a(a) { }
	Color& operator=(Color &rhs) {
		r = rhs.r;
		g = rhs.g;
		b = rhs.b;
		a = rhs.a;
		return *this;
	}
	void setRgba(char _r, char _g, char _b, char _a) {
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
} Color;

enum Align {
    center,
    right,
    left
};
enum Buttons {
	Button_Tpad = 0,
	Button_Tpad_X = 13,
	Button_Tpad_Y = 12,
	Button_X = 18,
	Button_Circle = 79,
	Button_Cirlce_2 = 56,
	Button_Triangle = 23,
	Button_Square = 22,
	Button_R1 = 44,
	Button_R2 = 11,
	Button_R3_Right = 1,
	Button_R3_Down = 2,
	Button_R3_Left =5,
	Button_R3_Up = 3,
	Button_R3_Push = 29,
	Button_L1 = 37,
	Button_L2 = 10,
	Button_L3_Right = 9,
	Button_L3_Down = 8,
	Button_L3_Left =34,
	Button_L3_Up = 32,
	Button_L3_Push = 36,
	Button_Dpad_Up = 27,
	Button_Dpad_Down = 19,
	Button_Dpad_Left = 15,
	Button_Dpad_Right = 14,
	Button_Options = 191
};