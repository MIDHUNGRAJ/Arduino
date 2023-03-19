int redPin=12;
int greenPin=11;
int bluePin=10;

// String myName;
String ledName;
String msg="which led you want to blink";
// String msg2="Hello";
// String msg3="Welcome to Arduino";

void setup() {

Serial.begin(9600);

pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {

Serial.println(msg);
while (Serial.available()==0){

}
ledName=Serial.readString();
ledName.trim();
// Serial.print(msg2);
// Serial.print(" ");
// Serial.print(ledName);
// Serial.println(msg3);
if (ledName=="red" || ledName=="Red" ){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (ledName=="green" || ledName=="Green"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (ledName=="blue" || ledName=="Blue"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
}

if (ledName=="off" || ledName=="Off"){
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
}

}



