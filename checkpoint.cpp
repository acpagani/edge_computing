// Definição dos pinos e variáveis
int ledVerde = 3;
int ledAmarelo = 4;
int ledVermelho = 5;
int buzzer = 6;
int ldr = A1;
int tempo = 2000;

// Função para controlar os LEDs
void ledControl(int greenValue, int yellowValue, int redValue) {
    delay(800); // Atraso para uma melhor visualização dos LEDs
    digitalWrite(ledVerde, greenValue); // Define o estado do LED verde
    digitalWrite(ledAmarelo, yellowValue); // Define o estado do LED amarelo
    digitalWrite(ledVermelho, redValue); // Define o estado do LED vermelho
}

void setup() {
    Serial.begin(9600); // Inicializa a comunicação serial com uma taxa de 9600 bps

    // Configura os pinos como saídas (LEDs e buzzer) e entrada (LDR)
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(ldr, INPUT);
}

void loop() {
    int sensorValue = analogRead(ldr); // Lê o valor do sensor LDR
    Serial.println(sensorValue); // Envia o valor lido pela porta serial

    // Verifica o valor lido do sensor LDR e controla os LEDs e o buzzer
    if (sensorValue < 300) {
        // Condição de luz baixa: LED verde ligado, LEDs amarelo e vermelho desligados
        ledControl(HIGH, LOW, LOW);
    } else if (sensorValue > 650) {
        // Condição de luz alta: LED vermelho ligado, buzzer tocando e atraso de 2 segundos
        ledControl(LOW, LOW, HIGH);
        tone(buzzer, 900, tempo); // Toca o buzzer com frequência de 900Hz
        delay(2000); // Atraso de 2 segundos
    } else {
        // Condição de luz moderada: LED amarelo ligado, LEDs verde e vermelho desligados
        ledControl(LOW, HIGH, LOW);
    }
}
