// C++ code
//
int red = 2 ;
int yellow = 4 ;
int green = 6 ;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(2000);
  digitalWrite(yellow,HIGH);
  delay(900);
  digitalWrite(yellow,LOW);
  delay(900);
  digitalWrite(yellow,HIGH);
  delay(900);
  digitalWrite(yellow,LOW);
  delay(900);
  digitalWrite(yellow,HIGH);
  delay(900);
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  delay(3000);
  digitalWrite(green,LOW);
}