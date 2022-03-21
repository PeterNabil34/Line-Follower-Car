#define motor1_dir1 11
#define motor1_dir2 10
#define motor2_dir1 9
#define motor2_dir2 8
#define ir_left 2
#define ir_center 3
#define ir_right 4

void setup() 
{
  pinMode(motor1_dir1,OUTPUT);
  pinMode(motor1_dir2,OUTPUT);
  pinMode(motor2_dir1,OUTPUT);
  pinMode(motor2_dir2,OUTPUT);
  pinMode(ir_left,INPUT);
  pinMode(ir_center,INPUT);
  pinMode(ir_right,INPUT);

}

void loop() 
{



  
  
 
 if(digitalRead(ir_center)==LOW&&digitalRead(ir_right)==HIGH&&digitalRead(ir_left)==HIGH)
 {
  //go forward
  digitalWrite(motor1_dir1,0);
  digitalWrite(motor1_dir2,1);
  digitalWrite(motor2_dir1,0);
  digitalWrite(motor2_dir2,1);
  delay(50);
  stop();
  delay(50);
 }
 if(digitalRead(ir_right)==HIGH&&digitalRead(ir_left)==LOW)
 {
  // go right
  right();
  delay(120);
  stop();
  delay(100);
  
 }
 if(digitalRead(ir_left)==HIGH&&digitalRead(ir_right)==LOW)
 {
  // go left
  left();
  delay(120);
  stop();
  delay(100);
 }
 else
 {
  // rotate
  left();
  delay(80);
  stop();
  delay(100);
 }
 
}

void forward(){
  digitalWrite(motor1_dir1,0);
  digitalWrite(motor1_dir2,1);
  digitalWrite(motor2_dir1,0);
  digitalWrite(motor2_dir2,1);
}
void left(){
  digitalWrite(motor1_dir1,0);
  digitalWrite(motor1_dir2,0);
  digitalWrite(motor2_dir1,0);
  digitalWrite(motor2_dir2,1);
}

void right(){
  digitalWrite(motor1_dir1,0);
  digitalWrite(motor1_dir2,1);
  digitalWrite(motor2_dir1,0);
  digitalWrite(motor2_dir2,0);
}


void stop(){
  digitalWrite(motor1_dir1,0);
  digitalWrite(motor1_dir2,0);
  digitalWrite(motor2_dir1,0);
  digitalWrite(motor2_dir2,0);
}
