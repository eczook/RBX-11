#pragma once
#include <d3d9.h>

void SetupAvatarCamera(IDirect3DDevice9* pDevice);
void CaptureFrameToPNG(IDirect3DDevice9* pDevice, const char* outputFilename);
