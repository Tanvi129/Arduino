int triggPin=12;
int echoPin=11;
int pingTravelTime;
int rled=5;
int yled=6;
int gled=7;
float distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(triggPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(yled,OUTPUT);
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
  if (pingTravelTime<=200){
    digitalWrite(rled,HIGH);
    digitalWrite(yled,LOW);
    digitalWrite(gled,LOW);
    Serial.println("red");
  }
  if (pingTravelTime>200 and pingTravelTime<500 ){
    digitalWrite(rled,LOW);
    digitalWrite(yled,HIGH);
    digitalWrite(gled,LOW);
    Serial.println("yellow");
  }
  if (pingTravelTime>=500){
    digitalWrite(rled,LOW);
    digitalWrite(yled,LOW);
    digitalWrite(gled,HIGH);
    Serial.println("green");
  }
  distance=(33000*pingTravelTime*0.000001)/2.0;
  Serial.print("The distance of object is : ");
  Serial.println(distance);
  Serial.println();
  delay(100);
}
