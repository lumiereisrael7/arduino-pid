// Basic demo for accelerometer readings from Adafruit MPU6050

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <math.h>

Adafruit_MPU6050 mpu;
float accZ, accY, gyroX, angle;

void setup(void) {
  sensors_event_t a;
  
  Serial.begin(115200);
  
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  delay(100);

}

void loop() {

  sensors_event_t a, g;
  
  
  mpu.getEvent(&a, &g, NULL);

  


  Serial.print("Rotation X: ");
  Serial.print(g.gyro.x);
  

 

  Serial.println(angle);
  delay(500);
}
