int latchPin=11;
int clockPin=9;
int dataPin=12;
byte myByte=0b00001111;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  delay(1000);

  myByte=myByte/2;
  Serial.println(myByte,BIN);

}
