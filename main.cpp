#include <iostream>
#include "tempo_sensors.h"
#include "humidity.h"
#include "co2Sensor.h"
#include "pressure_sensors.h"
#include "ATH22.h"
#include "sensor_shandler.h"

int main(){
   srand(time(NULL));
   tempo_sensors t1;
   tempo_sensors t2;
   tempo_sensors t3;  
   SensorsHandler aaa;
   aaa.add_SensorsTemp(&t1);
   aaa.add_SensorsTemp(&t2);
   aaa.add_SensorsTemp(&t3);
   std::cout<<aaa<<std::endl;
   return 0;
}