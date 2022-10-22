#include <SoftwareSerial.h>

char RX[8];

void setup()
{
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
	{
	Serial.println("GOT IT\n");
  	Serial.readBytes(RX,7);
	digitalWrite(12, HIGH);
    Serial.flush();
  	}
  else
	{
  		digitalWrite(12,LOW);
	}
}