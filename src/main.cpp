#include <Arduino.h>
#include "Cmd.h"
#include "Feedback.h"

bool runOnce = false;

void setup() {
  initHID();
  initLED();
  awaitDeploy();
}

void loop() {
  if (runOnce == false) {
    statusCode(1);
    execKeys();
    statusCode(0);
    runOnce = true;
  }
}
