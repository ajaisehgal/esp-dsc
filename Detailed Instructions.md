1.  Clone the esp-dsc project from https://github.com/synfinatic/esp-dsc
2.  Install the Arduino IDE from here: https://www.arduino.cc/en/main/software
3.  Start Arduino and open Preferences window.
4.  Enter http://arduino.esp8266.com/stable/package_esp8266com_index.json into Additional Board Manager URLs field. You can add multiple URLs, separating them with commas.
5.  Open Boards Manager from Tools > Board menu > Board Manger, Search for "8266” and click "install” to install the esp8266 platform
6.  From the Tools > Board menu select “NodeMCU 1.0 (ESP-12E Module)”
7.  Clone the Encoder project from https://github.com/ajaisehgal/Encoder
8.  Copy the entire cloned project into ~Documents/Arduino/Library
9.  Copy of config.h.sample to config.h.
10. In the config.h, uncomment the following:
    1.  #define ENABLE_WIFI
    2.  #define AP_MODE
11. Define your WiFi SSID and Password on lines 37 and 38
12. Verify that the project compiles (Sketch>Verify/Compile)
13. If you have a brand new NodeMCU module, it needs to be flashed with the latest firmware :
    IMPORTANT: YOU MUST NOT HAVE ANYTHING CONNECTED TO V(in) WHILE FLASHING OR PROGRAMMING
    a.  Go to https://nodemcu-build.com/ and request a build with the “master” and default modules using their cloud build service.
    b.  When you receive the email notification of the build, download the .bin files.  You will see both integer and float versions.  Use the integer version as it takes up less room and the Arduino code this is based on is integer.
    c.  On Windows:
        i.  Use the NodeMCU flasher.  It works and is fast: https://github.com/nodemcu/nodemcu-flasher
    d. On Mac OSX (much fussier than on Windows which is recommended):
        i.  Install the latest version of Python.
        ii. Install pip ($ sudo easy_install pip)
        iii.Install esptool.py ($ sudo -H  pip install esptool)
        iv. Install the Silicon Labs virtual com port driver for Mac from here: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
        v.  Run the following command: $ esptool.py --chip esp8266 write_flash -fm <mode> -fs 4MB -ff 40m 0x00000 <nodemcu-firmware>.bin where the port is fully written out and the mode is dio for the >=4M version and qio for the 512k version 
            e.g. esptool.py -p "/dev/tty.SLAB_USBtoUART" --chip esp8266  write_flash -fm dio -fs 4MB -ff 40m 0x00000 nodemcu-master-7-modules-2017-07-31-17-24-43-integer.bin
14. You module should now have the firmware installed.  In the Arduino IDE program the ESP8266 (Sketch>Upload).
15. Verify that it is working by connecting to the defined WiFi SSID on your phone or tablet.
16. Wire up the encoders and configure SkySafari Pro 4 in Settings:
    a.  Under Telescope>Setup: 
        i.  Select Basic Encoder System for Scope Type
        ii. Select the correct Mount Type
        iii.Enter the IP Address for the ESP8266 (the Router setting for the WiFi your iPad is connected to)
        iv. Make sure the port number matches (default is 4030 unless changed in the config.h).
17. Connect SkySafari (Scope>Connect) and verify the reitcle moves correctly when the encoders are turned.
