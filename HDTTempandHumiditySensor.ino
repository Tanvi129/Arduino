#include <DHT.h>
#define Type DHT11
int sensePin=2;
DHT HT(sensePin,Type);
float humidity;
float TempC;
float TempF;
int setTime=500;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(setTime);

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity=HT.readHumidity();
  TempC=HT.readTemperature();
  TempF=HT.readTemperature(true);
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" Temperature C: ");
  Serial.print(TempC);
  Serial.print(" C ");
  Serial.print(" Temperature F: ");
  Serial.print(TempF);
  Serial.println(" F ");
  delay(dt);

}
