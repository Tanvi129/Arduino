int j;
int rled=7;
int gled=5;
int bled=11;
int yled=3;
int dt=250;
String ledColor;
String msg1="Which led you want to light up? (red,green,blue,yellow) :";
void setup()
{
  Serial.begin(9600);
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(bled,OUTPUT);
  pinMode(yled,OUTPUT);
}

void loop()
{
  Serial.println(msg1);
  while (Serial.available()==0)
  {}
  ledColor=Serial.readString();
  
  if (ledColor=="red")
  { 
    digitalWrite(rled,HIGH);
    digitalWrite(gled,LOW);
    digitalWrite(bled,LOW);
    digitalWrite(yled,LOW);
  }
    
  if (ledColor=="red")
  { 
    digitalWrite(rled,HIGH);
    digitalWrite(gled,LOW);
    digitalWrite(bled,LOW);
    digitalWrite(yled,LOW);
  }
  
  if (ledColor=="green")
  { 
    digitalWrite(rled,LOW);
    digitalWrite(gled,HIGH);
    digitalWrite(bled,LOW);
    digitalWrite(yled,LOW);
  }
  
  if (ledColor=="blue")
  { 
    digitalWrite(rled,LOW);
    digitalWrite(gled,LOW);
    digitalWrite(bled,HIGH);
    digitalWrite(yled,LOW);
  }
  
  if (ledColor=="yellow")
  { 
    digitalWrite(rled,LOW);
    digitalWrite(gled,LOW);
    digitalWrite(bled,LOW);
    digitalWrite(yled,HIGH);
  }
}
