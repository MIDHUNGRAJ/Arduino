int potVal;
int buzzPin=12;
int potPin=A1;
int del=1000;
int result;
void setup(){
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
pinMode(potPin,INPUT);
}

void loop(){
potVal=analogRead(potPin);
Serial.println(potVal);

if (potVal>1000){
  digitalWrite(buzzPin, HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
}
digitalWrite(buzzPin, LOW);
}


