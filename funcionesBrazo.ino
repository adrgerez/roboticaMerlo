#include <Servo.h>

Servo base;  //Base - Pin : 8 -- movimiento : 0 - 180
Servo brazo;  //Brazo(Parte gris) - Pin : 6 -- movimiento : 0 - 180
Servo antebrazo;  //Antebrazo(Parte verde) - Pin : 4 -- movimiento : 60 - 150
Servo pinza; //Pinza - Pin : 2 -- movimiento : 120 - 180

void setup() {

 base.attach(8,544,2400); // parametros del moviento del servo
 brazo.attach(6,544,2400);
 antebrazo.attach(4,544,2400);
 pinza.attach(2,544,2400);

}

void loop {
  
}

void movimiento(Servo &servo, int destino) {
/*
 *  Funcion que acepta 2 parametros, el servo a mover y
 *  el angulo final donde se va a posicionar ese servo.
 *
 */

  // Primero lee la posicion de partida para saber si tiene 
  // que restar o sumar angulo al movimiento
  int posActual = servo.read();

  if (destino < posActual) { 
    for (posActual; posActual >= destino; posActual--) {
      servo.write(posActual); // resta de a un grado
      delay(20);
    }
  }
  else {
    for (posActual; posActual <= destino; posActual++) {
      servo.write(posActual); //suma de a un grado
      delay(20);
    }

  }
