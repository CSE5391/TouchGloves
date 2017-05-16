/* Digital Pins */
int ledF1Pin = 12;
int ledF2Pin = 11;
int ledF3Pin = 10;
int ledF4Pin = 9;

/* Glove Pins */
int f1InputPin = 6;
int f2InputPin = 5;
int f3InputPin = 4;
int f4InputPin = 3;

/* Input Val */
int f1Input = 1;
int f2Input = 1;
int f3Input = 1;
int f4Input = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(f1InputPin, INPUT);
  pinMode(f2InputPin, INPUT);
  pinMode(f3InputPin, INPUT);
  pinMode(f4InputPin, INPUT);

  digitalWrite(f1InputPin, HIGH);
  digitalWrite(f2InputPin, HIGH);
  digitalWrite(f3InputPin, HIGH);
  digitalWrite(f4InputPin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  f1Input = digitalRead(f1InputPin);
  f2Input = digitalRead(f2InputPin);
  f3Input = digitalRead(f3InputPin);
  f4Input = digitalRead(f4InputPin);
  
  Serial.println(f1Input);
  Serial.println(f2Input);
  Serial.println(f3Input);
  Serial.println(f4Input);
  Serial.println();

  if (f1Input == 0)
    digitalWrite(ledF1Pin, HIGH);
  else
    digitalWrite(ledF1Pin, LOW);

  if (f2Input == 0)
    digitalWrite(ledF2Pin, HIGH);
  else
    digitalWrite(ledF2Pin, LOW);

  if (f3Input == 0)
    digitalWrite(ledF3Pin, HIGH);
  else
    digitalWrite(ledF3Pin, LOW);

  if (f4Input == 0)
    digitalWrite(ledF4Pin, HIGH);
  else
    digitalWrite(ledF4Pin, LOW);

}
