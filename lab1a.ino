// C++ code
// 
int led[]={2,3,4,5,6,7};
void setup()
{
  for(int i=0;i<6;i++){
  pinMode(led[i], OUTPUT);
}
}
void loop()
{
  for(int i=6;i>0;i--){
  digitalWrite(led[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}