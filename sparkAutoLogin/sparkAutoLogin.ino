#include <DigiKeyboard.h>
int ledPin = 1;
void setup() {
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin, HIGH); 
  DigiKeyboard.sendKeyStroke(0); 
  DigiKeyboard.print("user.name");// Please your username.
  DigiKeyboard.delay(10); 
  DigiKeyboard.print("\t");//why the \t needs to have quotes I don't no but it works.
  DigiKeyboard.delay(10); 
  DigiKeyboard.println("password");// please your password. 
  digitalWrite(ledPin, LOW);
  DigiKeyboard.delay(850);
  DigiKeyboard.println();
  digitalWrite(ledPin, HIGH);
  delay(3000);
  
}
void loop() {
  delay(375);
  digitalWrite(ledPin, LOW);
  delay(375);
  digitalWrite(ledPin, HIGH);

}
 
/*
 
*/
