#include <DigiKeyboard.h>
void setup() {
  DigiKeyboard.sendKeyStroke(0); 
  DigiKeyboard.print("user.name");// Please your username.
  DigiKeyboard.delay(10);
  DigiKeyboard.print("\t");//why the \t needs to have quotes I do not no but it works.
  DigiKeyboard.delay(10);
  DigiKeyboard.println("password");// please your password. 
}
void loop() {
  
 
}
