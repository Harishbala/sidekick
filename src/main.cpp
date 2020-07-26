#include "mainwindow.h"

#include <QApplication>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QPushButton>
#include <QMessageBox>
#include <timer.h>
#include <messagebox_notification.h>
#include <traynotification.h>
#include <environmentalhelper.h>

using namespace std;

const int testTimeOut = 5*1000;
const int actualTimeOut = 15 * 60 * 1000;

shared_ptr<Notification> widget = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    shared_ptr<Notification> widget = make_shared<MessageBoxNotification>();

    Timer t(actualTimeOut, widget);
    t.start();

    int width = 0;
    int height = 0;
    EnvironmentalHelper envHelper;
    envHelper.getScreenGeometry(a, height, width);
    widget->setGeometry(height, width);

    return a.exec();
}
