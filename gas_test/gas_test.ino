const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin
const int buzzerPin = 12;

void setup()
{
     pinMode(gasPin, INPUT);
   pinMode(buzzerPin, OUTPUT);
	Serial.begin(9600); //Initialize serial port - 9600 bps
}

void loop()
{
	Serial.println(analogRead(gasPin));
  int gas=analogRead(gasPin);
  if (gas<500)
  {
    digitalWrite(buzzerPin, HIGH);

  }
  else
  {
    digitalWrite(buzzerPin, LOW);

  }
	delay(1000); // Print value every 1 sec.
}
