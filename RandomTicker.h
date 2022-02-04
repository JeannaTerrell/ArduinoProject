/*
  RandomTicker.h - Library for randomly flashing led on random intervals.
  Created by Jeanna Terrell February 3, 2022.
*/
#ifndef RandomTicker_h
#define RandomTicker_h

#include "Arduino.h"
class RandomTicker
{
  public:
    RandomTicker();
    RandomTicker(int minTicks, int maxTicks, int minDelay, int maxDelay, void (*callback));
    void run();
  private:
    int _minTicks;
    int _maxTicks;
    int _minDelay;
    int _maxDelay;
    void (*_callback) ();  
};

#endif
