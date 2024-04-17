#include <iostream>
#include "TempSensors.h"
#include "humidity.h"
#include "Co2Sensor.h"
#include "PressureSensor.h"
#include "ATH22.h"
#include "sensorshandler.h"

int main(){
   srand(time(NULL));
   TempSensors t1;
   TempSensors t2;
   TempSensors t3;  
   SensorsHandler aaa;
   aaa.add_SensorsTemp(&t1);
   aaa.add_SensorsTemp(&t2);
   aaa.add_SensorsTemp(&t3);
   std::cout<<aaa<<std::endl;
   return 0;
}