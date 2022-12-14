#include "OnBoardLED.h"

void OnBoardLED::init(unsigned long delay_value) {  
  pinMode(LED_BUILTIN, OUTPUT);
  _startTime = millis();
  _delay = delay_value;
}

void OnBoardLED::process() {
  unsigned long actualTime = millis();
  if (actualTime - _startTime > _delay) {
    if (_state) {
      digitalWrite(LED_BUILTIN, 0);
    } else {
      digitalWrite(LED_BUILTIN, 1);
    }
    _startTime = millis();
    _state = !_state;
  }
}