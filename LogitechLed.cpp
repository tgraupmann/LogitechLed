#include "pch.h"
#include "LogitechLed.h"

//1    2 00010E20 LogiGetConfigOptionBool
EXPORT_API bool LogiGetConfigOptionBool(const wchar_t *configPath, bool *defaultValue)
{
	return true;
}
//EXPORT_API bool LogiLedGetConfigOptionBool(const wchar_t *configPath, bool *defaultValue);

//2    3 00011080 LogiGetConfigOptionColor
EXPORT_API bool LogiGetConfigOptionColor(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue)
{
	return true;
}
//EXPORT_API bool LogiLedGetConfigOptionColor(const wchar_t *configPath, int *defaultRed, int *defaultGreen, int *defaultBlue);

//3    4 000109D0 LogiGetConfigOptionKeyInput
EXPORT_API bool LogiGetConfigOptionKeyInput(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize)
{
	return true;
}
//EXPORT_API bool LogiLedGetConfigOptionKeyInput(const wchar_t *configPath, wchar_t *defaultValue, int bufferSize);

//4    5 00010BC0 LogiGetConfigOptionNumber
EXPORT_API bool LogiGetConfigOptionNumber(const wchar_t *configPath, double *defaultValue)
{
	return true;
}
//EXPORT_API bool LogiLedGetConfigOptionNumber(const wchar_t *configPath, double *defaultValue);

//5    6 0001BF40 LogiLedExcludeKeysFromBitmap
EXPORT_API bool LogiLedExcludeKeysFromBitmap(int *keyList, int listCount)
{
	return true;
}

//6    7 0001BA30 LogiLedFlashLighting
EXPORT_API bool LogiLedFlashLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval)
{
	return true;
}

//7    8 0001BFA0 LogiLedFlashSingleKey
//Per-key effects => only apply to LOGI_DEVICETYPE_PERKEY_RGB devices.
EXPORT_API bool LogiLedFlashSingleKey(int keyName, int redPercentage, int greenPercentage, int bluePercentage, int msDuration, int msInterval)
{
	return true;
}

//8    9 0001B7B0 LogiLedInit
EXPORT_API bool LogiLedInit()
{
	return true;
}

//9    A 0001BB20 LogiLedPulseLighting
EXPORT_API bool LogiLedPulseLighting(int redPercentage, int greenPercentage, int bluePercentage, int milliSecondsDuration, int milliSecondsInterval)
{
	return true;
}

//10    B 0001C150 LogiLedPulseSingleKey
EXPORT_API bool LogiLedPulseSingleKey(int keyName, int startRedPercentage, int startGreenPercentage, int startBluePercentage, int finishRedPercentage, int finishGreenPercentage, int finishBluePercentage, int msDuration, bool isInfinite)
{
	return true;
}

//11    C 0001B9D0 LogiLedRestoreLighting
EXPORT_API bool LogiLedRestoreLighting()
{
	return true;
}

//12    D 0001BEE0 LogiLedRestoreLightingForKey
EXPORT_API bool LogiLedRestoreLightingForKey(int keyName)
{
	return true;
}

//13    E 0001B910 LogiLedSaveCurrentLighting
EXPORT_API bool LogiLedSaveCurrentLighting()
{
	return true;
}

//14    F 0001BE80 LogiLedSaveLightingForKey
EXPORT_API bool LogiLedSaveLightingForKey(int keyName)
{
	return true;
}

//15   10 0001B970 LogiLedSetLighting
EXPORT_API bool LogiLedSetLighting(int redPercentage, int greenPercentage, int bluePercentage)
{
	return true;
}

//16   11 0001BD30 LogiLedSetLightingForKeyWithHidCode
EXPORT_API bool LogiLedSetLightingForKeyWithHidCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
{
	return true;
}

//17   12 0001BE10 LogiLedSetLightingForKeyWithKeyName
EXPORT_API bool LogiLedSetLightingForKeyWithKeyName(int keyName, int redPercentage, int greenPercentage, int bluePercentage)
{
	return true;
}

//18   13 0001BDA0 LogiLedSetLightingForKeyWithQuartzCode
EXPORT_API bool LogiLedSetLightingForKeyWithQuartzCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
{
	return true;
}

//19   14 0001BCC0 LogiLedSetLightingForKeyWithScanCode
EXPORT_API bool LogiLedSetLightingForKeyWithScanCode(int keyCode, int redPercentage, int greenPercentage, int bluePercentage)
{
	return true;
}

//20   15 0001BC60 LogiLedSetLightingFromBitmap
//Per-key functions => only apply to LOGI_DEVICETYPE_PERKEY_RGB devices.
EXPORT_API bool LogiLedSetLightingFromBitmap(unsigned char bitmap[])
{
	return true;
}

//21   16 0001B8B0 LogiLedSetTargetDevice
//Generic functions => Apply to any device type.
EXPORT_API bool LogiLedSetTargetDevice(int targetDevice)
{
	return true;
}

//22   17 0001C440 LogiLedShutdown
EXPORT_API bool LogiLedShutdown()
{
	return true;
}

//23   18 0001BC10 LogiLedStopEffects
EXPORT_API bool LogiLedStopEffects()
{
	return true;
}

//24   19 0001C2F0 LogiLedStopEffectsOnKey
EXPORT_API bool LogiLedStopEffectsOnKey(int keyName)
{
	return true;
}

//25   1A 00011740 LogiSetConfigOptionLabel
EXPORT_API bool LogiSetConfigOptionLabel(const wchar_t *configPath, wchar_t *label)
{
	return true;
}

//26    0 0001D630 DllRegisterServer
EXPORT_API bool DllRegisterServer()
{
	return true;
}

//27    1 0001D680 DllUnregisterServer
EXPORT_API bool DllUnregisterServer()
{
	return true;
}
