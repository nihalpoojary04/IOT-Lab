// C++ code
//
int value=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  value=analogRead(A0);
    Serial.print(value);
  if(value<600){
    digitalWrite(13,LOW);
    Serial.println("WET");
}
  else if(value>600 && value<800){
    Serial.println("MODERATE");
  }
  else if(value>800){
    digitalWrite(13,HIGH);
    Serial.println("DRY");
  }
}
