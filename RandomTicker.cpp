/*
  RandomTicker.h - Library for randomly flashing led on random intervals.
  Created by Jeanna Terrell February 3, 2022.
*/

#include "Arduino.h"
#include "RandomTicker.h"

RandomTicker::RandomTicker() {
}

RandomTicker::RandomTicker(int minTicks, int maxTicks, int minDelay, int maxDelay, void(*callback)) {
  _minTicks = minTicks;
  _maxTicks = maxTicks;
  _minDelay = minDelay;
  _maxDelay = maxDelay;
  _callback = callback;
}

void RandomTicker::run(){
  long randomTicks = random(_minTicks, _maxTicks);
  for (int i = 0; i < randomTicks; i++){
    delay(random(_minDelay, _maxDelay));
    _callback();
  }
}
