// Código para leer señal de sensores de luz reflectivos

const int negro = 2;
const int blanco = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);  // Fija pin A0 como entrada 
  Serial.begin(9600);  // inicializa comunicación serial entre placa y compu a 9600 bits por seg:
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensor_color = analogRead(A0);  // Lee entrada de sensor
  float voltaje = sensor_color*5/1023;  // convierte valor de 10 bits a voltaje
  if (voltaje >= blanco){
    Serial.print("blanco: ");  // escribe valor en puerto serial (consola)
    Serial.println(voltaje);  // escribe valor en puerto serial (consola)
  }
  else if (voltaje < negro){
    Serial.println("negro: ");  // escribe valor en puerto serial (consola)
    Serial.println(voltaje);  // escribe valor en puerto serial (consola)
  }
  else Serial.print("caca:");  // escribe valor en puerto serial (consola)
  Serial.println(voltaje);  // escribe valor en puerto serial (consola)
  delay(50);               // esperar unos 200 miliseg
}
