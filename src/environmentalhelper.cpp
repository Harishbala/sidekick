#include "environmentalhelper.h"
#include <QDesktopWidget>

EnvironmentalHelper::EnvironmentalHelper()
{

}

void EnvironmentalHelper::getScreenGeometry(const QApplication& a, int& height, int& width)
{
    auto desktop = a.desktop();
    QRect rec = desktop->screenGeometry();
    height = rec.height();
    width = rec.width();
}
