/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2015
*/

#pragma once

#include "..\..\inc\natives.h"
#include "..\..\inc\types.h"
#include "..\..\inc\enums.h"

#include "..\..\inc\main.h"
#include <d3d11.h>
#include <fstream>
#include <thread>

void ScriptMain();

void AlignCameraLoop();

void DetectRoad();

void PresentHooky(void *swapChain);

void Cleanup();
