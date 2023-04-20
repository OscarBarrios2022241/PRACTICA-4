//Oscar Jose Barrios Cotom - 2022241

int puls1 = 2;//Variables y se escoge el pin
int puls2 = 3;
int buzzer = 9;


int melodia1[] = {//melodia 1
330, 440, 440, 494, 494, 523, 523, 587, 587, 659, 659, 698, 698, 784, 784, 880, 880 //Frecuencias para el buzzer
};
  
int melodia2[] = {//melodia 2
 659, 659, 0, 659, 0, 523, 659, 0, 784, 392, 0, 0, 523, 0, 392, 0,//Frecuencias para el buzzer
 330, 0, 440, 0, 494, 0, 466, 0, 440, 0, 392, 0, 659, 0, 784, 0,
 880, 0, 698, 0, 784, 0, 659, 0, 523, 0, 587, 0, 494, 0, 523, 0,
 0, 0, 0, 659, 0, 784, 0, 880, 0, 698, 0, 784, 0, 659, 0, 523,
 0, 587, 0, 494, 0, 523, 0, 0, 0, 0, 494, 0, 523, 0, 587, 0,
 494, 0, 523, 0, 0, 0, 659, 0};

int duracion = 200;//lo qeu dura cada nota

void setup() {

  pinMode(puls1, INPUT);//se configuran como entrada o salida
  pinMode(puls2, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  
  if (digitalRead(puls1) == HIGH) {//Comprobar si se ha pulsado el primer pulsador
    //Reproducir la primera melodía
    for (int i = 0; i < sizeof(melodia1) / sizeof(melodia1[0]); i++) {
      tone(buzzer, melodia1[i], duracion);//el buzzer va a reproducir la melodia si se presiona el boton 1
      delay(duracion);//el delay sera la duracion de cada nota
    }
    // Pausar la reproducción durante 1 segundo
    delay(1000);
  }
    
    else if (digitalRead(puls2) == HIGH) {// Comprobar si se ha pulsado el segundo pulsador
    // Reproducir la segunda melodía
    for (int i = 0; i < sizeof(melodia2) / sizeof(melodia2[0]); i++) {
      tone(buzzer, melodia2[i], duracion);//el buzzer va a reproducir la melodia si se presiona el boton 2
      delay(duracion);//el delay sera la duracion de cada nota
    }
    
    delay(1000);//tiempo
  }
}
