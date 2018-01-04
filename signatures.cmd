CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64_x86
CALL dumpbin /EXPORTS /MAP Release\LogitechLed\LogitechLed.dll
CALL PAUSE
