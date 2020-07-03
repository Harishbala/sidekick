#include "timer.h"
#include <QTimer>
#include <memory>
#include <notification.h>
using namespace std;

class TTime
{

public:

    void timeout()
    {
        if(pWidget->isVisible())
        {
            pWidget->hide();
            QTimer::singleShot(actualTimeOut, timeout);
        }
        else
        {
            pWidget->show();
            QTimer::singleShot(10000, timeout);
        }
    }

private:
    shared_ptr<Notification> pWidget = nullptr;
};

Timer::Timer()
    : QTimer(this)
    , timeOut_(0)
    , invokable_(nullptr)
{

}

Timer::Timer(int timeout, std::function<void()> invokable)
    : timeOut_(timeout),
      invokable_(invokable)
{
    setInterval(timeout);
}

void Timer::start()
{
    start();
    /*
    QTimer::singleShot(1000,[&](){
        if(invokable_)
        {
            invokable_();
        }
    });
    */
}
