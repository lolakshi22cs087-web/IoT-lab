int ldr1=0;
void setup() {
  // put your setup code here, to run once:
   pinMode(2,INPUT);
   pinMode(5,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldr1=digitalRead(2);
  Serial.print("Intensity:\n");
  Serial.print(ldr1);
  if(ldr1==HIGH){
   digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
   
  }
}