int Count = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Count = 0;
  while (Count < 10) {
    Count = (Count + 1);
    digitalWrite(13, LOW);
    if (digitalRead(7) == 1) {
      Count = 0;
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      Serial.println("Pressed button");
    }
    if (digitalRead(7) == 0) {
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      Serial.print("Red LED:");
      Serial.println(Count);
    }
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
}
