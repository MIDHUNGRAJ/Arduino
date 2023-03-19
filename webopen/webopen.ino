#include <IRremote.h>

IRrecv irrecv(11);  // IR receiver connected to pin 11
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  // Start the IR receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.value == 0xFFFFFFFF) {  // Replace 0x12345678 with the code for the button on your remote
      // Code to open website goes here
      // One way to do this is to use the system() function
      // to run a command that opens the website
      Serial.println(results.value,HEX);
      system("start http://www.google.com");
    }
    irrecv.resume();  // Receive the next IR signal
  }
}
