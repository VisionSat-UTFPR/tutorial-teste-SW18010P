 
//Pino ligado a porta A0 do sensor
int porta_a0 = A0;
//Pino ligado a porta D0 do sensor
int porta_D0 = 2;
int leitura_porta_analogica = 0;
int leitura_porta_digital = 0;
//Pino ligado ao LED
int pinoled = 4;
 
void setup()
{
  pinMode(porta_a0, INPUT);
  pinMode(porta_D0, INPUT);
  pinMode(pinoled, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  //Leitura dos dados das portas do sensor
  leitura_porta_analogica = analogRead(porta_a0);
  leitura_porta_digital = digitalRead(porta_D0);
  //Mostra os valores no serial monitor
     Serial.print("Porta Digital : ");
     Serial.print(leitura_porta_digital);
     Serial.print(" Porta Analogica : ");
     Serial.println(leitura_porta_analogica);
 
  //Testa se o sensor foi acionado e liga o led
  if (leitura_porta_digital != 1)
  {
    digitalWrite(pinoled, HIGH);
    delay(10);
    digitalWrite(pinoled, LOW);
  }
  delay(50);
}
