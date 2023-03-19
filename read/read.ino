int numBlinks;
String msg="How Many Blinks do you Want:";
// String msg2 = "Your Number is: ";
int j;
int bt=500;
int redPin=12;
void setup(){
pinMode(redPin,OUTPUT);
Serial.begin(9600);

}

void loop(){
  
Serial.println(msg);
while (Serial.available()==0){

}
//Serial.patseFloat();
numBlinks=Serial.parseInt();
for (j=1;j<=numBlinks;j++){
  digitalWrite(redPin,HIGH);
  delay(bt);
  digitalWrite(redPin,LOW);
  delay(bt);
}

}


