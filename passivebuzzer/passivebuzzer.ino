int buzzPin=12;
int buzzTime=1;
int buzzTime2=1;
int potPin=A1;
int potVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potVal);
  toneVal=(9940./1023.) *potVal+60;

digitalWrite(buzzPin,HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin,LOW);
delayMicroseconds(toneVal);

}


