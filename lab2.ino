int status=0;
void setup(){
  pinMode(9,INPUT);
  pinMode(2,OUTPUT);
}
void loop(){
  status=digitalRead(9);
  if(status==HIGH){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
}
