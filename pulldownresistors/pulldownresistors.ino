int ledPin=10;
int buttonPin=12;
int buttonRead;
int del(100);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
delay(del);
if(buttonRead==1){
  digitalWrite(ledPin, LOW);
}
if(buttonRead==0){
  digitalWrite(ledPin, HIGH);
}

}
