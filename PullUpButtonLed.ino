int ledPin = 8;
int ButtonPin = 12;
int ButtonRead;
int dt=200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ButtonPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  ButtonRead = digitalRead(ButtonPin);
  Serial.println(ButtonRead);
  delay(dt);

  if (ButtonRead==1){
    digitalWrite(ledPin,LOW);
   }

  if (ButtonRead==0){
    digitalWrite(ledPin,HIGH);
   }
  

}
