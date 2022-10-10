#include <Arduino.h>
#include <inttypes.h>

class OnBoardLED {
  private:
    bool _state;
    unsigned long _delay;
    unsigned long _startTime;
  public:
    void init(unsigned long delay_value);
    void process();
};