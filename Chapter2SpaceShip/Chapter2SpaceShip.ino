/*
Arduino UNO Space Ship Example
*/

int switchState = 0;

void setup() {
  pinMode(2, INPUT);  //Button
  pinMode(3, OUTPUT); //Green
  pinMode(4, OUTPUT); //Red
  pinMode(5, OUTPUT); //Red
}

void loop() {

  switchState = digitalRead(2); //Read the state of the button

  if (switchState == LOW) {
    digitalWrite(3, HIGH); //Green
    digitalWrite(4, LOW);  //Red  
    digitalWrite(5, HIGH);  //Red
  }
  else {
    digitalWrite(3, LOW); //Green
    digitalWrite(4, LOW);  //Red
    digitalWrite(5, HIGH);  //Red

    delay(250);

    digitalWrite(4, HIGH);  //Red
    digitalWrite(5, LOW);  //Red

    delay(250);

  }
} //End of else
