#ifndef I_ASCRIBER_H_INCLUDED
#define I_ASCRIBER_H_INCLUDED
#include <list>
#include "i_observer.h"
using namespace std;

class IAscriber
{
    public:
        virtual void attach (IObserver* observer)=0;
        virtual ~IAscriber(){};
        virtual void dettach (IObserver* observer)=0;
    protected:
        IAscriber(){};
        list<IObserver*> _observers;
};

#endif // I_ASCRIBER_H_INCLUDED
