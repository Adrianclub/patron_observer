#include "digitalClock.h"

DigitalClock::DigitalClock(ClockTimer* s)
{
    _subject = s;

}

DigitalClock::~DigitalClock ()
{

}

void DigitalClock::update ()
{
    Draw();
}

void DigitalClock::Draw ()
{
    // get the new values from the subject
    string hours = TO_STRING(_subject->GetHour());
    string minutes = TO_STRING(_subject->GetMinute());
    string seconds = TO_STRING(_subject->GetSecond());

    // draw the digital clock
    if(hours.size() == 1){hours = "0"+hours;}
    if(minutes.size() == 1){minutes = "0"+minutes;}
    if(seconds.size() == 1){seconds = "0"+seconds;}

    cout <<"I am Digital: "<< hours<<":"<<minutes<<":"<<seconds<<endl;
}
