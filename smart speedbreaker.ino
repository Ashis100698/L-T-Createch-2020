#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensorvalue=0;
int s=0;
void setup() {
    lcd.begin(16, 2);
  // Print a message to the LCD.
 pinMode(7,INPUT); 
  pinMode(8,OUTPUT);// put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
 


sensorvalue=digitalRead(7);
Serial.println(sensorvalue);

  
if(sensorvalue>0)
{
 
     s=s+1;
     delay(1000);
 

}
if(s>=3)
{
  digitalWrite(8,HIGH);
    lcd.setCursor(0, 0);
  lcd.print("VEHICLE PASSED-");
    lcd.setCursor(15, 0);
  lcd.print(s);
    lcd.setCursor(0, 1);
  lcd.print("PARKING FULL     ");
}
else
{
   digitalWrite(8,LOW);
    lcd.setCursor(0, 0);
  lcd.print("TEAM FIJI");
    lcd.setCursor(0, 1);
  lcd.print("VEHICLE PASSED-");
    lcd.setCursor(15, 1);
  lcd.print(s);
}


}
