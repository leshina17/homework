#pragma once
#include <iostream>
#include <random>
class Co2Sensors{
private:
    double _percent;

    void Update(){
        double tmp = -10 + rand()%20;
        _percent += tmp/10;
        if(_percent > MAX_PERCENT) _percent = MAX_PERCENT;
        if(_percent < 0) _percent = 0;
    }

public:
    const double MAX_PERCENT = 100;

    Co2Sensors(){
        _percent = rand()% static_cast<int>(MAX_PERCENT);
    }
    
    double operator()(){
        Update();
        return _percent;
    }
};