int lightPin = A0;
int redl = 7;
int greenl = 5;
int lightVal;
int dt=250;
void setup() {
  // put your setup code here, to run once:

  pinMode(lightPin,INPUT);
  pinMode(redl,OUTPUT);
  pinMode(greenl,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);

  if (lightVal>20){
    digitalWrite(redl,LOW);
    digitalWrite(greenl, HIGH);
  }

  else {
    digitalWrite(redl,HIGH);
    digitalWrite(greenl, LOW);  
  }

}
