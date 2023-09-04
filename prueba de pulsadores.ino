int PUL1 = 36;   //Pulsador de a,b,c  ERROR
int PUL2 = 39;   //Pulsador de d,e,f  ERROR
int PUL5 = 34;   //Pulsador de g,h,i  ERROR
int PUL11 = 35;   //Pulsador de j,k,l 
int PUL3 = 32;   //Pulsador de m,n,ñ
int PUL7 = 33;   //Pulsador de o,p,q
int PUL8 = 25;   //Pulsador de r,s,t
int PUL6 = 26;   //Pulsador de u,v,w  ERROR
int PUL4 = 27;   //Pulsador de x,y,z
int PUL10 = 14;  //Pulsador de space/send
int PUL9 = 12;  //Pulsador de erase/delete
int PUL12 = 13;  //Pulsador configurable



int VIB1 = 23;
int VIB2 = 22;
int VIB3 = 21;
int VIB4 = 19;
int VIB5 = 18;
int VIB6 = 5;
int VIB7 = 17;
int VIB8 = 16;
int VIB9 = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(VIB1, OUTPUT);
  pinMode(VIB2, OUTPUT);
  pinMode(VIB3, OUTPUT);
  pinMode(VIB4, OUTPUT);
  pinMode(VIB5, OUTPUT);
  pinMode(VIB6, OUTPUT);
  pinMode(VIB7, OUTPUT);
  pinMode(VIB8, OUTPUT);
  pinMode(VIB9, OUTPUT);
  pinMode(PUL1, INPUT_PULLUP);
  pinMode(PUL2, INPUT_PULLUP);
  pinMode(PUL3, INPUT_PULLUP);
  pinMode(PUL4, PULLUP);
  pinMode(PUL5, INPUT_PULLUP);
  pinMode(PUL6, INPUT_PULLUP);
  pinMode(PUL7, INPUT_PULLUP);
  pinMode(PUL8, INPUT_PULLUP);
  pinMode(PUL9, INPUT_PULLUP);
  pinMode(PUL10, INPUT_PULLUP);
  pinMode(PUL11, INPUT_PULLUP);
  pinMode(PUL12, PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PUL4) == LOW) {
    // El pulsador está presionado
    Serial.println("Pulsador presionado");
  } else {
    // El pulsador no está presionado
    Serial.println("Pulsador no presionado");
  }
}
