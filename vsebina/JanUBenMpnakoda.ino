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
  int RP1 = analogRead(A1);
  RP1 = map(EmanuelValue, 0, 1023, 249, 1023);
  int EmanuelValue = RP1 / 4;
  int AvtoValue = analogRead(A0);
  AvtoValue = map(AvtoValue, 0, 1023, 144, 1023);
  int AvtoValue = AvtoValue / 4;
  Serial.println(AvtoValue);
  
  
  if (digitalRead(4)== HIGH && digitalRead(3)== HIGH) {
    analogWrite(5, AvtoValue);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  }
  else if (digitalRead(4) == HIGH && digitalRead(3)== LOW) {
    analogWrite(5, EmanuelValue);
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
