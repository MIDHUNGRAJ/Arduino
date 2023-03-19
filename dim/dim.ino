int redPin=11;
int yellow=10;
int wait=500;
int redTime=5;
int yellowTime=5;

void setup(){
pinMode(redPin,OUTPUT);
pinMode(yellow,OUTPUT);

}

void loop(){

  for(int i=0;i<redTime;i++){
    // digitalWrite(redPin,HIGH);
    analogWrite(redPin,120);
    delay(wait);
    analogWrite(redPin,0);
    delay(wait);
  }

  for(int j=0;j<yellowTime;j++){
    digitalWrite(yellow,HIGH);
    delay(wait);
    digitalWrite(yellow,LOW);
    delay(wait);
  }

}

