#define LED2 6
#define LED1 2
#define SW1 4
#define SW2 3
#define Q1 3

void setup() 
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT); 
  pinMode(5, OUTPUT);
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
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  }
  else if (digitalRead(4) == HIGH && digitalRead(3)== LOW) {
    analogWrite(5, EmanuelValue1);
    digitalWrite(LED2, LOW);
    digitalWrite(LED1, HIGH);
  }
  else if (digitalRead(4) == LOW && digitalRead(3)== HIGH) {
    digitalWrite(5, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  }
  else if (digitalRead(4) == LOW && digitalRead(3)== LOW) {
    digitalWrite(5, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED1, HIGH);
  }
  delay(100);
}
