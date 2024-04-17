#include "TempSensors.h"
#include "PressureSensor.h"
#include "humidity.h"
#include "Co2Sensor.h"
#include "ATH22.h"

class SensorsHandler{
private:
    TempSensors** Temp_array;
    HumiditySensor** Hum_array;
    PressureSensor** Pres_array;
    Co2Sensors** Co2_array;
    ATH** ATH_array;
    size_t Temp_size = 10;
    size_t Hum_size = 11;
    size_t Pres_size = 12;
    size_t Co2_size = 15;
    size_t ATH_size = 40;
public:
    SensorsHandler(){
    Temp_array = new TempSensors*[Temp_size];
    Hum_array = new HumiditySensor*[Hum_size];
    Pres_array = new PressureSensor*[Pres_size];
    Co2_array = new Co2Sensors*[Co2_size];
    ATH_array = new ATH*[ATH_size];   
    }
    void add_SensorsTemp(TempSensors* temp){
        for (int i = 0; i < Temp_size; i++){
            if (Temp_array[i] == nullptr){
                Temp_array[i] = temp;
                break;
            }
        }
    }

    void add_SensorsHum(HumiditySensor* hum){
        for (int i = 0; i < Hum_size; i++){
            if (Hum_array[i] == nullptr){
                Hum_array[i] = hum;
                break;
            }
        }
    }

    void add_SensorsPres(PressureSensor* Pres){
        for (int i = 0; i < Pres_size; i++){
            if (Pres_array[i] == nullptr){
                Pres_array[i] = Pres;
                break;
            }
        }
    }

    void add_SensorsATH(ATH* A){
        for (int i = 0; i < ATH_size; i++){
            if (ATH_array[i] == nullptr){
                ATH_array[i] = A;
                break;
            }
        }
    }

    void add_SensorsCo2(Co2Sensors* C02){
        for (int i = 0; i < Co2_size; i++){
            if (Co2_array[i] == nullptr){
                Co2_array[i] = C02;
                break;
            }
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const SensorsHandler& temp){
        for (int i = 0; i < temp.Temp_size; i++){
            if (temp.Temp_array[i] == nullptr){
                break;
            }
            os << "TempSensors" <<i<<": "<< (*temp.Temp_array[i])() << std::endl;
        }
        //и так далее 4 раза..
        return os;
    }
};