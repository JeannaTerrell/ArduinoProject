# Random Ticker
An Arduino library to trigger a random number of events a random number of times with a random interval between each event.

## Possible Uses
- Randomly jitter a servo motor
- Sporadically blink an led

## Sample Code
```
#include <RandomTicker.h>

RandomTicker ticker;
int minTicks = 1, maxTicks = 5, minDelay = 1000, maxDelay = 5000;

void Setup()
{
    Serial.begin(9600);
    Serial.println("Starting Ticker");
    ticker = RandomTicker(int minTicks, int maxTicks, int minDelay, int maxDelay, callback);
}

void loop()
{
    ticker.run();
}

void callback()
{
    Serial.println("Tick!");
}
```

