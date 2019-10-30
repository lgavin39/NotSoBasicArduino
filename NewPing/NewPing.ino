//NewPing()
//Marietta Feigert
//make a led turn on and off based on the distance from the Ultrasonic monitor you are
 
#include <NewPing.h>
 
#define TRIGGER_PIN 7 //defines one of the pins on the ultrasonic monitor
#define ECHO_PIN 6 //defines the another pin on the ultrasonic monitor
#define MAX_DISTANCE 200 //defines what the maximum distance for the ultrasonic monitor is
int led = 8;
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); //calls the function
 
 
 int cm =0; //adds a variable for distance
 
void setup() {
 Serial.begin(9600); //starts the serial monitor
 pinMode(TRIGGER_PIN, OUTPUT); //sets the pinMode for TRIGGER_PIN
 pinMode(ECHO_PIN, INPUT); //sets pinMode for ECHO_PIN
 pinMode(led, OUTPUT);
}
 
void loop() {
 cm = myHCSR04.ping_cm(); //attaches variable cm to the function
 Serial.println(cm); //prints the distance to the serial monitor
 delay(50); //delays 50 miliseconds
    if (cm>=5){   //if the integer cm is less than or equal to 5 than run the code below
    	digitalWrite(led, HIGH);  //the light will light up
    }
    else {  //if not then run the code below
    	digitalWrite(led, LOW);  //the light will be off
    }
}