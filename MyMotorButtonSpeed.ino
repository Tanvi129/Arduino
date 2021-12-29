int speedPin=5;
int dir1=4;
int dir2=3;
int mspeed=0;
int buttonPinLow=6;
int buttonPinHigh=7;
int ValPinLow=6;
int ValPinHigh=7;
int bold=1;
int bnew;
int state=0;
int mtrack=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);
  pinMode(buttonPinLow,INPUT);
  digitalWrite(buttonPinLow,HIGH);
  pinMode(buttonPinHigh,INPUT);
  digitalWrite(buttonPinHigh,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  ValPinLow=digitalRead(buttonPinLow);
  ValPinHigh=digitalRead(buttonPinHigh);

  if (mtrack>0){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
  }

  else {
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
  }
  if (ValPinLow==0){
    mtrack=mtrack-10;
    if (mtrack>=0){
      mspeed=mtrack;
    }

    if (mtrack<0){
      mspeed=mtrack*(-1);
    }

    if (mtrack<-255){
      mtrack=-255;
      mspeed=255;
    }
    analogWrite(speedPin,mspeed);
  }

  if (ValPinHigh==0){
    mtrack=mtrack+10;
    if (mtrack>=0){
      mspeed=mtrack;
    }

    if (mtrack<0){
      mspeed=mtrack*(-1);
    }

    if (mtrack>255){
      mtrack=255;
      mspeed=255;
    }
    analogWrite(speedPin,mspeed);
  }

  Serial.print("ButtonPinLow: ");
  Serial.print(ValPinLow);
  Serial.print(" ButtonPinHigh: ");
  Serial.print(ValPinHigh);
  Serial.print(" mtrack: ");
  Serial.print(mtrack);
  Serial.print(" mspeed: ");
  Serial.println(mspeed);

}
