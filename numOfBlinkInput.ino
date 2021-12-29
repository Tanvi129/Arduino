int numblink;
String msg="Enter the number of blinks:";
String msg2="The number entered is ";
int j=1;
int dt=200;
int rled=13;
void setup()
{
  Serial.begin(9600);
  pinMode(rled, OUTPUT);
}

void loop()
{
  Serial.println(msg);
  while (Serial.available()==0);
  {
  }
  numblink=Serial.parseInt();
  Serial.print(msg2);
  Serial.println(numblink);
  for(j=1;j<=numblink;j+=1)
  { 
    digitalWrite(rled,HIGH);
    delay(dt);
    digitalWrite(rled,LOW);
    delay(dt);
  }
}