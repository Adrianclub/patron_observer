#ifndef I_CLOCKTIMER_H_INCLUDED
#define I_CLOCKTIMER_H_INCLUDED
#include "i_notifier.h"

class IClockTimer :public INotifier
{
    public:
        IClockTimer(){};
        ~IClockTimer(){};
        virtual int GetHour()= 0;
        virtual int GetMinute() = 0;
        virtual int GetSecond() = 0;
        virtual void start() = 0;
        virtual void stop() = 0;
        virtual void setNotifier (INotifier* notifier)=0;
    protected:
        INotifier* notifier;

};



#endif // I_CLOCKTIMER_H_INCLUDED
