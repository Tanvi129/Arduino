int Xpin=A0;
int Ypin=A1;
int Spin=7;
int Xval;
int Yval;
int Sval;
int dt=200;
int speedPin=5;
int dir1=4;
int dir2=3;
float mspeed;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  digitalWrite(Spin,HIGH);
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  Sval=digitalRead(Spin);
  delay(dt);
  Serial.print(" X value: ");
  Serial.print(Xval);
  Serial.print(" Y value: ");
  Serial.print(Yval);
  Serial.print(" Switch value: ");
  Serial.println(Sval);

  if (Xval>=500 and Xval<=520){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    analogWrite(speedPin,0);
  }

  if (Xval<500){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    mspeed=(-225./500.)*(Xval-500);
    Serial.println(mspeed);
    analogWrite(speedPin,mspeed);
  }

  if (Xval>520){
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    mspeed=(225./503.)*(Xval-520);
    Serial.println(mspeed);
    analogWrite(speedPin,mspeed);
  }

}
