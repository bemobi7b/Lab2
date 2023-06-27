SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value;
void setup()
{
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
}
void loop()
{
  Serial.println(value);
  value = analogRead(A5);
  delay(value);
  digitalWrite(D5, LOW);
  value = analogRead(A5);
  delay(value);
  digitalWrite(D5, HIGH);
}