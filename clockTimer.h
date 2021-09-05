#ifndef CLOCKTIMER_H_INCLUDED
#define CLOCKTIMER_H_INCLUDED
#include "i_clockTimer.h"


class ClockTimer : public IClockTimer
{
    public:
        ClockTimer();
        ~ClockTimer(){}
        virtual int GetHour();
        virtual int GetMinute();
        virtual int GetSecond();
        virtual void start();
        virtual void stop();
        virtual void setNotifier (INotifier* notifier);
        virtual void notify();
        void Tick();
    private:
        int m_hours;
        int m_minutes;
        int m_seconds;
};



#endif // CLOCKTIMER_H_INCLUDED
