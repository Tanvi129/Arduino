int LEDPin=10;
int ButtonPinHigh =12;
int ButtonPinLow =11;
int buttonNewHigh;
int buttonNewLow;
int buttonOldHigh=1;
int buttonOldLow=1;
int dt=100;
int bright=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPin,OUTPUT);
  pinMode(ButtonPinHigh,INPUT);
  pinMode(ButtonPinLow,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNewHigh= digitalRead(ButtonPinHigh);
  buttonNewLow= digitalRead(ButtonPinLow);

  
  Serial.println(bright);
  Serial.println(buttonNewHigh);
  Serial.println(buttonNewLow);
  Serial.println();

  

  if (buttonOldHigh==0 && buttonNewHigh==1){
    bright=bright+25;
    analogWrite(LEDPin,bright);
    
  }
  buttonOldHigh=buttonNewHigh;

  
  if (buttonOldLow==0 && buttonNewLow==1){
    
      bright=bright-25;
    analogWrite(LEDPin,bright);
    
    
  }
   
    
  
  buttonOldLow=buttonNewLow;

  delay(dt);
}
