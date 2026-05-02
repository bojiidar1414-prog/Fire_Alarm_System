int sensorPin = A0;
int redLed = 6;
int greenLed = 7;
int buzzer = 8;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int value = analogRead(sensorPin);

  float voltage = value * 5.0 / 1023.0;
  float temp = (voltage - 0.5) * 100.0;

  if(temp > 50)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
  }

  delay(500);
}
