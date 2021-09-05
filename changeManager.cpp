#include "changeManager.h"

void ChangeManager::attach (IObserver* observer)
{
         _observers.push_front(observer);

}
void ChangeManager::dettach(IObserver* observer)
{
         _observers.remove(observer);
}
void ChangeManager::notify()
{
        list<IObserver*>::iterator it;

    for (it =  _observers.begin() ; it !=  _observers.end(); ++it)
    {
       (*it)->update();
    }

}
