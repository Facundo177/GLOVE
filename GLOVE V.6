#include <string.h>
#include <iostream>
#include <queue>
using namespace std;

#define PUL1 3     //Pulsador de a,b,c
#define PUL2 19    //Pulsador de d,e,f
#define PUL3 1     //Pulsador de g,h,i
#define PUL4 21    //Pulsador de j,k,l
#define PUL5 17    //Pulsador de m,n,ñ
#define PUL6 32    //Pulsador de o,p,q
#define PUL7 16    //Pulsador de r,s,t
#define PUL8 35    //Pulsador de u,v,w
#define PUL9 34    //Pulsador de x,y,z
#define PUL10 15   //Pulsador de space
#define PUL11 2    //Pulsador de erase
#define PUL12 4    //Pulsador de delete
#define PUL13 5    //Pulsador de a,b,c
#define PUL14 18   //Pulsador de tryout


#define LED_1 22
#define LED_2 33
#define LED_3 23
#define LED_4 25
#define LED_5 27
#define LED_6 26
#define LED_7 14
#define LED_8 13
#define LED_9 12
int del = 100;

int pulseled[27][2] = {
  // Definimos la matriz de letras, LED y secuencia de pulsos
  { LED_1, 1 },  //aA
  { LED_1, 2 },  //bB
  { LED_1, 3 },  //cC
  { LED_2, 1 },  //dD
  { LED_2, 2 },  //eE
  { LED_2, 3 },  //fF
  { LED_3, 1 },  //gG
  { LED_3, 2 },  //hH
  { LED_3, 3 },  //iI
  { LED_4, 1 },  //jJ
  { LED_4, 2 },  //kK
  { LED_4, 3 },  //lL
  { LED_5, 1 },  //mM
  { LED_5, 2 },  //nN
  { LED_5, 3 },  //ñÑ
  { LED_6, 1 },  //oO
  { LED_6, 2 },  //pP
  { LED_6, 3 },  //qQ
  { LED_7, 1 },  //rR
  { LED_7, 2 },  //sS
  { LED_7, 3 },  //tT
  { LED_8, 1 },  //uU
  { LED_8, 2 },  //vV
  { LED_8, 3 },  //wW
  { LED_9, 1 },  //xX
  { LED_9, 2 },  //yY
  { LED_9, 3 }   //zZ
};

int puls[27][3] = {
  // Definimos la matriz de letras, LED y secuencia de pulsos
  { PUL1, 1, 'A' },  //aA
  { PUL1, 2, 'B' },  //bB
  { PUL1, 3, 'C' },  //cC
  { PUL2, 1, 'D' },  //dD
  { PUL2, 2, 'E' },  //eE
  { PUL2, 3, 'F' },  //fF
  { PUL3, 1, 'G' },  //gG
  { PUL3, 2, 'H' },  //hH
  { PUL3, 3, 'I' },  //iI
  { PUL4, 1, 'J' },  //jJ
  { PUL4, 2, 'K' },  //kK
  { PUL4, 3, 'L' },  //lL
  { PUL5, 1, 'M' },  //mM
  { PUL5, 2, 'N' },  //nN
  { PUL5, 3, 'Ñ' },  //ñÑ
  { PUL6, 1, 'O' },  //oO
  { PUL6, 2, 'P' },  //pP
  { PUL6, 3, 'Q' },  //qQ
  { PUL7, 1, 'R' },  //rR
  { PUL7, 2, 'S' },  //sS
  { PUL7, 3, 'T' },  //tT
  { PUL8, 1, 'U' },  //uU
  { PUL8, 2, 'V' },  //vV
  { PUL8, 3, 'W' },  //wW
  { PUL9, 1, 'X' },  //xX
  { PUL9, 2, 'Y' },  //yY
  { PUL9, 3, 'Z' },  //zZ
};

void setup() {
  Serial.begin(9600);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_9, OUTPUT);
  pinMode(PUL1, INPUT_PULLUP);
  pinMode(PUL2, INPUT_PULLUP);
  pinMode(PUL3, INPUT_PULLUP);
  pinMode(PUL4, INPUT_PULLUP);
  pinMode(PUL5, INPUT_PULLUP);
  pinMode(PUL6, INPUT_PULLUP);
  pinMode(PUL7, INPUT_PULLUP);
  pinMode(PUL8, INPUT_PULLUP);
  pinMode(PUL9, INPUT_PULLUP);
  pinMode(PUL10, INPUT_PULLUP);
  pinMode(PUL11, INPUT_PULLUP);
  pinMode(PUL12, INPUT_PULLUP);
  pinMode(PUL13, INPUT_PULLUP);
  pinMode(PUL14, INPUT_PULLUP);
}

int findletter(int numRows, int value1, int value2) {    ///funcion para encontrar letra pulsada
  for (int m = 0; m < numRows; m++) {
    if (puls[m][0] == value1 && puls[m][1] == value2) {
      return puls[m][2];
    }
  }
  // Si no se encuentra la combinación de valores en las primeras dos columnas,
  // devolver un valor nulo o un valor que indique un error
  return -1;
}

