#include "timer.h"
#include <QTimer>

Timer::Timer()
    : timeOut_(0),
      invokable_(nullptr)
{

}

Timer::Timer(int timeout, std::function<void()> invokable)
    : timeOut_(timeout),
      invokable_(invokable)
{

}

void Timer::start()
{
    QTimer::singleShot(1000,[&](){
        if(invokable_)
        {
            invokable_();
        }
    });
}
