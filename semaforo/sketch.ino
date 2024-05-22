const int ledPins1[] = {23, 22};
const int ledPins2[] = {21, 19, 18};
const int numLeds = sizeof(ledPins2) / sizeof(ledPins2[0]);
const int espera = 300;

void setup() {
  pinMode(ledPins1[0], OUTPUT);
  digitalWrite(ledPins1[0], HIGH);
  delay(espera);
  pinMode(ledPins1[1], OUTPUT);
  digitalWrite(ledPins1[1], HIGH);

  delay(espera);
  for(int i = 0; i < numLeds; i++){
    pinMode(ledPins2[i], OUTPUT);
  }

  for(int i = 0; i < numLeds; i++){
    digitalWrite(ledPins2[i], HIGH);
    delay(espera);
    digitalWrite(ledPins2[i], LOW);
    delay(espera);
  }

  delay(espera);
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
  delay(espera);

  pinMode(ledPins1[1], OUTPUT);
  digitalWrite(ledPins1[1], LOW);
  delay(espera);
  pinMode(ledPins1[0], OUTPUT);
  digitalWrite(ledPins1[0], LOW);
}

void loop() {
  
}