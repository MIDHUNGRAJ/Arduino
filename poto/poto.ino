int volt=A3;
int readVal;
float V2;
int d2=250;

void setup(){

Serial.begin(9600);
}


void loop(){

readVal=analogRead(volt);
V2=(5./1023.)*readVal;
Serial.println(V2);
delay(d2);

}
