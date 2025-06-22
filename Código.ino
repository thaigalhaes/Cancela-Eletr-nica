<Ultrasonic.h>                                        
 
#include <Servo.h>                                             
 
//----------------Declara as variaveis do codigo----------------
 
int pinoTrigger = 12;                                           
int pinoEcho = 13;                                             
int pinoServo = 9;                                              
 
int distancia;                                                 
 
int distanciaAcionamento = 5;                                  
 
Ultrasonic sensorUltrassonico(pinoTrigger, pinoEcho);           
 
Servo meuServo;                                                 

//----------------Funcao executada uma vez na inicializacao do sistema----------------
 
void setup() {
 
  meuServo.attach(pinoServo);                                   
  meuServo.write(0);                                           
}
 
//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() {
 
  distancia = sensorUltrassonico.read();                       
  if (distancia <=  distanciaAcionamento){                     
 
    delay(800);                                                
 
    meuServo.write(120);                                       
 
    do{                                                        
 
      delay(200);                                               
      distancia = sensorUltrassonico.read();                   
 
    } while (distancia <= distanciaAcionamento);                
 
    delay(3000);                                                
    meuServo.write(0);                                          
 
    delay(2000);                                                
  }
 
  delay(200);                                                   
 
}
