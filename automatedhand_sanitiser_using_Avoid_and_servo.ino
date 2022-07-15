#include <Servo.h>
#define Avoid 2
#define LED1 13

Servo myservo;
int AvoidState =0;
int pos = 0;

void setup() {
  myservo.attach(9);
  pinMode(Avoid ,INPUT);
  pinMode(LED1,OUTPUT);

}

void loop() {
 AvoidState = digitalRead(Avoid);
if(AvoidState == LOW){
  for(pos = 0 ; pos<= 135 ; pos+=1){
    myservo.write(pos);
  digitalWrite(LED1 , HIGH);
    delay(10);
    }
     for(pos = 135 ; pos>= 0 ; pos-=1){
    myservo.write(pos);
  
    delay(10);
    }
     
}
 else if(AvoidState == HIGH){

  digitalWrite(LED1 , LOW);
   
    }
  
  } 
  
  
 
 
 
