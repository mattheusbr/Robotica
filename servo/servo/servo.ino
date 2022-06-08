#include <Servo.h>

Servo servo;
int posicao = 0;
char caractere;


void setup() {
  pinMode(13, OUTPUT);
  servo.attach(8);
  Serial.begin(9600);
}

void loop() {     
   if (Serial.available() > 0)
   {     
      caractere = Serial.read();
      Serial.print(caractere);
      switch(caractere){
        case 'd':
          VerificarPosicao();
          posicao += 10;
          servo.write(posicao);
          Serial.print("Foi ");
        break;
        case 'a':
          VerificarPosicao();
          posicao -= 10;
          servo.write(posicao);
          Serial.print("Foi ");
        break;
        case 'w':
          digitalWrite(13, HIGH);
        break;
        case 's':
          digitalWrite(13, LOW);
        break;
      }
  }
}

void VerificarPosicao(){
  posicao = (posicao > 180) ? 180 : posicao;
}
