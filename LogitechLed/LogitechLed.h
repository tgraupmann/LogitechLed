// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LOGITECHLED_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LOGITECHLED_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LOGITECHLED_EXPORTS
#define LOGITECHLED_API __declspec(dllexport)
#else
#define LOGITECHLED_API __declspec(dllimport)
#endif

//
// Logitech Gaming LED SDK
//
// Copyright (C) 2011-2014 Logitech. All rights reserved.
// Author: Tiziano Pigliucci
// Email: devtechsupport@logitech.com

extern "C"
{
	//1    2 00010E20 LogiGetConfigOptionBool
	LOGITECHLED_API bool LogiGetConfigOptionBool(const wchar_t *configPath, bool *defaultValue);

	//2    3 00011080 LogiGetConfigOptionColor
	LOGITECHLED_API bool LogiGetConfigOptionColor(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue);

	//3    4 000109D0 LogiGetConfigOptionKeyInput
	LOGITECHLED_API bool LogiGetConfigOptionKeyInput(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize);

	//4    5 00010BC0 LogiGetConfigOptionNumber
	LOGITECHLED_API bool LogiGetConfigOptionNumber(const wchar_t *configPath, double *defaultValue);

	//5    6 0001BF40 LogiLedExcludeKeysFromBitmap
	LOGITECHLED_API bool LogiLedExcludeKeysFromBitmap(int *keyList, int listCount);

	//6    7 0001BA30 LogiLedFlashLighting
	LOGITECHLED_API bool LogiLedFlashLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval);

	//7    8 0001BFA0 LogiLedFlashSingleKey
	LOGITECHLED_API bool LogiLedFlashSingleKey(int keyName, int redPercentage, int greenPercentage, int bluePercentage, int msDuration, int msInterval);

	//8    9 0001B7B0 LogiLedInit
	LOGITECHLED_API bool LogiLedInit();

	//9    A 0001BB20 LogiLedPulseLighting
	LOGITECHLED_API bool LogiLedPulseLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval);

	//10    B 0001C150 LogiLedPulseSingleKey
	LOGITECHLED_API bool LogiLedPulseSingleKey(int keyName, int startRedPercentage, int startGreenPercentage, int startBluePercentage, int finishRedPercentage, int finishGreenPercentage, int finishBluePercentage, int msDuration, bool isInfinite);

	//11    C 0001B9D0 LogiLedRestoreLighting
	LOGITECHLED_API bool LogiLedRestoreLighting();

	//12    D 0001BEE0 LogiLedRestoreLightingForKey
	LOGITECHLED_API bool LogiLedRestoreLightingForKey(int keyName);

	//13    E 0001B910 LogiLedSaveCurrentLighting
	LOGITECHLED_API bool LogiLedSaveCurrentLighting();

	//14    F 0001BE80 LogiLedSaveLightingForKey
	LOGITECHLED_API bool LogiLedSaveLightingForKey(int keyName);

	//15   10 0001B970 LogiLedSetLighting
	LOGITECHLED_API bool LogiLedSetLighting(int redPercentage, int greenPercentage, int bluePercentage);

	//16   11 0001BD30 LogiLedSetLightingForKeyWithHidCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithHidCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);

	//17   12 0001BE10 LogiLedSetLightingForKeyWithKeyName
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithKeyName(int keyName, int redPercentage, int greenPercentage, int bluePercentage);

	//18   13 0001BDA0 LogiLedSetLightingForKeyWithQuartzCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithQuartzCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);

	//19   14 0001BCC0 LogiLedSetLightingForKeyWithScanCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithScanCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage);

	//20   15 0001BC60 LogiLedSetLightingFromBitmap
	LOGITECHLED_API bool LogiLedSetLightingFromBitmap(unsigned char bitmap[]);

	//21   16 0001B8B0 LogiLedSetTargetDevice
	LOGITECHLED_API bool LogiLedSetTargetDevice(int targetDevice);

	//22   17 0001C440 LogiLedShutdown
	LOGITECHLED_API bool LogiLedShutdown();

	//23   18 0001BC10 LogiLedStopEffects
	LOGITECHLED_API bool LogiLedStopEffects();

	//24   19 0001C2F0 LogiLedStopEffectsOnKey
	LOGITECHLED_API bool LogiLedStopEffectsOnKey(int keyName);

	//25   1A 00011740 LogiSetConfigOptionLabel
	LOGITECHLED_API bool LogiSetConfigOptionLabel(const wchar_t *configPath, wchar_t *label);

	//26    0 0001D630 DllRegisterServer
	LOGITECHLED_API bool DllRegisterServer();

	//27    1 0001D680 DllUnregisterServer
	LOGITECHLED_API bool DllUnregisterServer();
}
