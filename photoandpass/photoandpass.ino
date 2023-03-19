int lightPin=A2;
int buzzPin=12;
int lightVal;
int del;

void setup() {
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
pinMode(lightPin,INPUT);

}

void loop() {

lightVal=analogRead(lightPin);
del=(9./550.)*lightVal-(9.*200./550.)+1.;

Serial.println(del);
digitalWrite(buzzPin, HIGH);
delay(del);
digitalWrite(buzzPin, LOW);
delay(del);

}