String armarmsg() {   ///funcion para armar un mensaje con los pulsadores
  String msg;
  char letter;
  int i = 0;
    //esperar a que algun pulsador este preseionado
    for (i = 0; i <= 27; i++) {    ///ciclo que se repite para buscar alguna entrada de letras a traves de los pulsadores presionados
      if (digitalRead(puls[i][0]) == 0) {
        while (digitalRead(puls[i][0]) == 0) {
          //esperar a que se despulse
        }
        unsigned long startTime = millis();
        int num = 1;

        while (num < 3) {
          if (millis() - startTime >= del) {  // han pasado 100ms
            break;
          }
          // en caso de ser pulsado de nuevo
          if (digitalRead(puls[i][0]) == 0) {  // por ejemplo, si se presiona un botón
            num++;                             // aumentar contador de pulsos
            if (num == 3) {
              break;  // salir del ciclo
            }
            while (digitalRead(puls[i][0]) == 0) {
              //esperar a que se despulse
            }
            startTime = millis();  // reiniciar tiempo
          }
        }
        letter = findletter(27, puls[i][0], num);
        msg += letter;
      }
    }
    if (digitalRead(PUL10) == 0) {  ///funcion de barra espaciadora
      letter = ' ';
      msg += letter;
    }
    if (digitalRead(PUL11) == 0) {  ///funcion de erase
      msg = msg.substring(0, msg.length() - 1);
    }
    if (digitalRead(PUL12) == 0) {  ///funcion de delete
      msg.clear();
    }
    return msg;
}

std::queue<String> inputQueue;

void addToQueue(String inputt) {   ///funcion para agregar mensajes que van al guante a una cola de procesamiento 
  inputQueue.push(inputt);
}

void processQueue() {   ///funcion para procesar los mensajes de la cola
    String input = inputQueue.front();
   // std::cout << input << std::endl; //procesa el elemento DESARROLLAR MAS
    emitir(input);
    inputQueue.pop();
    delay(del*10);
}

void loop() {
  String mlm;
  if (Serial.available() == 1) {   //si se recive un mensaje del puerto serie
      // Leer el mensaje del puerto serie
    mlm = Serial.readStringUntil('\n');
    emitir(mlm);
    addToQueue(mlm);
    processQueue();
  }
  if (digitalRead(PUL13) == 0) {  ///funcion de send
    mlm = armarmsg();
    Serial.println(mlm);
      //expandir desarrollo para inlcuir la comunicacion bt
      //poner funcion transmitir que hara la comunicacion
  }
  if (digitalRead(PUL14) == 0) {   ///funcion de tryout
    mlm = armarmsg();
    addToQueue(mlm);
    processQueue();
  }

}

void transmitir (String mm){   ///funcion para transmitir el mensaje al puerto de comunicacion
  
}
void alerta (){   ///funcion para alertar la entrada de un mensaje mendiante pulsos
      digitalWrite(22 && 33 && 23 && 25 && 27 && 26 && 14 && 13 && 12, HIGH);
      delay(del*2);
      digitalWrite(22 && 33 && 23 && 25 && 27 && 26 && 14 && 13 && 12, LOW);
      delay(del*2);
      digitalWrite(22 && 33 && 23 && 25 && 27 && 26 && 14 && 13 && 12, HIGH);
      delay(del*2);
      digitalWrite(22 && 33 && 23 && 25 && 27 && 26 && 14 && 13 && 12, LOW);
      delay(del*2);
}

void emitir (String message){   ///funcion para emitir el mensaje al guante

      Serial.println(message);
      Serial.println(message.length());

      for (int j = 0; j < message.length(); j++) {
        // Encontrar la entrada correspondiente en la matriz pulseled para la letra
        if (message[j] >= 'a' && message[j] <= 'z') {
          int led = pulseled[message[j] - 'a'][0];
          Serial.println(led);
          if (pulseled[message[j] - 'a'][1] == 1) {
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del * 2);
          }
          if (pulseled[message[j] - 'a'][1] == 2) {
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del);
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del * 2);
          }
          if (pulseled[message[j] - 'a'][1] == 3) {
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del);
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del);
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del * 2);
          }
        }
        if (message[j] >= 'A' && message[j] <= 'Z') {
          int led = pulseled[message[j] - 'A'][0];
          Serial.println(led);
          if (pulseled[message[j] - 'A'][1] == 1) {
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del * 2);
          }
          if (pulseled[message[j] - 'A'][1] == 2) {
            digitalWrite(led, 1);
            delay(del * 3);
            digitalWrite(led, 0);
            delay(del * 2);
          }
          if (pulseled[message[j] - 'A'][1] == 3) {
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del);
            digitalWrite(led, 1);
            delay(del);
            digitalWrite(led, 0);
            delay(del * 2);
          }
        }

        delay(del * 10);
      }
}
