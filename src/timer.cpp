#include "timer.h"
#include <QTimer>

using namespace std;

Timer::Timer()
    : QTimer(this)
    , timeOut_(0)
    , widget_(nullptr)
{

}

Timer::Timer(int timeout, shared_ptr<Notification> widget)
    : timeOut_(timeout),
      widget_(widget)
{
    setInterval(timeout);
}

void Timer::start()
{
    QTimer::start();
}

void Timer::timerEvent(QTimerEvent *e)
{
    if(widget_->isVisible())
    {
        widget_->hide();
    }
    else
    {
        widget_->show();
    } 
}
