int speedPin=5;
int dir1=4;
int dir2=3;
int mspeed=100;
int buttonPin=2;
int bold=1;
int bnew;
int state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mspeed);

  delay(2000);
  analogWrite(speedPin,0);

  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mspeed);

  delay(2000);
  analogWrite(speedPin,0);
 

}
