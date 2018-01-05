// LogitechLed.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LogitechLed.h"


// This is an example of an exported variable
LOGITECHLED_API int nLogitechLed=0;

// This is the constructor of a class that has been exported.
// see LogitechLed.h for the class definition
CLogitechLed::CLogitechLed()
{
	return;
}

extern "C"
{

	//1    2 00010E20 LogiGetConfigOptionBool
	LOGITECHLED_API bool LogiGetConfigOptionBool(const wchar_t *configPath, bool *defaultValue)
	{
		return true;
	}
	//LOGITECHLED_API bool LogiLedGetConfigOptionBool(const wchar_t *configPath, bool *defaultValue);

	//2    3 00011080 LogiGetConfigOptionColor
	LOGITECHLED_API bool LogiGetConfigOptionColor(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue)
	{
		return true;
	}
	//LOGITECHLED_API bool LogiLedGetConfigOptionColor(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue);

	//3    4 000109D0 LogiGetConfigOptionKeyInput
	LOGITECHLED_API bool LogiGetConfigOptionKeyInput(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize)
	{
		return true;
	}
	//LOGITECHLED_API bool LogiLedGetConfigOptionKeyInput(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize);

	//4    5 00010BC0 LogiGetConfigOptionNumber
	LOGITECHLED_API bool LogiGetConfigOptionNumber(const wchar_t *configPath, double *defaultValue)
	{
		return true;
	}
	//LOGITECHLED_API bool LogiLedGetConfigOptionNumber(const wchar_t *configPath, double *defaultValue);

	//5    6 0001BF40 LogiLedExcludeKeysFromBitmap
	LOGITECHLED_API bool LogiLedExcludeKeysFromBitmap(int *keyList, int listCount)
	{
		return true;
	}

	//6    7 0001BA30 LogiLedFlashLighting
	LOGITECHLED_API bool LogiLedFlashLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval)
	{
		return true;
	}

	//7    8 0001BFA0 LogiLedFlashSingleKey
	//Per-key effects => only apply to LOGI_DEVICETYPE_PERKEY_RGB devices.
	LOGITECHLED_API bool LogiLedFlashSingleKey(int keyName, int redPercentage, int greenPercentage, int bluePercentage, int msDuration, int msInterval)
	{
		return true;
	}

	//8    9 0001B7B0 LogiLedInit
	LOGITECHLED_API bool LogiLedInit()
	{
		return true;
	}

	//9    A 0001BB20 LogiLedPulseLighting
	LOGITECHLED_API bool LogiLedPulseLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval)
	{
		return true;
	}

	//10    B 0001C150 LogiLedPulseSingleKey
	LOGITECHLED_API bool LogiLedPulseSingleKey(int keyName, int startRedPercentage, int startGreenPercentage, int startBluePercentage, int finishRedPercentage, int finishGreenPercentage, int finishBluePercentage, int msDuration, bool isInfinite)
	{
		return true;
	}

	//11    C 0001B9D0 LogiLedRestoreLighting
	LOGITECHLED_API bool LogiLedRestoreLighting()
	{
		return true;
	}

	//12    D 0001BEE0 LogiLedRestoreLightingForKey
	LOGITECHLED_API bool LogiLedRestoreLightingForKey(int keyName)
	{
		return true;
	}

	//13    E 0001B910 LogiLedSaveCurrentLighting
	LOGITECHLED_API bool LogiLedSaveCurrentLighting()
	{
		return true;
	}

	//14    F 0001BE80 LogiLedSaveLightingForKey
	LOGITECHLED_API bool LogiLedSaveLightingForKey(int keyName)
	{
		return true;
	}

	//15   10 0001B970 LogiLedSetLighting
	LOGITECHLED_API bool LogiLedSetLighting(int redPercentage, int greenPercentage, int bluePercentage)
	{
		return true;
	}

	//16   11 0001BD30 LogiLedSetLightingForKeyWithHidCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithHidCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
	{
		return true;
	}

	//17   12 0001BE10 LogiLedSetLightingForKeyWithKeyName
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithKeyName(int keyName, int redPercentage, int greenPercentage, int bluePercentage)
	{
		return true;
	}

	//18   13 0001BDA0 LogiLedSetLightingForKeyWithQuartzCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithQuartzCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
	{
		return true;
	}

	//19   14 0001BCC0 LogiLedSetLightingForKeyWithScanCode
	LOGITECHLED_API bool LogiLedSetLightingForKeyWithScanCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
	{
		return true;
	}

	//20   15 0001BC60 LogiLedSetLightingFromBitmap
	//Per-key functions => only apply to LOGI_DEVICETYPE_PERKEY_RGB devices.
	LOGITECHLED_API bool LogiLedSetLightingFromBitmap(unsigned char bitmap[])
	{
		return true;
	}

	//21   16 0001B8B0 LogiLedSetTargetDevice
	//Generic functions => Apply to any device type.
	LOGITECHLED_API bool LogiLedSetTargetDevice(int targetDevice)
	{
		return true;
	}

	//22   17 0001C440 LogiLedShutdown
	LOGITECHLED_API bool LogiLedShutdown()
	{
		return true;
	}

	//23   18 0001BC10 LogiLedStopEffects
	LOGITECHLED_API bool LogiLedStopEffects()
	{
		return true;
	}

	//24   19 0001C2F0 LogiLedStopEffectsOnKey
	LOGITECHLED_API bool LogiLedStopEffectsOnKey(int keyName)
	{
		return true;
	}

	//25   1A 00011740 LogiSetConfigOptionLabel
	LOGITECHLED_API bool LogiSetConfigOptionLabel(const wchar_t *configPath, wchar_t *label)
	{
		return true;
	}

	//26    0 0001D630 DllRegisterServer
	LOGITECHLED_API bool DllRegisterServer()
	{
		return true;
	}

	//27    1 0001D680 DllUnregisterServer
	LOGITECHLED_API bool DllUnregisterServer()
	{
		return true;
	}
}
