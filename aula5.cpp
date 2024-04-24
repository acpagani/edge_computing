#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
int ldr = A2;
int pot_umidade = A0;
int pot_temp = A1;


void setup()
{
  lcd.begin(16, 2);
  pinMode(ldr, INPUT);
  pinMode(pot_umidade, INPUT);
  pinMode(pot_temp, INPUT);
  Serial.begin(9600);
}

void loop()
{
  lcd.setCursor(0, 0);
  for (int i = 0; i < 10; i++){
    lcd.print("Olá, Mundo!");
  	Serial.println("Olá mundo");
    delay(1000);
  }
}
