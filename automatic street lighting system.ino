int sensorvalue1;
int sensorvalue2;
int sensorvalue3;
int sensorvalue4;
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
    pinMode(6,INPUT);
        pinMode(5,INPUT);
            pinMode(3,INPUT);
  pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
      pinMode(10,OUTPUT);
        pinMode(9,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  sensorvalue1=digitalRead(5);// put your main code here, to run repeatedly:
Serial.println(sensorvalue1);
  sensorvalue2=digitalRead(6);// put your main code here, to run repeatedly:
Serial.println(sensorvalue2);
  sensorvalue3=digitalRead(7);// put your main code here, to run repeatedly:
Serial.println(sensorvalue3);
  sensorvalue4=digitalRead(3);// put your main code here, to run repeatedly:
Serial.println(sensorvalue4);
if(sensorvalue1==0)
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
   digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

if(sensorvalue2==0)
{
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(1000);
   digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
if(sensorvalue3==0)
{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  delay(1000);
   digitalWrite(9,LOW);
  digitalWrite(10 ,LOW);
}
if(sensorvalue4==0)
{
  digitalWrite(9,HIGH);

  delay(1000);
   digitalWrite(9,LOW);
}




}
