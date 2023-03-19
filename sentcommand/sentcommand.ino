int j=1;
int d1=750;
int x=3;
int y=7;
int z;
String mystring=" + ";

void setup(){

  Serial.begin(9600);
}

void loop(){

z=x+y;
// Serial.println(z);
//Serial.print(mystring);
//Serial.println(j);
//j+=1;
Serial.print(x);
Serial.print(mystring);
Serial.print(y);
Serial.print(" = ");
Serial.println(z);
delay(d1);
}

