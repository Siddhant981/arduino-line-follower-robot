#define in1 7
#define in2 4
#define in3 8
#define in4 9
#define pwma 5
#define pwmb 6
#define led 2 

#define stby 12

#define S1 A0
#define S2 A1 
#define S3 A2  
#define S4 A3
#define S5 A4
#define S6 A5
#define S7 A6
#define S8 A7

int threshold = 900;
void setup(){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pwma, OUTPUT);

  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pwmb, OUTPUT);
  pinMode(stby, OUTPUT);
  digitalWrite(stby, HIGH);
   pinMode(led, OUTPUT);
  delay(5000);
}
void forward(){
  analogWrite(pwma, 237);
  analogWrite(pwmb,237);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void rightturn(){
    analogWrite(pwma, 224);
    analogWrite(pwmb, 144);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}
void leftturn(){
   analogWrite(pwma, 233);
    analogWrite(pwmb, 125);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
}
void loop(){

  int s1 = analogRead(S1);
  int s2 = analogRead(S2);
  int s3 = analogRead(S3);
  int s4 = analogRead(S4);
  int s5 = analogRead(S5);
  int s6 = analogRead(S6);
  int s7 = analogRead(S7);
  int s8 = analogRead(S8);

  
   
  if(s1 > threshold && s2 > threshold && s3> threshold && s4> threshold && s5 >threshold && s6 > threshold && s7 > threshold && s8> threshold){
    digitalWrite(led, HIGH);
   
  }

   if(s6 > threshold || s7 > threshold || s8 > threshold|| s5 > threshold ){
    leftturn();
    digitalWrite(led,LOW);
  }
  else if(s4 > threshold || s5 > threshold){
    forward();
    digitalWrite(led,LOW);
  }
  else if(s1 > threshold || s2 > threshold || s3 > threshold || s4 > threshold ){
    rightturn();
    digitalWrite(led,LOW);
  }
 
}