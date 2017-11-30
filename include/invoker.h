#pragma once
#include <stdint.h>

#include "structs.h"

struct Native_s {
	Native_s *lastNativeTable;
	uint64_t nativeFunctions[7];
	uint64_t nativeCount;
	uint64_t nativeHashes[7];
};

struct NativeArg_s {
	uint64_t* returnValue;
	short argCount;
	uint64_t* argValues;
	short readCount;
};

#define FREE_SPACE 0x2DCD830
#define NATIVE_TABLE_ADDR 0x3644A28

static NativeArg_s *nativeArg = (NativeArg_s*)FREE_SPACE + 0x00;
static uint64_t *args = (uint64_t*)FREE_SPACE + 0x20;

void invokeNative(uint64_t hash);

void resetArgs();

template<typename T>
void pushArg(T value) {
    *(T*)&nativeArg->argValues[nativeArg->argCount] = value;
    nativeArg->argCount++;
}
void pushArg(Vector3 value);
template<typename R>
R getReturn() {
    return *(R*)&nativeArg->returnValue[0];
}
#pragma region INVOKE
template<typename T>
T invoke(uint64_t hash)
{
    resetArgs();
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1>
T invoke(uint64_t hash, P1 p0)
{
    resetArgs();
    pushArg(p0);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2>
T invoke(uint64_t hash, P1 p0, P2 p1)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    pushArg(p21);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    pushArg(p21);
    pushArg(p22);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    pushArg(p21);
    pushArg(p22);
    pushArg(p23);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24, typename P25>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23, P25 p24)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    pushArg(p21);
    pushArg(p22);
    pushArg(p23);
    pushArg(p24);
    invokeNative(hash);
    return getReturn<T>();
}

template<typename T, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24, typename P25, typename P26>
T invoke(uint64_t hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23, P25 p24, P26 p25)
{
    resetArgs();
    pushArg(p0);
    pushArg(p1);
    pushArg(p2);
    pushArg(p3);
    pushArg(p4);
    pushArg(p5);
    pushArg(p6);
    pushArg(p7);
    pushArg(p8);
    pushArg(p9);
    pushArg(p10);
    pushArg(p11);
    pushArg(p12);
    pushArg(p13);
    pushArg(p14);
    pushArg(p15);
    pushArg(p16);
    pushArg(p17);
    pushArg(p18);
    pushArg(p19);
    pushArg(p20);
    pushArg(p21);
    pushArg(p22);
    pushArg(p23);
    pushArg(p24);
    pushArg(p25);
    invokeNative(hash);
    return getReturn<T>();
}
#pragma endregion