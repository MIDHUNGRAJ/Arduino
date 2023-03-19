int myNumb;
int buzzPin=12;
int del=500;
String msg="Please Input Your Number";

void setup(){
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);

}

void loop(){

Serial.println(msg);
while (Serial.available()==0){

}
myNumb=Serial.parseInt();
// myNumb.trim();

if (myNumb>10){
  digitalWrite(buzzPin, HIGH);
  delay(del);
  digitalWrite(buzzPin, LOW);
}

}

