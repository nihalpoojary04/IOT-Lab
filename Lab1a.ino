int leds[5]={12,8,7,4,2};
void setup()
{

  for(int i=0;i<5;i++){
  pinMode(leds[i],OUTPUT);
}
}

void loop()
{
  
  
  for(int i=0;i<5;i++){
  digitalWrite(leds[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(int i=5;i>=0;i--){
  digitalWrite(leds[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    
    
}
}

