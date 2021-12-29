int readval;
float v2;
int dtime=500;
int readPin=A2;
void setup()
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  readval=analogRead(readPin);
  v2=(5./1023.)*readval;
  Serial.println(v2);
  delay(dtime);
    
}