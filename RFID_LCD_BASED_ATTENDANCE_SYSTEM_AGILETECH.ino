#include <LiquidCrystal.h>
//#include <SoftwareSerial.h>
//SoftwareSerial Serial(9, 10); // RX, TX

char sub;
//=============================
char i;
char j;
String card;
String card1;
int count3 = 0;
int count1 = 0;
char c;
int cardstatus = 0;
//============================

int count11 = 0;
int count22 = 0;

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup()
{
  Serial.begin(9600);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print(" ATTENDANCE ");
  lcd.setCursor(0, 1);
  lcd.print("   SYSTEM   ");
  delay(3000);
}

void loop()
{

checksensor:
  //=========checking Serial============
  if (Serial.available() > 0)
  {
    delay(50);
    i = Serial.read();
    delay(50);
label0:
    i = Serial.read();
    delay(100);
    card = card + i;
    count3++;

    if (count3 > 11)
    {
      count3 = 0;
      //Serial.println(card);
      //lcd.clear();
      //lcd.print(card);
      goto label1;
    }
    delay(10);
    goto label0;
  }


  goto checksensor;


label1:
checkSerial:
  if (card == "3D002FF1E201")
  {
    sub = 'A';
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    Serial.println("A");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }
  if (card == "3D002D74CAAE")
  {
    sub = 'B';
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    Serial.println("B");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D002D5A6E24")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.1:");
    Serial.print(sub);
    Serial.println("1");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D002AC81AC5")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.2:");
    Serial.print(sub);
    Serial.println("2");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D0028A6289B")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.3:");
    Serial.print(sub);
    Serial.println("3");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D002A172727")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.4:");
    Serial.print(sub);
    Serial.println("4");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3C0048F26FE9")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.5:");
    Serial.print(sub);
    Serial.println("5");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D00296C7E06")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.6:");
    Serial.print(sub);
    Serial.println("6");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

  if (card == "3D002E054157")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("SUB:");
    lcd.print(sub);
    lcd.setCursor(8, 1);
    lcd.print("|No.7:");
    Serial.print(sub);
    Serial.println("7");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

    if (card == "3C0062186721")
  {
    lcd.clear();
    lcd.print(card);
    lcd.setCursor(0, 1);
    lcd.print("Unregistered");
    Serial.print(sub);
    Serial.println("0");
    delay(2000);
    card = "";
    i = 0;
    Serial.flush();
    Serial.end();
    Serial.begin(9600);
    goto checksensor;
  }

goto checkSerial;
}
