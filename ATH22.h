#pragma once
#include "tempo_sensors.h"
#include "humidity.h"
#include <tuple>

class ATH{
private:
    tempo_sensors _temp;
    humidity_sensor _hum;

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