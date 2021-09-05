#ifndef CHANGEMANAGER_H_INCLUDED
#define CHANGEMANAGER_H_INCLUDED
#include "i_ascriber.h"
#include "i_notifier.h"

class ChangeManager :public IAscriber , public INotifier
{
   public:
       ChangeManager(){};
       ~ChangeManager(){};
       void attach (IObserver* observer);
       void dettach(IObserver* observer);
       void notify();
};



#endif // CHANGEMANAGER_H_INCLUDED
