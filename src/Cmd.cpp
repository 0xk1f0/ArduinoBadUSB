#include <Arduino.h>
#include "Keyboard.h"
#include "Cmd.h"

void initHID() {
    Keyboard.begin(KeyboardLayout_de_DE);
}

void execKeys() {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(KEY_RETURN);
    delay(150);
    Keyboard.releaseAll();
    Keyboard.print("ls");
    delay(50);
    Keyboard.write(KEY_RETURN);
    Keyboard.end();
}
