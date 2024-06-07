#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  Serial.println("Serial started at 115200");
  
  int result = myFunction(2, 3);
  Serial.print("myFunction(2, 3) returned: ");
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world!");
  delay(2000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}