int redPin=9;
int bright=100;
int off=0;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright);
delay(100);
analogWrite(redPin,off);
delay(500);

}
