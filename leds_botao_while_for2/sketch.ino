#define leds 4
#define botao 15

int leds1[leds] = {0, 2, 16, 5};
int leds2[leds] = {19, 21, 22, 23};
int i = 0;

void setup() {
  for(int i = 0; i < leds; i++){
    pinMode(leds1[i], OUTPUT);
    pinMode(leds2[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(botao) == HIGH){
    int i = 0;
    while( i < leds){
      digitalWrite(leds1[i], HIGH);
      digitalWrite(leds2[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(leds1[i], LOW);
      digitalWrite(leds2[leds - 1 - i], LOW);
      i++;
    }
  }

    while(i < leds){
      digitalWrite(leds1[i], HIGH);
      digitalWrite(leds2[i], HIGH);
      delay(250);
      digitalWrite(leds1[i], LOW);
      digitalWrite(leds2[i], LOW);
      i++;
    }
 i = 0;
}
