#include <Arduino.h>

#include "EEPROM.h"
#include "liteSettings.h"

#define DEBUG

struct test_t {
  char val[32];
} test = {"TEST"};

liteSettings settings;

void setup() {
  Serial.begin(115200);
  Serial.printf("\ntest.val=%s", test.val);
  settings.read(test);
  delay(1);
  Serial.println(test.val);
  //delay(1000);
  strcpy(test.val, "NEW5");
  settings.save(test);
}

void loop() {
  // put your main code here, to run repeatedly:
}