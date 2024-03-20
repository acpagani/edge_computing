// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, LOW);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  delay(300); 
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(6, HIGH);
  digitalWrite(8, LOW);
  delay(300);
}
