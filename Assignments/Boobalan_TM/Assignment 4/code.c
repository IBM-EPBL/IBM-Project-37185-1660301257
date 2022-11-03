#include “Ultrasonic.h"
Ultrasonic ultrasonic(6,2);
int distance; void setup()
{
Serial.begin(9600);
}
void loop() {
distance = ultrasonic.read(CM); Serial.print("Distance
in CM: “);
Date 29th October 2022
Team ID PNT2022TMID47485
Roll No 910019106032
Project Name Project:- Signs With Smart Connectivity For Better
Safety
Serial.println(distance); if
(distance < 100)
Serial.print("alert");
Serial.println(); delay(3000);
}

