#include <Arduino.h>
#include "Feedback.h"

const int BUTTON_PIN = 5;
int pinstate;

void initLED() {
    pinMode(BUTTON_PIN, INPUT);
}

void awaitDeploy() {
    pinstate = digitalRead(BUTTON_PIN);
    while (pinstate == LOW) {
        pinstate = digitalRead(BUTTON_PIN);
    }
}

void statusCode(int type) {
    switch (type) {
        case 1:
            digitalWrite(LED_BUILTIN_RX, LOW);
            digitalWrite(LED_BUILTIN_TX, LOW);
            digitalWrite(LED_BUILTIN, LOW);
            delay(250);
            digitalWrite(LED_BUILTIN_RX, HIGH);
            digitalWrite(LED_BUILTIN_TX, HIGH);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(250);
            digitalWrite(LED_BUILTIN_RX, LOW);
            digitalWrite(LED_BUILTIN_TX, LOW);
            digitalWrite(LED_BUILTIN, LOW);
            break;
        case 0:
            digitalWrite(LED_BUILTIN_RX, HIGH);
            digitalWrite(LED_BUILTIN_TX, HIGH);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(250);
            digitalWrite(LED_BUILTIN_RX, LOW);
            digitalWrite(LED_BUILTIN_TX, LOW);
            digitalWrite(LED_BUILTIN, LOW);
            delay(250);
            digitalWrite(LED_BUILTIN_RX, HIGH);
            digitalWrite(LED_BUILTIN_TX, HIGH);
            digitalWrite(LED_BUILTIN, HIGH);
            break;
    }
}
