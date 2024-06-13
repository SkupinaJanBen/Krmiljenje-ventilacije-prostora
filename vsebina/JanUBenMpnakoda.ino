#define LED2 6
#define LED1 2
#define 

void setup() 
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(LEDAvto, OUTPUT);
  pinMode(LEDEmanuel, OUTPUT); 
}

void loop() 
{
  int EmanuelValue = analogRead(A1);
  EmanuelValue = map(EmanuelValue, 0, 1023, 249, 1023);
  int EmanuelValue1 = EmanuelValue / 4;
  int AvtoValue = analogRead(A0);
  AvtoValue = map(AvtoValue, 0, 1023, 144, 1023);
  int AvtoValue1 = AvtoValue / 4;
  Serial.println(AvtoValue1);
  
  
  if (digitalRead(4)== HIGH && digitalRead(3)== HIGH) {
    analogWrite(5, AvtoValue1);
    digitalWrite(LEDAvto, HIGH);
    digitalWrite(LEDEmanuel, LOW);
  }
  else if (digitalRead(4) == HIGH && digitalRead(3)== LOW) {
    analogWrite(5, EmanuelValue1);
    digitalWrite(LEDAvto, LOW);
    digitalWrite(LEDEmanuel, HIGH);
  }
  else if (digitalRead(4) == LOW && digitalRead(3)== HIGH) {
    digitalWrite(5, LOW);
    digitalWrite(LEDAvto, HIGH);
    digitalWrite(LEDEmanuel, LOW);
  }
  else if (digitalRead(4) == LOW && digitalRead(3)== LOW) {
    digitalWrite(5, LOW);
    digitalWrite(LEDAvto, LOW);
    digitalWrite(LEDEmanuel, HIGH);
  }
  delay(100);
}
