int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LED1s=0b01010101;
byte LED2s=0b10101010;
int dt=250;
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
  shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(latchPin,HIGH);

  delay(dt);

  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LED2s);
  digitalWrite(latchPin,HIGH);

  delay(dt);

}
