void setup(){
Serial.begin(9600);
}

void loop(){
int resultado = 0;
int numero = 256;
while(numero > 100){
	numero = numero / 2;
	resultado = resultado + 1;
}
Serial.println("Efectuamos "+resultado+ " divisiones para que el numero 256 fuera menor que 100");
}
