int rled=6;
int dt=100;
int potentvolt;
int blink=4;
int j=1;
int pontentread=A1;

void setup(){
  pinMode(rled,OUTPUT);
  pinMode(pontentread,INPUT);
}

void loop()
{
  potentvolt=analogRead(pontentread);
  Serial.println(potentvolt);
  while(potentvolt>700)
  {
    digitalWrite(rled,HIGH);
     delay(dt);  
    potentvolt=analogRead(pontentread);
    Serial.println(potentvolt);
  }
  
  digitalWrite(rled,LOW);
  delay(dt);
  
}