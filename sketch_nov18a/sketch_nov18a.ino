const int Trigger = 11;   //Pin digital 2 para el Trigger del sensor
const int Echo = 12;   //Pin digital 3 para el Echo del sensor
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT); //enciende el pin número 13
pinMode(4,OUTPUT); //enciende el pin número 13
pinMode(5,OUTPUT); //enciende el pin número 13
  Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  //digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}

void loop() {
  long t;
  long d;
/*digitalWrite(3,HIGH);
digitalWrite(4,HIGH);// encendemos
digitalWrite(5,HIGH);// encendemos
delay(100);

digitalWrite(Trigger, HIGH);
delayMicroseconds(10);          //Enviamos un pulso de 10us
digitalWrite(Trigger, LOW);*/
 

/*digitalWrite(3,LOW);// apagamos
digitalWrite(4,LOW);// apagamos
digitalWrite(5,LOW);// apagamos
delay(100); // en 1 segundo va a tardar para pasar de encendido a apagado*/ 
digitalWrite(Trigger, LOW);
delay(2);
digitalWrite(Trigger,HIGH);
delay(10);
digitalWrite(Trigger, LOW);
t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
d = (t * 0,0034)/2;
Serial.print(d);
Serial.println();
delay(100);




} 
