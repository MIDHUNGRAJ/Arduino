int j;
int Delay=500;

void setup(){

Serial.begin(9600);

}

void loop(){

  j=1;
while (j<=10){
  Serial.println(j);
  delay(Delay);
  j++;
  }
Serial.println();

}

