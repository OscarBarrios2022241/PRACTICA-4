//Oscar Jose Barrios Cotom - 2022241

const int foto = A1;//Pin que ira conectado entre la fotorresistencia
const int modulorele = 2;//Pin ira conectado al modulo rele

#define out() pinMode(modulorele, OUTPUT)//Variables
#define in() pinMode(foto,INPUT)//Variables
#define encendido() digitalWrite(modulorele,HIGH)//Variables
#define apagado() digitalWrite(modulorele,LOW)//Variables
#define tiempo() delay(1000)//Tiempo

void setup() {

 Serial.begin(9600);//Activa el monitor serial

  out(); 
  in(); }


 void loop() {

  int valor_foto = analogRead(foto);
    Serial.println(valor_foto);//Se escriben los datos en el monitor serial gracias a la variable valor_foto

  if(valor_foto < 800){
  apagado(); }

  else{
  encendido(); }

  tiempo();

}