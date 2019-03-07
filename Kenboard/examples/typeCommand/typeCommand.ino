#include "Kenboard.h" // Include Kenboard
// To upload a new sketch, hold down the reset button until it says "Uploading..."
void setup() {
  Keyboard.begin(); // Begin keyboard
}

void loop() {
  delay(1000);
  Kenboard.openCommandLine(); // Open command prompt
  Kenboard.typeWithDelay("echo test"); // Type command
  while(true); // Don't keep typing the command!
}
