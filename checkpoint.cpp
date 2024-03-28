int ledVerde = 3;
int ledAmarelo = 4;
int ledVermelho = 5;
int buzzer = 6;
int ldr = A1;
int tempo = 500;

void setup() {
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVermelho, OUTPUT);

    pinMode(buzzer, OUTPUT);

    pinMode(ldr, INPUT);
}

void loop() {
    int sensorValue = analogRead(ldr);

    if (sensorValue < 300) {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
    }
    else if (sensorValue > 900) {
        digitalWrite(ledVermelho, HIGH);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        tone(buzzer, 900, tempo);
        delay(500);
    }
    else {
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledVermelho, LOW);
    }
}
