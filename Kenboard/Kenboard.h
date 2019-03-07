#ifndef KENBOARD_h
#define KENBOARD_h
#include "Keyboard.h"
#include "Arduino.h"
#define CTRL   0x80
#define SHIFT    0x81
#define ALT    0x82
#define GUI_KEY    0x83

#define UP_ARROW    0xDA
#define DOWN_ARROW    0xD9
#define LEFT_ARROW    0xD8
#define RIGHT_ARROW   0xD7
#define BACKSPACE   0xB2
#define TAB       0xB3
#define ENTER      0xB0
#define ESCAPE       0xB1
#define INSERT      0xD1
#define DELETE      0xD4
#define PAGE_UP     0xD3
#define PAGE_DOWN   0xD6
#define KEY_HOME      0xD2
#define END       0xD5
#define CAPS_LOCK   0xC1
#define F1        0xC2
#define F2        0xC3
#define F3        0xC4
#define F4        0xC5
#define F5        0xC6
#define F6        0xC7
#define F7        0xC8
#define F8        0xC9
#define F9        0xCA
#define F10       0xCB
#define F11       0xCC
#define F12       0xCD
#define F13       0xF0
#define F14       0xF1
#define F15       0xF2
#define F16       0xF3
#define F17       0xF4
#define F18       0xF5
#define F19       0xF6
#define F20       0xF7
#define F21       0xF8
#define F22       0xF9
#define F23       0xFA
#define F24       0xFB
class KenboardClass {
	public:
	void pressAndRelease(uint8_t k);
	void ctrlPress(uint8_t k);
	void typeWithDelay(String words);
	void runCommandWindows(String words);
	void openCommandLine();
};

extern KenboardClass Kenboard;
#endif
