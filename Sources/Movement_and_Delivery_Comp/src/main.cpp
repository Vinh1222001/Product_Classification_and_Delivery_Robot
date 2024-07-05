#include <Arduino.h>

// put function declarations here:
#define OUT1_PIN 12
#define OUT2_PIN 14
#define OUT3_PIN 27
#define OUT4_PIN 26
#define OUT5_PIN 25


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(OUT1_PIN, OUTPUT);
  pinMode(OUT2_PIN, OUTPUT);
  pinMode(OUT3_PIN, OUTPUT);
  pinMode(OUT4_PIN, OUTPUT);
  pinMode(OUT5_PIN, OUTPUT);
}

void loop() {

  digitalWrite(OUT1_PIN, HIGH);
  digitalWrite(OUT2_PIN, LOW);

  digitalWrite(OUT3_PIN, HIGH);
  digitalWrite(OUT4_PIN, LOW);

  delay(3000);

  digitalWrite(OUT1_PIN, LOW);
  digitalWrite(OUT2_PIN, HIGH);

  digitalWrite(OUT3_PIN, LOW);
  digitalWrite(OUT4_PIN, HIGH);

  delay(3000);

  digitalWrite(OUT1_PIN, LOW);
  digitalWrite(OUT2_PIN, LOW);

  digitalWrite(OUT3_PIN, LOW);
  digitalWrite(OUT4_PIN, LOW);

  delay(3000);
}
