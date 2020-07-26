#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>
#include <string>
#include <notification.h>

class MessageBoxNotification : public Notification
{
public:
    MessageBoxNotification() {}
    void setText(const std::string& text);
    void show();
    void hide();
    bool isVisible() const;
    void setGeometry(int height, int width);

    virtual ~MessageBoxNotification() {}
private:
    QWidget msgBox_;
};
#endif // MESSAGEBOX_H
