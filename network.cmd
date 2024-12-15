@echo off
cls
:loop
cls
for /f "tokens=2 delims=: " %%a in ('netsh wlan show interface ^| find "SSID" ^| findstr /v "BSSID"') do (
    set SSID=%%a
)
for /f "tokens=2 delims=: " %%a in ('netsh wlan show interface ^| find "Description"') do (
    set nic=%%a
)
for /f "tokens=2 delims=: " %%a in ('netsh wlan show interface ^| find "Band"') do (
    set band=%%a
)
for /f "tokens=2 delims=: " %%a in ('netsh wlan show interface ^| find "Signal"') do (
    set signal=%%a
)

for /f "tokens=4 delims==" %%a in ('ping -n 2 8.8.8.8 ^| find "Average"') do set ping=%%a

echo.
echo NetWork Information - OsNerd
echo __________________________________________
echo SSID         : %SSID%
echo NIC          : %nic%
echo Band         : %band%
echo Signal       : %signal%
echo __________________________________________
echo.
echo NetWork Speed - OsNerd
echo __________________________________________
echo %ping%
echo __________________________________________

timeout /t 1 >nul

goto loop
