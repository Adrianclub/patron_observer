#ifndef I_OBSERVER_H_INCLUDED
#define I_OBSERVER_H_INCLUDED


class IObserver
{
    public:
        virtual ~IObserver(){};
        virtual void update() = 0;
    protected:
        IObserver(){};
};



#endif // I_OBSERVER_H_INCLUDED
