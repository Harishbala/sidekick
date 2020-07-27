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
	const int notification_width = 250;
	const int notification_height = 150;

	int adjusted_width = 0;
	int adjusted_height = 0;
	if (width >= notification_width and height >= notification_height)
	{
    	adjusted_width = width - notification_width;
    	adjusted_height = height = notification_height;
    }
    msgBox_.setGeometry(adjusted_width, adjusted_height, 400, 100);
}
