const int pinoledred = 22;
const int pinoledblue = 21;
const int piscada = 5;

void setup() {
  pinMode(pinoledred, OUTPUT);

    for (int i = 0; i < piscada; i++){
      digitalWrite(pinoledred, HIGH);
      delay(500);
      digitalWrite(pinoledred, LOW);
      delay(500);
    }
}

void loop() {

}
