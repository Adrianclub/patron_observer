#include "clockTimer.h"

void ClockTimer::notify()
{

}
ClockTimer::ClockTimer()
{
        m_hours = 0;
        m_minutes = 0;
        m_seconds = 0;
}

int ClockTimer::GetHour( void )
{
    return this->m_hours;
}

int ClockTimer::GetMinute( void )
{
    return this->m_minutes;
}

int ClockTimer::GetSecond( void )
{
    return this->m_seconds;
}

void ClockTimer::Tick ()
{
    // No update internal time-keeping state, only a demo.
    // ...
    m_seconds++;
    if(m_seconds == 60)
    {
        m_seconds = 0;
        m_minutes++;
        if(m_minutes == 60)
        {
            m_seconds = 0;
            m_minutes = 0;
            m_hours++;
            if(m_hours == 24)
            {
                m_seconds = 0;
                m_minutes = 0;
                m_hours = 0;
            }
        }
    }
    notify();
}
void ClockTimer:: start(){}
void ClockTimer::stop(){}

void ClockTimer::setNotifier (INotifier* notifier){
    this->notifier = notifier;
}
