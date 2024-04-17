#pragma once
#include "TempSensors.h"
#include "humidity.h"
#include <tuple>

class ATH{
private:
    TempSensors _temp;
    HumiditySensor _hum;

public:

double GetTemp(){
    return _temp();
}

double GetHum(){
    return _hum();
}

std::tuple<double, double> operator()(){
    return std::tuple<double, double>(_temp(), _hum());
}
};