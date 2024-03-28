int ledVerde = 3;
int ledAmarelo = 4;
int ledVermelho = 5;
int buzzer = 6;
int ldr = A1;
int tempo = 2000;

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
        ledControl(HIGH, LOW, LOW);
    }
    else if (sensorValue > 900) {
        ledControl(LOW, LOW, HIGH);
        tone(buzzer, 900, tempo);
        delay(3000);
    }
    else {
        ledControl(LOW, HIGH, LOW);
    }
}

void ledControl(int value1, int value2, int value3) {
	digitalWrite(ledVerde, value1);
  	digitalWrite(ledAmarelo, value2);
  	digitalWrite(ledVermelho, value3);
}
