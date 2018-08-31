#include<Servo.h>
Servo turn;
char val;
#include <Servo.h>
Servo acc;
void setup() {
  acc.attach(9);
  acc.write(0);
  delay(1000);
  turn.attach(10);
  turn.write(90);
  delay(500);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    val = Serial.read();
    Serial.println(val);
  }
  switch (val) {
   case 'F':
    acc.write(18);
    break;
   case '1':
    acc.write(36);
    break;
   case '2':
    acc.write(54);
    break;
   case '3':
    acc.write(70);
    break;
   case '4':
    acc.write(88);
    break;
   case '5':
    acc.write(106);
    break;
   case '6':
    acc.write(124);
    break;
   case '7':
    acc.write(142);
    break;
   case '8':
    acc.write(160);
    break;
   case 'q':
    acc.write(170);
    break;
   case '0':
    acc.write(0);
    //turn.write(90);
    break;
   case 'b':
    acc.write(18);
    break;
   case 'L':
    turn.write(135);
    break;
   case 'R':
    turn.write(45);
    break;
    default :
    turn.write(0);
   delay(200);
  }
  // put your main code here, to run repeatedly:

}
