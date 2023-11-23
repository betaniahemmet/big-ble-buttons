/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that has three media keys
 */
#include <BleKeyboard.h> //This line includes the necessary library for Bluetooth LE keyboard functionality
BleKeyboard bleKeyboard; //Instantiate BleKeyboard: An object bleKeyboard of the BleKeyboard class is created to handle Bluetooth LE keyboard operations
#define DEBOUNCE_TIME  100 // the debounce time in millisecond, increase this time if it still chatters
const int buttonPin1 = 21; // Pin for the first button
const int buttonPin2 = 19; // Pin for the second button
const int buttonPin3 = 18; // Pin for the third button

/*
Set the button states to high, make the debounce times unsigned long since they will be long
*/
int buttonState1 = HIGH;
int lastButtonState1 = HIGH;
unsigned long lastDebounceTime1 = 0;

int buttonState2 = HIGH;
int lastButtonState2 = HIGH;
unsigned long lastDebounceTime2 = 0;

int buttonState3 = HIGH;
int lastButtonState3 = HIGH;
unsigned long lastDebounceTime3 = 0;

unsigned long debounceDelay = 50; //

void setup() {
  
  Serial.begin(115200); //Initializes serial communication for debugging
  Serial.println("Starting BLE work!"); 
  bleKeyboard.begin(); //Initializes the Bluetooth LE keyboard
  /*
  Sets the button pins as INPUT_PULLUP, implying that the buttons are active LOW
  */
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);

}

void checkButton(int buttonPin, int &buttonState, int &lastButtonState, unsigned long &lastDebounceTime, const uint8_t* key) {
  /*
  This function handles button debouncing and triggers the associated action when a button is pressed
  */
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == LOW) {
        Serial.println("Button pressed");
        bleKeyboard.write(key);

        // Add a delay to prevent multiple triggers
        delay(500);  // Adjust the delay time as needed
      }
    }
  }

  lastButtonState = reading;
}


void loop() {
  /*
  Continuously checks the button states and triggers the associated media key action when a button is pressed if the BLE keyboard is connected
  */
  if(bleKeyboard.isConnected()) {
    checkButton(buttonPin1, buttonState1, lastButtonState1, lastDebounceTime1, KEY_MEDIA_PREVIOUS_TRACK);
    checkButton(buttonPin2, buttonState2, lastButtonState2, lastDebounceTime2, KEY_MEDIA_PLAY_PAUSE);
    checkButton(buttonPin3, buttonState3, lastButtonState3, lastDebounceTime3, KEY_MEDIA_NEXT_TRACK);
  }
}