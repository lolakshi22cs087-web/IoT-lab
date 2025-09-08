void setup()
{
  pinMode(A0,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val=analogRead(A0);
   if (val >=800) {
    Serial.println("Dry");
    digitalWrite(13,HIGH);
  } else if (val > 600 && val<800) {
    Serial.println("Medium");
    digitalWrite(13,LOW);
  } else {
    Serial.println("Wet");
    digitalWrite(13,LOW);
  }
  delay(500);
}
