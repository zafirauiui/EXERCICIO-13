/*
* En esta práctica imos incorporar un pulsador de maneira 
* que inhabilite o programa orixinal.É decir,cando accionemos
* o pulsador, o programa debe parar (mentras accionamos),
* cando soltemos o pulsador o programa segue o fluxo normal.
*
* Autor: Dolores Patiño
* Data: Enero 2025
*/

#define L_VERDE   13
#define L_AMARELO 12
#define RELE      11
#define  PULSADOR 10


int tempo = 3000;
bool pulsador = 0;

void setup()
{
  pinMode(L_VERDE, OUTPUT);
  pinMode(L_AMARELO, OUTPUT);
  pinMode(RELE, OUTPUT);
  pinMode(PULSADOR, INPUT);
}
void loop()
{
pulsador = digitalRead(PULSADOR);
  if(pulsador == false){
leds();// chamada a función leds
  }
  else{
    leds_off();
  }
}
//FUNCIONES ADICIONALES


//Función que apage todos os LEDS (salidas) á vez
void leds_off() {
  digitalWrite(L_VERDE, LOW);
  digitalWrite(L_AMARELO, LOW);
  digitalWrite(RELE, LOW);
}
//FUNCIÓN PRINCIPAL QUE ENCENDE E APAGA OS LEDS
void leds(){
  digitalWrite(L_VERDE, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(L_VERDE, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(L_AMARELO, HIGH);
  digitalWrite(RELE, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(	L_VERDE, LOW);
  digitalWrite(RELE, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
}

