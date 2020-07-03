#ifndef TRAYNOTIFICATION_H
#define TRAYNOTIFICATION_H
#include <string>
#include <notification.h>
#include <QSystemTrayIcon>

class TrayNotification : public Notification
{
public:
    TrayNotification();
    virtual void setText(const std::string& text);
    virtual void show();
    virtual void hide();
    virtual bool isVisible();
    virtual void setGeometry(int height, int width);

    virtual ~TrayNotification();
private:
    QSystemTrayIcon trayIcon_;
};

#endif // TRAYNOTIFICATION_H
