int readval;
float v2;
int dtime=500;
int readPin=A2;
int rled=1;
int yled=2;
int gled=3;
void setup()
{
  pinMode(readPin,INPUT);
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(yled,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  readval=analogRead(readPin);
  v2=(5./1023.)*readval;
  Serial.print("The Potentiometer Voltage is: ");
  Serial.println(v2);
  
  if (v2>4.0){
    digitalWrite(rled,HIGH);
    digitalWrite(yled,LOW);
    digitalWrite(gled,LOW);
  }
    
  if (v2<=4.0 and v2>=3.0){
    digitalWrite(rled,LOW);
    digitalWrite(yled,HIGH);
    digitalWrite(gled,LOW);
  }
  
  if (v2<3.0){
    digitalWrite(rled,LOW);
    digitalWrite(yled,LOW);
    digitalWrite(gled,HIGH);
  }
    
  delay(dtime);
    
}