const int triggerPin = 11;
const int echoPin = 12;
int led = 3;
int tiempo, distancia;

void setup() {
  Serial.begin(9600);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3,OUTPUT);
  pinMode(4, OUTPUT);


}

void loop() {
  digitalWrite(triggerPin, LOW);
  delay(10);

  digitalWrite(triggerPin, HIGH);
  delay(10);
  digitalWrite(triggerPin, LOW);

  tiempo = pulseIn(echoPin, HIGH);

  distancia = (tiempo*0.034)/2;

  Serial.print(distancia);
  Serial.println();
  delay(100);
  if(distancia < 15){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(2);
  }
  else{
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(2);
  }

}
