# Big BLE buttons

Arcade buttons to control e.g. Spotify over BLE

![Buttons preview](https://github.com/betaniahemmet/big-ble-buttons/blob/main/media/IMG_1289.jpg)


## Description

Three arcade buttons connected to ESP32, using the ESP32-BLE-Keyboard library to send media key strokes to a bluetooth connected device. 


## Getting Started

* Print the casing. Put the buttons in the casing.
* Connect the arcade buttons to ground and three suitable pins on the ESP.
* Follow the [instructions](https://github.com/T-vK/ESP32-BLE-Keyboard) on how to include the ESP BLE keyboard library. 
* Upload the .ino-file to the ESP.

### Dependencies

* ESP32-BLE-Keyboard library
* Instructions on how to use arduino IDE with ESP32 [here.](https://github.com/espressif/arduino-esp32#installation-instructions) This step is also included in the BLE keyboard instructions.

### Tips & tricks

* Change the Pin numbers if you use different pins for the buttons (e.g. const int buttonPin1 = 21;)
* Print the button holder face down to avoid using supports. 
* The buttons will (hopefully) show up as "ESP32 Keyboard" among your bluetooth devices.

## Authors

Contributors names and contact info

Henrik Björserud [Git](https://github.com/henrikBjorserud)

## Version History

* 0.1
    * Initial Release

## License

This project is licensed under the MIT License - see the LICENSE.md file for details

## Acknowledgments

Inspiration, code snippets, etc.
* [ESP32 DevKit LiPo](https://www.electrokit.com/produkt/esp32-devkit-lipo/)
* [Arcade buttons](https://www.electrokit.com/produkt/tryckknapp-arkad-o60mm-gron/)
* [ESP32-BLE-Keyboard library](https://github.com/T-vK/ESP32-BLE-Keyboard)
* [Arduino on ESP32](https://github.com/espressif/arduino-esp32#installation-instructions)
