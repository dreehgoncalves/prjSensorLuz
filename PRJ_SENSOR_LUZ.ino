#define LDR A5
#define LED 9

void setup()
{
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(LDR);
  Serial.print("valor: ");
  Serial.println(valor);
  if (valor > 600){
    digitalWrite(LED,HIGH);
  }
  else {
    digitalWrite(LED,LOW);
  }
  delay(100);
  
}
