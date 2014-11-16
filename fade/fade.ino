//numero de salida donde se conecto el led
  int led = 9; 
//valor inicial de la intensidad del brillo
  int brillo=0; 
//valor de cambio entre cada cambio en la intensidad
  int valorCambio=5; 

//metodo para la configuración de codigo
void setup() {
  // configuramos el gpio como salida(led)
  pinMode(led,OUTPUT);
}

//metodo que se estara ejecutando continuamente 
void loop() {
  // valor que inyectamos salida 
  analogWrite(led, brillo);
  //aumentamos la intensidad del brillo 
  brillo = brillo + valorCambio;
  //comparamos si el brillo llego a 0 o 255 cambiamos de signo
  if(brillo==0 || brillo==255) 
     valorCambio = -valorCambio;
  //retardamos 300 milisegundos
  delay(300);
}
