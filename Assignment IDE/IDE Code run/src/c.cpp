#include <Arduino.h>
// Program for Ring Counter

int n=13;

void setup() {
  pinMode(n,OUTPUT);
}
// Arduino output is connected with Input D1 of 7474 IC(flipflop)
// Input of one flipflop is connected with out of the other flipflop
// Output of the other flipflop is connected with one flipflop
// by connecting inputs with outputs a ring has been formed
void loop() {
  digitalWrite(n,HIGH);
  delay(500);
  digitalWrite(n,LOW);
  delay(500);
  // put your main code here, to run repeatedly:
} 
