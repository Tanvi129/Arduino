int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LEDs=0x0;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  LEDs+=1;
  Serial.print("Decimal: ");
  Serial.print(LEDs,DEC);
  Serial.print(" Hex: ");
  Serial.print("  ");
  Serial.print(LEDs,HEX);
  Serial.print(" Binary: ");
  Serial.print("  ");
  Serial.println(LEDs,BIN);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  delay(dt);

}
