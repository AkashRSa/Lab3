SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup()
{

  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  Serial.begin(9600);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{ // D5 is blue, D6 is green, D7 is red
  analogWrite(D7, 0);
  analogWrite(D6, 255);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 0);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 200);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 0);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 0);
  analogWrite(D5, 0);
  delay(1000);
}