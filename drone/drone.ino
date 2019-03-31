#define MOTOR1 5
#define MOTOR2 9
#define MOTOR3 6
#define MOTOR4 10

#define FWDPIN 2
#define BKPIN 3
#define LFTPIN 4
#define RGTPIN 7

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
