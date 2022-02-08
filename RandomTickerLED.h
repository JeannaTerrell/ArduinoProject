/*
  RandomTickerLED.h - Library for randomly flashing led on random intervals.
  Created by Jeanna Terrell February 3, 2022.
*/
#ifndef RandomTickerLED_h
#define RandomTickerLED_h

#include "RandomTicker.h"

#include "Arduino.h"
class RandomTickerLED: public RandomTicker
{
  public:
    RandomTickerLED(int ledCount, int leds[], int minTicks, int maxTicks, int minDelay, int maxDelay);
  private:
    int _ledCount;
    int _leds[];
    void callback();
    void pinSetup();
};

#endif
