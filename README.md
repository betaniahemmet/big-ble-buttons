# Big BLE buttons

Arcade buttons to control e.g. Spotify over BLE

![Buttons preview](https://github.com/betaniahemmet/big-ble-buttons/blob/main/media/IMG_1289.jpg)


## Description

As we are moving away from physical media and platforms such as spotify has come to almost completely dominate our listening habits we have to consider the ease of use of this relatively new technology. Motor skills and eye sight are affecting how easily we can interact with touch screens and controls. As music is something very personal, it is important to be able to choose what you are listening to and not. This project aims to increase the self-determination of individuals by letting them have control of the songs being played. This might seem like a small thing, but for someone who might have little control over other aspects of daily life, it might be considered significant. This project aims to make it as easy as possible to go back, go forward or start/stop music on any music playing device capable of connecting to bluetooth, e.g. phones, tablets or computers.

In short this is: Three arcade buttons connected to ESP32, using the ESP32-BLE-Keyboard library to send media key strokes to a bluetooth connected device. 



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
* Print the enclosure face down to avoid using supports. 
* The buttons will (supposedly) show up as "ESP32 Keyboard" among your bluetooth devices.


## Known Issues

- **Issue 1:** The buttons may suspend after some time. It's unclear if this will be a recurring issue for users. Investigation ongoing.
- **Issue 2:** The enclosure is somewhat small, making assembling challenging for users with larger fingers. Consider making the opening bigger or creating a detachable bottom for more room for the ESP32.
Feel free to contribute by tackling these issues or opening new ones!

## Feedback

We welcome contributions from the community. If you have ideas to improve accessibility or want to contribute to the project, please feel free to [open an issue](https://github.com/betaniahemmet/big-ble-buttons/issues) or submit a pull request!

## Authors
Contributors' names and contact info:

Henrik Björserud  - [GitHub](https://github.com/henrikBjorserud)

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
