#include <SoftwareSerial.h>

char TX[8] = "LED ON";

void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}
int x = 0;
void loop()
{
  while(x < 5){
	Serial.write(TX,7);
	digitalWrite(2, HIGH);
	delay(500);
	x++;
	Serial.flush();
  }

digitalWrite(2, LOW);
}