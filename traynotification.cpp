#include "traynotification.h"

TrayNotification::TrayNotification()
    : Notification()
{
    trayIcon_.setIcon(QIcon("image.png"));
}

void TrayNotification::setText(const std::string& text)
{

}

void TrayNotification::show()
{
    trayIcon_.setVisible(true);
    trayIcon_.showMessage("Timer", "Times up!");
    trayIcon_.show();
}

void TrayNotification::hide()
{
    trayIcon_.setVisible(false);
}

bool TrayNotification::isVisible()
{
    return trayIcon_.isVisible();
}

void TrayNotification::setGeometry(int height, int width)
{
    return;
}

TrayNotification::~TrayNotification()
{

}
