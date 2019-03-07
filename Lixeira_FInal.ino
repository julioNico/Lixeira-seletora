#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;

void setup() {
//  servo_1.attach(9);
  servo_2.attach(10);
  servo_3.attach(11);
  
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(22, INPUT);
  pinMode(24, OUTPUT);
  
  pinMode(30, INPUT);
  pinMode(32, OUTPUT);
  
  pinMode(38, INPUT);
  pinMode(40, OUTPUT);
  
  pinMode(46, INPUT);
  pinMode(48, OUTPUT);

  servo_1.write(180);
  servo_2.write(180);
  servo_3.write(180);  

}

// the loop function runs over and over again forever
void loop() {

//Orgânico
if(digitalRead(22) == HIGH){
//  servo_1.write(180);
  
  servo_2.write(180);
  digitalWrite(24, HIGH);
  
  servo_3.write(180);
  delay(500);
  servo_2.write(90);
  delay(10000);
  servo_2.write(180);
  digitalWrite(24, LOW);
  
}

//Papel
if(digitalRead(30) == HIGH){
//  servo_1.write(180);
  
  servo_2.write(180);
  digitalWrite(32, HIGH);
  
  servo_3.write(150);
  delay(500);
  servo_2.write(90);
  delay(10000);
  servo_2.write(180);
  digitalWrite(32, LOW);
  
}

//Metal
if(digitalRead(38) == HIGH){
//  servo_1.write(180);
  
  servo_2.write(180);
  digitalWrite(40, HIGH);
  
  servo_3.write(45);
  delay(500);
  servo_2.write(90);
  delay(10000);
  servo_2.write(180);
  digitalWrite(40, LOW);
}

//Plástico
if(digitalRead(46) == HIGH){
//  servo_1.write(180);
  
  servo_2.write(180);
  digitalWrite(48, HIGH);
  
  servo_3.write(70);
  delay(500);
  servo_2.write(90);
  delay(10000);
  servo_2.write(180);
  digitalWrite(48, LOW);
  
}
delay(500);
}
