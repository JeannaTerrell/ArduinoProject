#include "Arduino.h"
#include "RandomTickerLED.h"


RandomTickerLED::RandomTickerLED(int ledCount, int leds[], int minTicks, int maxTicks, int minDelay, int maxDelay) 
  : RandomTicker(minTicks, maxTicks, minDelay, maxDelay, &callback)  {
  _ledCount = ledCount;
  _leds[ledCount] = *leds;
  
}

void RandomTickerLED::callback(){
  for (int i = 0; i < _ledCount; i++){
      digitalWrite(_leds[i], isEvenTick());
  }
}

void RandomTickerLED::pinSetup(){
  for (int i = 0; i < _ledCount; i++){
    pinMode(_leds[i], OUTPUT);
  }
}