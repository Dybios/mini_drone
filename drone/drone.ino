#define MOTOR1 2
#define MOTOR2 3
#define MOTOR3 5
#define MOTOR4 6

#define FWDPIN 8
#define BKPIN 9
#define LFTPIN 10
#define RGTPIN 11

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

void forward() {
  analogWrite(MOTOR1, 100);
  analogWrite(MOTOR2, 100);
  analogWrite(MOTOR3, 255);
  analogWrite(MOTOR4, 255);
}

void back() {
  analogWrite(MOTOR1, 100);
  analogWrite(MOTOR2, 100);
  analogWrite(MOTOR3, 255);
  analogWrite(MOTOR4, 255);  
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

void loop() {
  // put your main code here, to run repeatedly:
  hover();

  while(digitalRead(FWDPIN) == LOW){
    forward();
  }

  while(digitalRead(BKPIN) != HIGH) {
    back();
  }

  while(digitalRead(LFTPIN) != HIGH) {
    left();
  }

  while(digitalRead(RGTPIN) != HIGH) {
    right();
  }
}
