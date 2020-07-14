#include "plaid_pad.h"

void matrix_init_user(void) {
    // comment out this lines to reduce the led brightness
    // with setPinOutput pin has 4.8V and without 1.8V
    setPinOutput(C5); //Led1
    setPinOutput(C4); //Led2
}
