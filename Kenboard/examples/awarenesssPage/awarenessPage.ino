#include "Kenboard.h" // Include Kenboard
// To upload a new sketch, hold down the reset button until it says "Uploading..."
void setup() {
  Keyboard.begin(); // Begin keyboard
}

void loop() {
  delay(1000);
  Kenboard.runCommandWindows("https://bit.ly/2VGsTCH"); // Go to page
  while(true); // Don't keep opening the page!
}
