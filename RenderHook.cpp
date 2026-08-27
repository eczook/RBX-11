#include "RenderHook.h"
#include <d3dx9.h>
#include <iostream>

void SetupAvatarCamera(IDirect3DDevice9* pDevice) {
    // Sets D3D9 View / Projection matrices pointing at Torso (0, 1, 0)
}

void CaptureFrameToPNG(IDirect3DDevice9* pDevice, const char* outputFilename) {
    if (!pDevice) return;

    IDirect3DSurface9* pBackBuffer = nullptr;
    HRESULT hr = pDevice->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);

    if (SUCCEEDED(hr) && pBackBuffer) {
        D3DXSaveSurfaceToFileA(outputFilename, D3DXIFF_PNG, pBackBuffer, NULL, NULL);
        pBackBuffer->Release();
        std::cout << "[RBX11] Render saved to: " << outputFilename << std::endl;
    }
}
