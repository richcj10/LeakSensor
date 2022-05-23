#ifndef SENSOR_H
#define SENSOR_H

#define SENSOR_BIAS 0
#define SENSOR_INPUT_1 1
#define SENSOR_INPUT_2 2
#define SENSOR_INPUT_3 3

char SensorValueCheck(double ValueIn);
char ReadSensors();
char RelayCheck();
char ReadRelayState();
char ReadSensorValues(unsigned char Value);
void SetSensorWaterDetect(unsigned int Value);
void SensorWaterDisconected(unsigned int Value);

#endif