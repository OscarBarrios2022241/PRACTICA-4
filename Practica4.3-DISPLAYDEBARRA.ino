//Oscar Jose Barrios Cotom - 2022241

const int Puls1 = 2;   // Pulsador 1 conectado al pin 2
const int Puls2 = 3;   // Pulsador 2 conectado al pin 3
const int Puls3 = 4;   // Pulsador 3 conectado al pin 4
const int Puls4 = 5;   // Pulsador 4 conectado al pin 5
const int pinesdisplay[] = {6, 7, 8, 9, 10, 11, 12, 13, A0, A1}; //son los pines que se mandan al display de barra


int linea1[] = {0, 1, 0, 1, 1, 1, 1, 0, 0, 0};//Son secuencias que sigue cada pulsador
int linea2[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
int linea3[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
int linea4[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1};

void setup() {
 
  pinMode(Puls1, INPUT_PULLUP);//Se configura los pines como entrada
  pinMode(Puls2, INPUT_PULLUP);
  pinMode(Puls3, INPUT_PULLUP);
  pinMode(Puls4, INPUT_PULLUP);

  for (int i = 0; i < 10; i++) {
    pinMode(pinesdisplay[i], OUTPUT);// Configuramos los pines del display de barra de 10 segmentos como salidas
  }
}

void loop() {

  if (digitalRead(Puls1) == LOW) {//iguala Puls1 a un estado bajo
    mostrarSecuencia(linea1);
  } else if (digitalRead(Puls2) == LOW) {//iguala Puls2 a un estado bajo y else if se usa si
    mostrarSecuencia(linea2);
  } else if (digitalRead(Puls3) == LOW) {//iguala Puls3 a un estado bajo
    mostrarSecuencia(linea3);
  } else if (digitalRead(Puls4) == LOW) {//iguala Puls4 a un estado bajo
    mostrarSecuencia(linea4);
  }
}

void mostrarSecuencia(int secuencia[]) {
  for (int i = 0; i < 10; i++) {
    digitalWrite(pinesdisplay[i], secuencia[i]);
  }
}
