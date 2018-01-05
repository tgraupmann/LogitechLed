// ConsoleLedUnitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <Windows.h>

using namespace std;

typedef bool(*LogiGetConfigOptionBool)(const wchar_t *configPath, bool *defaultValue);
typedef bool(*LogiGetConfigOptionColor)(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue);
typedef bool(*LogiGetConfigOptionKeyInput)(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize);
typedef bool(*LogiGetConfigOptionNumber)(const wchar_t *configPath, double *defaultValue);
typedef bool(*LogiLedExcludeKeysFromBitmap)(int *keyList, int listCount);
typedef bool(*LogiLedFlashLighting)(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval);
typedef bool(*LogiLedFlashSingleKey)(int keyName, int redPercentage, int greenPercentage, int bluePercentage, int msDuration, int msInterval);
typedef bool(*LogiLedInit)();
typedef bool(*LogiLedPulseLighting)(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval);
typedef bool(*LogiLedPulseSingleKey)(int keyName, int startRedPercentage, int startGreenPercentage, int startBluePercentage, int finishRedPercentage, int finishGreenPercentage, int finishBluePercentage, int msDuration, bool isInfinite);
typedef bool(*LogiLedRestoreLighting)();
typedef bool(*LogiLedRestoreLightingForKey)(int keyName);
typedef bool(*LogiLedSaveCurrentLighting)();
typedef bool(*LogiLedSaveLightingForKey)(int keyName);
typedef bool(*LogiLedSetLighting)(int redPercentage, int greenPercentage, int bluePercentage);
typedef bool(*LogiLedSetLightingForKeyWithHidCode)(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);
typedef bool(*LogiLedSetLightingForKeyWithKeyName)(int keyName, int redPercentage, int greenPercentage, int bluePercentage);
typedef bool(*LogiLedSetLightingForKeyWithQuartzCode)(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);
typedef bool(*LogiLedSetLightingForKeyWithScanCode)(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);
typedef bool(*LogiLedSetLightingFromBitmap)(unsigned char bitmap[]);
typedef bool(*LogiLedSetTargetDevice)(int targetDevice);
typedef bool(*LogiLedShutdown)();
typedef bool(*LogiLedStopEffects)();
typedef bool(*LogiLedStopEffectsOnKey)(int keyName);
typedef bool(*LogiSetConfigOptionLabel)(const wchar_t *configPath, wchar_t *label);
typedef bool(*DllRegisterServer)();
typedef bool(*DllUnregisterServer)();

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR path[MAX_PATH + 1] = L"";
	DWORD len = GetCurrentDirectory(MAX_PATH, path);
	wstring wPath(&path[0]); //convert to wstring
	string strPath(wPath.begin(), wPath.end()); //and convert to string.

	fprintf(stdout, "Working folder: %s\r\n", strPath.c_str());

	HMODULE library = LoadLibrary(SDK_DLL);
	if (library == nullptr)
	{
		fprintf(stderr, "Setup: SDK is not installed [FAILED]\r\n");
		return -1;
	}

	fprintf(stdout, "Setup: SDK Loaded [PASS]\r\n");

	LogiGetConfigOptionBool logiGetConfigOptionBool = (LogiGetConfigOptionBool)GetProcAddress(library, "LogiGetConfigOptionBool");
	if (logiGetConfigOptionBool == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiGetConfigOptionBool [FAILED]\r\n");
		return -1;
	}

	LogiGetConfigOptionColor logiGetConfigOptionColor = (LogiGetConfigOptionColor)GetProcAddress(library, "LogiGetConfigOptionColor");
	if (logiGetConfigOptionColor == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiGetConfigOptionColor [FAILED]\r\n");
		return -1;
	}

	LogiGetConfigOptionKeyInput logiGetConfigOptionKeyInput = (LogiGetConfigOptionKeyInput)GetProcAddress(library, "LogiGetConfigOptionKeyInput");
	if (logiGetConfigOptionKeyInput == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiGetConfigOptionKeyInput [FAILED]\r\n");
		return -1;
	}

	LogiGetConfigOptionNumber logiGetConfigOptionNumber = (LogiGetConfigOptionNumber)GetProcAddress(library, "LogiGetConfigOptionNumber");
	if (logiGetConfigOptionNumber == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiGetConfigOptionNumber [FAILED]\r\n");
		return -1;
	}

	LogiLedExcludeKeysFromBitmap logiLedExcludeKeysFromBitmap = (LogiLedExcludeKeysFromBitmap)GetProcAddress(library, "LogiLedExcludeKeysFromBitmap");
	if (logiLedExcludeKeysFromBitmap == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedExcludeKeysFromBitmap [FAILED]\r\n");
		return -1;
	}

	LogiLedFlashLighting logiLedFlashLighting = (LogiLedFlashLighting)GetProcAddress(library, "LogiLedFlashLighting");
	if (logiLedFlashLighting == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedFlashLighting [FAILED]\r\n");
		return -1;
	}

	LogiLedFlashSingleKey logiLedFlashSingleKey = (LogiLedFlashSingleKey)GetProcAddress(library, "LogiLedFlashSingleKey");
	if (logiLedFlashSingleKey == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedFlashSingleKey [FAILED]\r\n");
		return -1;
	}

	LogiLedInit logiLedInit = (LogiLedInit)GetProcAddress(library, "LogiLedInit");
	if (logiLedInit == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedInit [FAILED]\r\n");
		return -1;
	}

	LogiLedPulseLighting logiLedPulseLighting = (LogiLedPulseLighting)GetProcAddress(library, "LogiLedPulseLighting");
	if (logiLedPulseLighting == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedPulseLighting [FAILED]\r\n");
		return -1;
	}

	LogiLedPulseSingleKey logiLedPulseSingleKey = (LogiLedPulseSingleKey)GetProcAddress(library, "LogiLedPulseSingleKey");
	if (logiLedPulseSingleKey == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedPulseSingleKey [FAILED]\r\n");
		return -1;
	}

	LogiLedRestoreLighting logiLedRestoreLighting = (LogiLedRestoreLighting)GetProcAddress(library, "LogiLedRestoreLighting");
	if (logiLedRestoreLighting == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedRestoreLighting [FAILED]\r\n");
		return -1;
	}

	LogiLedRestoreLightingForKey logiLedRestoreLightingForKey = (LogiLedRestoreLightingForKey)GetProcAddress(library, "LogiLedRestoreLightingForKey");
	if (logiLedRestoreLightingForKey == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedRestoreLightingForKey [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSaveCurrentLighting logiLedSaveCurrentLighting = (LogiLedSaveCurrentLighting)GetProcAddress(library, "LogiLedSaveCurrentLighting");
	if (logiLedSaveCurrentLighting == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSaveCurrentLighting [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSaveLightingForKey logiLedSaveLightingForKey = (LogiLedSaveLightingForKey)GetProcAddress(library, "LogiLedSaveLightingForKey");
	if (logiLedSaveLightingForKey == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSaveLightingForKey [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLighting logiLedSetLighting = (LogiLedSetLighting)GetProcAddress(library, "LogiLedSetLighting");
	if (logiLedSetLighting == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLighting [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLightingForKeyWithHidCode logiLedSetLightingForKeyWithHidCode = (LogiLedSetLightingForKeyWithHidCode)GetProcAddress(library, "LogiLedSetLightingForKeyWithHidCode");
	if (logiLedSetLightingForKeyWithHidCode == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLightingForKeyWithHidCode [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLightingForKeyWithKeyName logiLedSetLightingForKeyWithKeyName = (LogiLedSetLightingForKeyWithKeyName)GetProcAddress(library, "LogiLedSetLightingForKeyWithKeyName");
	if (logiLedSetLightingForKeyWithKeyName == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLightingForKeyWithKeyName [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLightingForKeyWithQuartzCode logiLedSetLightingForKeyWithQuartzCode = (LogiLedSetLightingForKeyWithQuartzCode)GetProcAddress(library, "LogiLedSetLightingForKeyWithQuartzCode");
	if (logiLedSetLightingForKeyWithQuartzCode == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLightingForKeyWithQuartzCode [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLightingForKeyWithScanCode logiLedSetLightingForKeyWithScanCode = (LogiLedSetLightingForKeyWithScanCode)GetProcAddress(library, "LogiLedSetLightingForKeyWithScanCode");
	if (logiLedSetLightingForKeyWithScanCode == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLightingForKeyWithScanCode [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetLightingFromBitmap logiLedSetLightingFromBitmap = (LogiLedSetLightingFromBitmap)GetProcAddress(library, "LogiLedSetLightingFromBitmap");
	if (logiLedSetLightingFromBitmap == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetLightingFromBitmap [FAILED]\r\n");
		return -1;
	}
	
	LogiLedSetTargetDevice logiLedSetTargetDevice = (LogiLedSetTargetDevice)GetProcAddress(library, "LogiLedSetTargetDevice");
	if (logiLedSetTargetDevice == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedSetTargetDevice [FAILED]\r\n");
		return -1;
	}

	LogiLedShutdown logiLedShutdown = (LogiLedShutdown)GetProcAddress(library, "LogiLedShutdown");
	if (logiLedShutdown == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedShutdown [FAILED]\r\n");
		return -1;
	}
	
	LogiLedStopEffects logiLedStopEffects = (LogiLedStopEffects)GetProcAddress(library, "LogiLedStopEffects");
	if (logiLedStopEffects == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedStopEffects [FAILED]\r\n");
		return -1;
	}

	LogiLedStopEffectsOnKey logiLedStopEffectsOnKey = (LogiLedStopEffectsOnKey)GetProcAddress(library, "LogiLedStopEffectsOnKey");
	if (logiLedStopEffectsOnKey == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiLedStopEffectsOnKey [FAILED]\r\n");
		return -1;
	}

	LogiSetConfigOptionLabel logiSetConfigOptionLabel = (LogiSetConfigOptionLabel)GetProcAddress(library, "LogiSetConfigOptionLabel");
	if (logiSetConfigOptionLabel == nullptr)
	{
		fprintf(stderr, "Unable to find method LogiSetConfigOptionLabel [FAILED]\r\n");
		return -1;
	}
	
	DllRegisterServer dllRegisterServer = (DllRegisterServer)GetProcAddress(library, "DllRegisterServer");
	if (dllRegisterServer == nullptr)
	{
		fprintf(stderr, "Unable to find method DllRegisterServer [FAILED]\r\n");
		return -1;
	}
	
	DllUnregisterServer dllUnregisterServer = (DllUnregisterServer)GetProcAddress(library, "DllUnregisterServer");
	if (dllUnregisterServer == nullptr)
	{
		fprintf(stderr, "Unable to find method DllUnregisterServer [FAILED]\r\n");
		return -1;
	}

	fprintf(stdout, "SDK Unit tests [PASS]\r\n");
    return 0;
}

