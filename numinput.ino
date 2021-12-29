int num;
String msg="Enter the number :";
String msg2="The number entered is ";

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  Serial.println(msg);
  while (Serial.available()==0);
  {
  }
  num=Serial.parseInt();
  Serial.print(msg2);
  Serial.println(num);
}