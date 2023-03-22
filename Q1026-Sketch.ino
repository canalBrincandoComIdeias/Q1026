#define pinSensor A0
#define pinRele   7

int estadoSensor;

void setup() {
  pinMode(pinSensor, INPUT);
  pinMode(pinRele, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  estadoSensor = analogRead(pinSensor);

  if (estadoSensor > 785) {
    digitalWrite(pinRele, HIGH);
    delay(1000);
  } 
  
  if (estadoSensor < 765) {
    digitalWrite(pinRele, LOW);
    delay(1000);
  }

  Serial.println(estadoSensor);
}
