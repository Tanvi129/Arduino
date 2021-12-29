int analogPin=A2;
int data=0;
char userInput;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()>0){
    userInput=Serial.read();
    if (userInput=='g'){
      data=analogRead(analogPin);
      Serial.println(data);     
    }
    
    
  }

 

}
