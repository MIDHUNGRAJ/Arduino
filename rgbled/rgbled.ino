int red=8;
int green=9;
int blue=10;

int tim(300);

void setup(){
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

}

void loop(){
//red led
digitalWrite(red,HIGH);
delay(tim);
digitalWrite(red,LOW);
delay(tim);

//green led
digitalWrite(green,HIGH);
delay(tim);
digitalWrite(green,LOW);
delay(tim);

//blue led
digitalWrite(blue,HIGH);
delay(tim);
digitalWrite(blue,LOW);
delay(tim);

//white led ON
digitalWrite(red,HIGH);
digitalWrite(green,HIGH);
digitalWrite(blue,HIGH);
delay(tim);

//white led OFF
digitalWrite(red,LOW);
digitalWrite(green,LOW);
digitalWrite(blue,LOW);
delay(tim);
}

