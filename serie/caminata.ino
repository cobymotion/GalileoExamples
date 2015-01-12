//salida en la que vamos a empezar el encendido
int cont=4; 
//bandera para poder regresar 
boolean ban=true; 
void setup() {
  //empezamos con el cuatro  
  int led=cont; 
  //activamos todas como salida desde el 4
  for(;led<=7;led++)
    pinMode(led,OUTPUT); 

}

void loop() {
  //inicia encendiendo el led 4 y en cada vuelta va aumentando
  digitalWrite(cont,HIGH);
  //esperamos un tiempo
  delay(500); 
  // apagamos el led que encendimos despues del tiempo
  digitalWrite(cont,LOW);
  //si la bandera esta activida va aumentando si esta falsa va disminuyendo
  if(ban) 
    cont++;  
  else
    cont--; 
  // si el contador llego al final entonces empieza a regresar
  if(cont==8 && ban)
    ban=false;
  else if(cont==3 && !ban) 
    ban=true;
}
