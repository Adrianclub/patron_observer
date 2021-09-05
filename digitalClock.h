#ifndef DIGITALCLOCK_H_INCLUDED
#define DIGITALCLOCK_H_INCLUDED
#include <sstream>
#define TO_STRING( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

#include <iostream>
#include <string>
#include "i_widget.h"
#include "i_observer.h"
#include "clockTimer.h"
#include "i_ascriber.h"
using namespace std;


class DigitalClock: public IWidget, public IObserver
{
    public:
        DigitalClock(ClockTimer* s);
        ~DigitalClock();
        virtual void update();
        // overrides Observer operation
        virtual void Draw();
        // overrides Widget operation;
        // defines how to draw the digital clock

    private:
        ClockTimer* _subject;
        IAscriber* ascriber;
};



#endif // DIGITALCLOCK_H_INCLUDED
