#include "invoker.h"

static void invokeNative(uint64_t hash) {
    Native_s **g_Natives = (Native_s **)NATIVE_TABLE_ADDR;
    Native_s *Natives = g_Natives[hash & 0xFF];
    while (Natives != 0) {
        for (uint64_t i = 0; i < Natives->nativeCount; i++) {
            if (Natives->nativeHashes[i] == hash) {
                ((void(*)(NativeArg_s*))Natives->nativeFunctions[i])((NativeArg_s*)FREE_SPACE + 0x00);
                return;
            }
        }
        Natives = Natives->lastNativeTable;
    }
}
void resetArgs() {
    nativeArg->argCount = 0;
    nativeArg->readCount = 0;
    nativeArg->argValues = nativeArg->returnValue = args;
}
void pushArg(Vector3 value) {
    pushArg(value.x);
    pushArg(value.y);
    pushArg(value.z);
}