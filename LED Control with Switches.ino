const int green1=3;
const int red1=5;
const int red2=6;
const int red3=9;
const int red4=10;
const int green2=11;
const int switch1=12;
const int switch2=13;
int i=0;

void setup()
{
  pinMode(green1,1);
  pinMode(red1,1);
  pinMode(red2,1);
  pinMode(red3,1);
  pinMode(red4,1);
  pinMode(green2,1);
  pinMode(switch1,0);
  pinMode(switch2,0);
}

void loop()
{
  int read1=digitalRead(switch1);
  int read2=digitalRead(switch2);
  
  if(read1==1 && read2==0){
    analogWrite(green1,128);
    analogWrite(red1,128);
    
    analogWrite(red2,0);
    analogWrite(red3,0);
    analogWrite(red4,0);
    analogWrite(green2,0);
  }
  else if(read2==1 & read1==0){
    analogWrite(red3,128);
    analogWrite(green2,128);
    
    analogWrite(green1,0);
    analogWrite(red1,0);
    analogWrite(red2,0);
    analogWrite(red4,0);
  
  }
  else if(read1==1 && read2==1){
    analogWrite(green1,128);
    analogWrite(red1,128);
    analogWrite(red3,128);
    analogWrite(green2,128);
    
    analogWrite(red2,0);
    analogWrite(red4,0);
  }
  else if(read1==0 && read2==0){
    analogWrite(green1,0);
    analogWrite(red1,0);
    analogWrite(red2,0);
    analogWrite(red3,0);
    analogWrite(red4,0);
    analogWrite(green2,0);
  }
}