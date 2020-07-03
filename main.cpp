#include "mainwindow.h"

#include <QApplication>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QPushButton>
#include <QMessageBox>
#include <timer.h>
#include <messagebox.h>
#include <traynotification.h>
#include <environmentalhelper.h>

using namespace std;

const int testTimeOut = 5*1000;
const int actualTimeOut = 15 * 60 * 1000;

shared_ptr<Notification> pWidget = nullptr;
class TTime
{

public:

static void timeout()
{
    if(pWidget->isVisible())
    {
        pWidget->hide();
        QTimer::singleShot(testTimeOut, timeout);
    }
    else
    {
        pWidget->show();
        QTimer::singleShot(10000, timeout);
    }
}
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    EnvironmentalHelper envHelper;
    pWidget = make_shared<MessageBoxNotification>();

    Timer t(1000, TTime::timeout);
    t.start();

    int width = 0;
    int height = 0;
    envHelper.getScreenGeometry(a, height, width);
    pWidget->setGeometry(height, width);

    return a.exec();
}
