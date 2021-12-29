int triggPin=12;
int echoPin=11;
int pingTravelTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(triggPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggPin,LOW);
  delayMicroseconds(10);
  digitalWrite(triggPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggPin,LOW);

  pingTravelTime=pulseIn(echoPin,HIGH);
  delay(25);
  Serial.println(pingTravelTime);
}
