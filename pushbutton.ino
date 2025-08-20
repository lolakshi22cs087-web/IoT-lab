int buttonState = 1;

void setup()
{
  pinMode(9, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(9);
  if (buttonState == 1) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3 , LOW);
  }
}