#ifndef ANALOGCLOCK_H_INCLUDED
#define ANALOGCLOCK_H_INCLUDED
#include "i_widget.h"
#include "i_observer.h"
#include "clockTimer.h"
#include "i_ascriber.h"
#include <sstream>
#define TO_STRING( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

#include <iostream>
#include <string>
using namespace std;
class AnalogClock: public IWidget, public IObserver
{
    public:
        AnalogClock(ClockTimer*);
        ~AnalogClock();

        // overrides Observer operation
        virtual void update();

        // overrides Widget operation;
        // defines how to draw the digital clock
        virtual void Draw();

    private:
        ClockTimer* _subject;
        IAscriber* ascriber;
};




#endif // ANALOGCLOCK_H_INCLUDED
