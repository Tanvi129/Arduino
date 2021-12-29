int redl=13;
int greenl=12;
int bluel=11;
int yellowl=8;
void setup(){
  pinMode(redl,OUTPUT);
  pinMode(greenl,OUTPUT);
  pinMode(bluel,OUTPUT);
  pinMode(yellowl,OUTPUT);}
void loop(){
  digitalWrite(redl,LOW);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,LOW);
  delay(1000);//0
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,HIGH);
  delay(1000);//1
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,LOW);
  delay(1000);//2
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,HIGH);
  delay(1000);//3
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,LOW);
  delay(1000);//4
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,HIGH);
  delay(1000);//5
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,LOW);
  delay(1000);//6
  
  digitalWrite(redl,LOW);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,HIGH);
  delay(1000);//7
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,LOW);
  delay(1000);//8
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,HIGH);
  delay(1000);//9
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,LOW);
  delay(1000);//1O
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,LOW);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,HIGH);
  delay(1000);//11
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,LOW);
  delay(1000);//12
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,LOW);
  digitalWrite(yellowl,HIGH);
  delay(1000);//13
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,LOW);
  delay(1000);//14
  
  digitalWrite(redl,HIGH);
  digitalWrite(greenl,HIGH);
  digitalWrite(bluel,HIGH);
  digitalWrite(yellowl,HIGH);
  delay(1000);}