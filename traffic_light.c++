#define carroVermelho 13
#define carroAmarelo 12
#define carroVerde 11

#define pedestreVermelho 10
#define pedestreVerde 9

#define botaoPedestre 2


void setup() {
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pedestreVermelho, OUTPUT);
  pinMode(pedestreVerde, OUTPUT);
  

  pinMode(botaoPedestre, INPUT_PULLUP);
}

void loop() {
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, LOW);
  
  digitalWrite(pedestreVerde, LOW);
  digitalWrite(pedestreVermelho, HIGH);

  while (digitalRead(botaoPedestre) == HIGH) {
    delay(10); 
  }

  
  delay(2000); 

  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  delay(3000);

  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  
  digitalWrite(pedestreVermelho, LOW);
  digitalWrite(pedestreVerde, HIGH); 
  delay(7000);
 
  digitalWrite(pedestreVerde, LOW);
  
  for (int i = 0; i < 6; i++) {
    digitalWrite(pedestreVermelho, LOW);
    delay(400);
    digitalWrite(pedestreVermelho, HIGH);
    delay(400);
  }
  
  digitalWrite(pedestreVerde, LOW);
  digitalWrite(pedestreVermelho, HIGH);
  delay(2000); 
  
}
