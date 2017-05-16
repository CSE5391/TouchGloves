#include <Keyboard.h>

/* Glove Pins */
int f1InputPin = 6;
int f2InputPin = 5;
int f3InputPin = 4;
int f4InputPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(f1InputPin, INPUT_PULLUP);
  pinMode(f2InputPin, INPUT_PULLUP);
  pinMode(f3InputPin, INPUT_PULLUP);
  pinMode(f4InputPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  Keyboard.begin();
  if(digitalRead(f1InputPin) == 0) //F1 pressed
  {
    // Copy
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('c');
    delay(200);
  }
  else if(digitalRead(f2InputPin) == 0) //F2 pressed
  {
    // Paste
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('v');
    delay(200);
  }
  else if(digitalRead(f3InputPin) == 0) //F3 pressed
  {
    // Cut
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('x');
    delay(200);
  }
  else if(digitalRead(f4InputPin) == 0) //F4 pressed
  {
    // Undo
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('z');
    delay(200);
  }
  Keyboard.releaseAll();
  Keyboard.end();

}
