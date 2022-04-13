int buzzer = 12;

int vermelho1 = 9;
int amarelo1 = 10;
int verde1 = 11;

int vermelho2 = 7;
int amarelo2 = 6;
int verde2 = 5;

int vermelho3 = 4;
int amarelo3 = 3;
int verde3 = 2;

void setup() {

  pinMode(vermelho1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde1, OUTPUT);

  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);

  pinMode(vermelho3, OUTPUT);
  pinMode(amarelo3, OUTPUT);
  pinMode(verde3, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {  
  //est 1  
  tone(buzzer, 200, 500);  
  digitalWrite(verde1 , HIGH);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(vermelho3, HIGH);
  delay(5800);
  digitalWrite(verde1, LOW);
  digitalWrite(amarelo1, HIGH);
  delay(400);
  
  //est 2  
  tone(buzzer, 200, 500);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, HIGH);
  digitalWrite(vermelho1, HIGH);
  delay(2600);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  delay(400);
  
  //est 3
  tone(buzzer, 200, 500);  
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(verde3, HIGH);
  delay(6400);
  digitalWrite(verde3, LOW);
  digitalWrite(amarelo3, HIGH);
  delay(400);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo3, LOW);
  delay(500);
}
