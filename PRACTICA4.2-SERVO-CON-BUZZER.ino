//Oscar Jose Barrios Cotom - 2022241

#include <Servo.h>//Libreria para usar el servo

Servo myservo;

int pos = 0;//Variables
int pinBoton1 = 2;//Pines a los que se conecta el servo
int pinBoton2 = 3;
int pinBoton3 = 4;
int pinBoton4 = 5;
int pinBoton5 = 6;
int pinBuzzer = 7;

void setup() {
  myservo.attach(9); //El servo se conecta al pin 9
  pinMode(pinBoton1, INPUT_PULLUP);//Se selecciona si el pin es de ENTRADA O SALIDA
  pinMode(pinBoton2, INPUT_PULLUP);
  pinMode(pinBoton3, INPUT_PULLUP);
  pinMode(pinBoton4, INPUT_PULLUP);
  pinMode(pinBoton5, INPUT_PULLUP);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  if(digitalRead(pinBoton1) == LOW) { // Si se presiona el botón 1 va a girar a 0 grados y sonara eñ buzzer
    myservo.write(0);//Se coloca a que grados va a girar el servo
    tone(pinBuzzer, 1000, 200);//Se selecciona la frecuencia en la que sonara el buzzer
  }
  else if(digitalRead(pinBoton2) == LOW) { // Si se presiona el botón va a girar a 45 grados
    myservo.write(45);//Se coloca a que grados va a girar el servo
    noTone(pinBuzzer);//La funcion notone permite que el buzzer no suene
  }20202
  else if(digitalRead(pinBoton3) == LOW) { // Si se presiona el botón va a girar a 90 grados
    myservo.write(90);//Se coloca a que grados va a girar el servo
    noTone(pinBuzzer);//La funcion notone permite que el buzzer no suene
  }
  else if(digitalRead(pinBoton4) == LOW) { // Si se presiona el botón va a girar a 135 grados
    myservo.write(135);//Se coloca a que grados va a girar el servo
    noTone(pinBuzzer);//La funcion notone permite que el buzzer no suene
  }
  else if(digitalRead(pinBoton5) == LOW) { // Si se presiona el botón 5 va a girar a 180 grados
    myservo.write(180);//Se coloca a que grados va a girar el servo
    noTone(pinBuzzer);//La funcion notone permite que el buzzer no suene
  }
  delay(10); //Tiempo
}