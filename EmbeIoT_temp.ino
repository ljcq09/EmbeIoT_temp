

/* Hello Wokwi! */
#include <Arduino.h>
#include <Servo.h>

int servopwmpin = 3;
int Button1 = 4;
int Button2 = 5;
int Potenciometro = A5;

Servo servomotor;

int input = 0;
int angulo = 0;

void setup() {
  
  pinMode(Potenciometro, INPUT);
  servomotor.attach(servopwmpin);
  servomotor.write(0);
}

void loop() {
  
  delay(150);
  input = analogRead(Potenciometro);
  angulo = map(input, 0, 1023, 0, 180);
  servomotor.write(angulo);
}