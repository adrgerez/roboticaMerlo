// Un array puede contener cualquier tipo de dato que quieras pero tienen que ser del mismo tipo. Cuando declaras un array, decis que tipo de dato va a contener, por ejemplo:
                   int unArray[]; //Este array contendrá enteros
                   perros unArray[]; // este otro va a contener perros. No, perros no es un tipo de datos, 
                                      // pero es útil para cuando usemos el indice

//Para inicializar el array (poner cosas en el) hacemos lo siguiente:
                   unArray[] = {huesos, firulais, boby, corbata}; // guarda acá, primero corchetes, después llaves

//Pero podemos declararlo (como toda variable vive donde la declaremos, global, en loop, en setup o en otra función, así que cuidadito con eso)
                   perros unArray[] = {huesos, firulais, boby, corbata};

//Si queremos, durante su declaración, podemos especificar el número de elementos que va a contener:
                   perros unArray[4] = {huesos, firulais, boby, corbata};

//También podemos declarar mas elementos de los que completamoss en la inicialización, así se crean espacios en blanco(invisibles) y se pueden agregar elementos mas adelante en el programa:
                   perros unArray[42] = {huesos, firulais, boby, corbata}; // a este array le podemos agregar una jauría de 38 perros
                                                                          // mas durante la ejecución del programa

/* Los arrays se manejan por una técnica que se llama de "indice 0" (ZERO indexed, en la lengua de los usurpadores de Malvinas), es decir cualquier elemento se puede acceder haciendo referencia a su índice y este indice comienza en 0.
Entonces si alguien te pregunta el nombre del cuarto perro guardado en el array, tendrás que referirte a él con el nro. de indice 3:
*/ 
      unArray[3]; // El indice 3 apunta al 4° elemento en el array que es == a 'corbata'. IMPORTANTE: los índices van entre corchetes

// Asi en nuestro array podríamos mostrar todos los perros haciendo referencia a su posición en el array mediante el indice: 
                      unArray[0]; //devuelve huesos
                      unArray[1]; // devuelve firulais
                      unArray[2]; //devuelve boby
                      unArray[3]; // devuelve corbata

/* Peeeero  ARRAYS y el loop FOR son como hermanos siameses, siempre van juntos. Es MUY IMPORTANTE manejarse y comprender totalmente el FOR loop para hacer algo útil con arrays; ya que sería muy ineficiente tratar de mostrar la jauría de 42 perros con el tipo de código que usamos arriba.
Entonces, para mostrar por consola serial el nombre de los perros tendríamos que hacer algo así:
*/
                      for (int i = 0; i < 42; i++) {
                          Serial.println(unArray[i]);
                       }
