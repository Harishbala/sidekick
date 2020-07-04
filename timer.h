#ifndef TIMER_H
#define TIMER_H

#include <functional>
#include <memory>
#include <QTimer>
#include <notification.h>

class Timer : QTimer
{
public:
    Timer();
    Timer(int timeout, std::shared_ptr<Notification>);
    void start();
    static void timeout();
    void invoke() const;

protected:
	void timerEvent(QTimerEvent *e);

private:
    int timeOut_;
    std::shared_ptr<Notification> widget_;
};

#endif // TIMER_H
