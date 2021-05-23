#include servo.h
Servo servo1,servo3;

int ledPin = 13; // select the pin for the LED

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT); // declare the ledPin as an OUTPUT

servo1.attach(9);

delay(10);

servo1.write(110); // put finger at starting position

servo3.attach(11);

delay(10);

servo3.write(71); // position slider at starting position

delay(5000); // wait 5 seconds before beginning

}

void playKey(int slidePos) {

servo3.write(slidePos); // move slider servo to key position

delay(300); // give slider time to get there

servo1.write(85); // move finger down and press key

delay(100); //give time to move finger down

servo1.write(110); //pick finger back up

delay(300); //give time to pick finger up before next slider move

}

void loop() {

digitalWrite(ledPin,HIGH);

/* playKey(165);//f delay(500); playKey(149);//g playKey(138);//a playKey(127);//b playKey(116);//c playKey(105);//d playKey(94);//e playKey(83);//f playKey(72);//g playKey(61);//a playKey(50);//b playKey(28);//c playKey(15);//d */

// cetk //

playKey(71); playKey(60); playKey(83); playKey(170); delay(400); playKey(116); delay(2000);

// avengers //

playKey(72); playKey(94); playKey(83); playKey(50); playKey(15); playKey(28); playKey(72); playKey(94); playKey(83); delay(2000); //amazing grace playKey(160); playKey(116); playKey(94); playKey(94); playKey(105); playKey(116); playKey(138); playKey(149); delay(2000);

//indiana jones

playKey(138); playKey(127); playKey(116); playKey(83); delay(500); playKey(149); playKey(138); playKey(127); delay(500); playKey(116);//c playKey(105);//d playKey(94);//e playKey(50);//c playKey(105);//d playKey(94);//e playKey(83);//f playKey(72);//g playKey(61);//a delay(2000);

//gilligan

playKey(138);//f playKey(105);//g playKey(61);//a playKey(61);//f playKey(61);//g playKey(72);//a playKey(94);//f playKey(116);//g delay(500); playKey(138);//f playKey(105);//g playKey(61);//a playKey(61);//f playKey(61);//g playKey(72);//a delay(500); playKey(138);//f playKey(105);//g playKey(61);//a playKey(61);//f playKey(61);//g playKey(72);//a playKey(28);//a delay(500); playKey(72);//a playKey(83);//a delay(500); playKey(94);//a playKey(116);//a playKey(105);//a delay(2000);

// somewhere over the rainbow

playKey(127); delay(300); playKey(50); delay(300); playKey(61);//f delay(300); playKey(83); playKey(72);//g playKey(61);//a playKey(50);//b delay(200); playKey(125);delay(300); playKey(72);delay(300); playKey(83); cli(); /*playKey(149);//g playKey(138);//a playKey(127);//b playKey(116);//c playKey(105);//d playKey(94);//e playKey(83);//f playKey(72);//g playKey(61);//a playKey(50);//b playKey(28);//c playKey(15);//d */

}