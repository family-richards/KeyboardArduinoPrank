#include "Arduino.h"
#include "Kenboard.h"
#include "Keyboard.h"

void KenboardClass::pressAndRelease(uint8_t k) {
	Keyboard.press(k);
	Keyboard.releaseAll();
	delay(250);
}

void KenboardClass::ctrlPress(uint8_t k) {
	Keyboard.press(CTRL);
	Keyboard.press(k);
	Keyboard.releaseAll();
	delay(250);
}

void KenboardClass::typeWithDelay(String words) {
	Keyboard.print(words);
	delay(500);
}

void KenboardClass::runCommandWindows(String words) {
	pressAndRelease(KEY_LEFT_GUI);
	typeWithDelay("run");
	pressAndRelease(ENTER);
	typeWithDelay(words);
	pressAndRelease(ENTER);
}

void KenboardClass::openCommandLine() {
	runCommandWindows("cmd.exe");
}

KenboardClass Kenboard;
