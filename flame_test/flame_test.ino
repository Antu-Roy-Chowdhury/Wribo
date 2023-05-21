const int buzzerPin = 12;
const int flamePin = A0;
int Flame = HIGH;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);

  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Flame = analogRead(flamePin);
  Serial.println(Flame); 
  if (Flame<500)
  {
    digitalWrite(buzzerPin, HIGH);

  }
  else
  {
    digitalWrite(buzzerPin, LOW);

  }
}