// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600); 
}

void loop()
{
  float val=analogRead(A0);
  Serial.println(val);
  if(val>100){
    digitalWrite(5,HIGH);
  }
    else {
    digitalWrite(5,LOW);
    }
 if(val>100){
    digitalWrite(7,HIGH);
  }
  else {
    digitalWrite(7,LOW);
}
}