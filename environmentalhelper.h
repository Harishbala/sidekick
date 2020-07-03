#ifndef ENVIRONMENTALHELPER_H
#define ENVIRONMENTALHELPER_H
#include <QApplication>

class EnvironmentalHelper
{
public:
    EnvironmentalHelper();
    void getScreenGeometry(const QApplication& a, int& height, int& width);

private:
};

#endif // ENVIRONMENTALHELPER_H
