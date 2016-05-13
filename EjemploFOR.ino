void setup {
SerialBegin(9600):
int vueltas = 0;
}

void loop{
for(var i = 0; i < 10; i++){
   		vueltas = vueltas + 1;
   	if vueltas > 5 {
vuelta = 1;
}
}
serial.println("TOTAL DE VUELTAS = " + vuelta);
}
