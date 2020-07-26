#include "messagebox_notification.h"

void MessageBoxNotification::setText(const std::string& text)
{
    //msgBox_.setText(text.c_str());
    return;
}

void MessageBoxNotification::show()
{
    msgBox_.show();
    msgBox_.activateWindow();
    msgBox_.raise();
}

void MessageBoxNotification::hide()
{
    msgBox_.setVisible(false);
}

bool MessageBoxNotification::isVisible() const
{
    return msgBox_.isVisible();
}

void MessageBoxNotification::setGeometry(int height, int width)
{
    msgBox_.setGeometry(width - 250, height - 150, 400, 100);
}
