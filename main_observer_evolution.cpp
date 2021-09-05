
#include "analogClock.h"
#include "digitalClock.h"
#include "clockTimer.h"
#include "changeManager.h"
int main()
{
    ClockTimer* timer = new ClockTimer();
    AnalogClock* analog = new AnalogClock(timer);
    DigitalClock* digital = new DigitalClock(timer);
    analog->Draw();
    digital->Draw();
    delete timer;
    delete digital;
    delete analog;
    return 0;
}
