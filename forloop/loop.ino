int j;

int delayTime=500;

void setup(){

Serial.begin(9600);

}


void loop(){

for (j=10;j>=1;j--){

  Serial.println(j);
  delay(delayTime);

}
Serial.println();
  }


