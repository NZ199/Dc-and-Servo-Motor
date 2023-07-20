
#include <Servo.h>  // Include the Servo library 

int servoPin = 9;   
Servo Servo1;        
int offTime = 1000;

void setup() { 
    
   Servo1.attach(servoPin); 
}
void loop(){ 
   
   Servo1.write(0); 
   delay(offTime); 
  
   Servo1.write(90);   
   delay(offTime); 
  
   Servo1.write(180);  
   delay(offTime); 
}