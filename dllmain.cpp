#include <windows.h>
#include "AvatarRenderer.h"
#include "RenderHook.h"

DWORD WINAPI MainThread(LPVOID lpParam) {

    AvatarRenderer avatar;
    avatar.BuildBaseDummy();
    avatar.ApplyClothing("http://www.roblox.com/asset/?id=12345", "http://www.roblox.com/asset/?id=67890");
    avatar.AttachAccessory("http://www.roblox.com/asset/?id=11111");
    // CaptureFrameToPNG(pDevice, "avatar_render.png");

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, MainThread, hModule, 0, 0);
    }
    return TRUE;
}
