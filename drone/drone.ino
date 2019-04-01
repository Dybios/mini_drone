#define MOTOR1 3
#define MOTOR2 9
#define MOTOR3 10
#define MOTOR4 11

#define FWDPIN 2
#define BKPIN 4
#define LFTPIN 7
#define RGTPIN 8

void forward() {
  analogWrite(MOTOR1, 100);
  analogWrite(MOTOR2, 100);
  analogWrite(MOTOR3, 255);
  analogWrite(MOTOR4, 255);
}

void back() {
  analogWrite(MOTOR1, 255);
  analogWrite(MOTOR2, 255);
  analogWrite(MOTOR3, 100);
  analogWrite(MOTOR4, 100);  
}

void left() {
  analogWrite(MOTOR1, 100);
  analogWrite(MOTOR2, 255);
  analogWrite(MOTOR3, 100);
  analogWrite(MOTOR4, 255);
}

void right() {
  analogWrite(MOTOR1, 255);
  analogWrite(MOTOR2, 100);
  analogWrite(MOTOR3, 255);
  analogWrite(MOTOR4, 100);  
}

void hover() {
  analogWrite(MOTOR1, 255);
  analogWrite(MOTOR2, 255);
  analogWrite(MOTOR3, 255);
  analogWrite(MOTOR4, 255);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);
  pinMode(MOTOR3, OUTPUT);
  pinMode(MOTOR4, OUTPUT);

  pinMode(FWDPIN, INPUT_PULLUP);
  pinMode(BKPIN, INPUT_PULLUP);
  pinMode(LFTPIN, INPUT_PULLUP);
  pinMode(RGTPIN, INPUT_PULLUP);  
}

void loop() {
  // put your main code here, to run repeatedly:
  hover();

  while(digitalRead(FWDPIN) == LOW){
    forward();
  }

  while(digitalRead(BKPIN) == LOW) {
    back();
  }

  while(digitalRead(LFTPIN) == LOW) {
    left();
  }

  while(digitalRead(RGTPIN) == LOW) {
    right();
  }
}
