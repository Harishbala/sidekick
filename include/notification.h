#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>

class Notification
{
public:
    Notification();
    virtual void setText(const std::string& text) = 0;
    virtual void show() = 0;
    virtual void hide() = 0;
    virtual bool isVisible() = 0;
    virtual void setGeometry(int height, int width) = 0;
    virtual ~Notification();
};

#endif // NOTIFICATION_H
