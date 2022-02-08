/*
  RandomTicker.h - Library for randomly flashing led on random intervals.
  Created by Jeanna Terrell February 3, 2022.
*/
#ifndef RandomTicker_h
#define RandomTicker_h

#include "Arduino.h"

typedef void (*Callback)();

class RandomTicker
{
  public:
    RandomTicker();
    RandomTicker(int minTicks, int maxTicks, int minDelay, int maxDelay, Callback callback );
    void run();
    bool isEvenTick();
    bool isOddTick();
  protected:
    void (*_callback) ();
  private:
    int _minTicks;
    int _maxTicks;
    int _minDelay;
    int _maxDelay;
    // void (*_callback) (); 
    bool _even; 
};

#endif
