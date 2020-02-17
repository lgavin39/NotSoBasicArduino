# Arduino
This is Liams old and new arduino stuff

he will fill this in later with descriptions of what he did.

# LED_fade:

This is the code and diagrams for a fading LED light.
/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
 https://www.arduino.cc/en/uploads/Tutorial/simplefade_bb.png
# Hello_LCD: 

this is the code for an LCD that says HELLO WORLD.

# NewPing: 

this is an ultrasonic sensor that will turn an LED on depending how close your hand is to the senser.  

# SwitchAudioFileConverter.exe:

This converts audio files into an arduino readable mp3.

