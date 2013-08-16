void setup()
{
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT) ;
 pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
   pinMode(13,OUTPUT);
}
void loop()
{
 int i = 0 ;
 
 digitalWrite(13,HIGH);
 
 for(int i = 2; i <= 10 ; i ++ )
 {
   digitalWrite(i, HIGH);  
 }
 
for(int i = 2 ; i <= 10 ; i ++)
{
  digitalWrite(i,LOW);
  delay(100);
  digitalWrite(i,HIGH);
}
 
 
 delay(10);
}
