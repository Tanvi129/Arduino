int redl=7;
int greenl=5;
int bluel=5;
int yellowl=3;
int redblink=4;
int yellowblink=5;
int blueblink=4;
int greenblink=4;
int j;
int dt=500;
void setup(){
  pinMode(redl,OUTPUT);
  pinMode(greenl,OUTPUT);
  pinMode(bluel,OUTPUT);
  pinMode(yellowl,OUTPUT);}
void loop(){
  
  for(j=1;j<=redblink;j=j+1)
  {
    digitalWrite(redl,HIGH);
    delay(dt);
    digitalWrite(redl,LOW);
    delay(dt);
  }
  
  
  
  
  
  for(j=1;j<=blueblink;j=j+1)
  {
    digitalWrite(bluel,HIGH);
    delay(dt);
    digitalWrite(bluel,LOW);
    delay(250);
  }
  
  for(j=1;j<=yellowblink;j=j+1)
  {
    digitalWrite(yellowl,HIGH);
    delay(dt);
    digitalWrite(yellowl,LOW);
    delay(dt);
  }

}
