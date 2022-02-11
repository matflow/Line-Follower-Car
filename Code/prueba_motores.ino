// Prueba para motores 
int EN1 = 4;
int IN1 = 6;
int IN2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(EN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // para que motor gire en sentido "positivo"
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // variar velocidad de motor
  digitalWrite(EN1, HIGH);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
 
  


}
