#ifndef I_NOTIFIER_H_INCLUDED
#define I_NOTIFIER_H_INCLUDED

class INotifier
{
   public:
       virtual void notify()= 0;
       virtual ~INotifier(){};
   protected:
        INotifier(){};
};

#endif // I_NOTIFIER_H_INCLUDED
