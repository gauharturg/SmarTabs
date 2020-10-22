#include <AFMotor.h>  
AF_DCMotor motor(1);
AF_DCMotor motor_1(4);


int echoPin =11; 
int trigPin =12; 
 
void setup() { 
    Serial.begin (9600); 
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
} 
 
void loop() { 
    int duration, cm; 
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW); 
    duration = pulseIn(echoPin, HIGH); 
    cm = duration / 58;
    Serial.print(cm); 
    Serial.println(" cm"); 
    delay(100);
    if(cm<7)
    { uint8_t i;
    motor.run(FORWARD);
    motor_1.run(FORWARD);
      
      }
}
