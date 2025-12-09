/*Leds verdes (eje x)
const int izquierdaLed = 7;
const int derechaLed = 6;
//leds rojos (eje y)
const int abajoLed = 8;
const int arribaLed = 9;
//led amarillo (botón)
const int botonLed = 5;
*/ 

const int red = 8;
const int green = 9;
const int blue = 10;


//Joystick
int x;
int y;
int sw;
const int pulsador = 2;

void setup(){
  Serial.begin(9600);

  pinMode(izquierdaLed, OUTPUT);
  pinMode(derechaLed, OUTPUT);
  pinMode(abajoLed, OUTPUT);
  pinMode(arribaLed, OUTPUT);
  pinMode(botonLed, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop(){
  x = analogRead(A0);
  y = analogRead(A1);
  sw = digitalRead(pulsador);

//Condiciones eje x.
  if(x >= 0 && x < 480){
    analogWrite(izquierdaLed, map(x, 0, 480, 255, 0));
  }
  else{
    analogWrite(izquierdaLed, LOW);
  }

  if(x > 525 && x <= 1023){
    analogWrite(derechaLed, map(x, 525, 1023, 0, 255));
  }
  else{
    analogWrite(derechaLed, LOW);
  }

//Condiciones eje y.
  if(y >= 0 && y < 480){
    analogWrite(arribaLed, map(y, 0, 480, 255, 0));
  }
  else{
    analogWrite(arribaLed, LOW);
  }
  if(y > 520 && y <= 1023){
    analogWrite(abajoLed, map(y, 520, 1023, 0, 255));
  }
  else{
    analogWrite(abajoLed, LOW);
  }

//Condiciones pulsador.
  if(sw == HIGH){
    digitalWrite(botonLed, HIGH);
  }
  else{
    digitalWrite(botonLed, LOW);
  }

}