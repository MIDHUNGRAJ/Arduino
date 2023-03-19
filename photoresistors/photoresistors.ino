int lightPen=A2;
int redLed=8;
int greenLed=12;
int lightVal;
int del=250;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(lightPen,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPen);
  if(lightVal == 0 ){
    digitalWrite(redLed,HIGH);
    digitalWrite(greenLed,LOW);
  } 
  if(lightVal > 0){
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,LOW);
  }
  Serial.println(lightVal);
  delay(del);
}


