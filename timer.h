#ifndef TIMER_H
#define TIMER_H

#include <functional>
#include <QTimer>
class Timer : QTimer
{
public:
    Timer();
    Timer(int timeout, std::function<void()> functor);
    void start();
    static void timeout();
    void invoke() const;
private:
    int timeOut_;
    std::function<void()> invokable_;
};

#endif // TIMER_H
