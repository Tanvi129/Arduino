int latchPin=11;
int clockPin=9;
int dataPin=12;
byte myByte=0b01100110;
byte reverseByte;
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
  reverseByte=0XFF-myByte;
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  delay(1000);

  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,reverseByte);
  digitalWrite(latchPin,HIGH);
  delay(1000);

}
