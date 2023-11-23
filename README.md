# Big BLE buttons

Arcade buttons to control e.g. Spotify over BLE

## Description

Three arcade buttons connected to ESP32. Using the ESP32-BLE-Keyboard library to 

## Getting Started

### Dependencies

* Use the ESP32-BLE-Keyboard library to send media button key strokes
* Follow instructions on how to use arduino IDE with ESP32 [here:](https://github.com/espressif/arduino-esp32#installation-instructions) 

### Installing

* Follow the paths above and below, you will be fine.
* Change the Pin numbers if you use different pins for the buttons (e.g. const int buttonPin1 = 21;)
* Print the button holder face down to avoid using supports. 
* The buttons will show up as "ESP32 Keyboard" among your bluetooth devices.

## Authors

Contributors names and contact info

Henrik Björserud  
[Git](https://github.com/henrikBjorserud)

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
