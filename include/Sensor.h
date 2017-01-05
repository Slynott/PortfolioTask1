//Senor class definition
#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include "sensor.h" //use the sensor class


class Sensor
{
    private:
        string Reading();
        virtual ~Sensor();
        NameSensor();// Sensor is an instance of class Name


    public:
        void getReading();
        void getName ();

};

#endif // SENSOR_H
