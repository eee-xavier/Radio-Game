#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;
byte nuidPICC[4];
#define OUT1   7
#define OUT2   6
#define OUT3   5
#define OUT4   4
#define OUT5   3
long last;
byte RFID2[4]={0x30, 0x98, 0x34, 0xC9};
byte RFID3[4]={0x30, 0xBE, 0x34, 0xC9};
byte RFID4[4]={0x04, 0xBA, 0xC3, 0x1A};
byte RFID5[4]={0x04, 0xAA, 0xC3, 0x1A};
byte RFID6[4]={0x04, 0x35, 0xDC, 0x1A};
byte RFID7[4]={0x04, 0xB2, 0xC3, 0x1A};
void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }
  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);
  pinMode(OUT5, OUTPUT);
  digitalWrite(OUT1, LOW);
  digitalWrite(OUT2, LOW);
  digitalWrite(OUT3, LOW);
  digitalWrite(OUT4, LOW);
  digitalWrite(OUT5, LOW);
 

}

void loop() {
  
    if ( ! mfrc522.PICC_IsNewCardPresent() 
         || ! mfrc522.PICC_ReadCardSerial() ) {
        delay(50);
        if(millis()-last >200)
        {
            digitalWrite(OUT1, LOW);
            digitalWrite(OUT2, LOW);
            digitalWrite(OUT3, LOW);
            digitalWrite(OUT4, LOW);
            digitalWrite(OUT5, LOW);
            
        }
        return;
    }
    last=millis();

    for(int i=0;i<4;i++)
    {
        Serial.print(mfrc522.uid.uidByte[i],HEX);
        Serial.print(' ');
    }
    Serial.println();
  if (mfrc522.uid.uidByte[0] == RFID2[0] &&
    mfrc522.uid.uidByte[1] == RFID2[1] &&
    mfrc522.uid.uidByte[2] == RFID2[2] &&
    mfrc522.uid.uidByte[3] == RFID2[3]
    ) {
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
  }
 else if ((mfrc522.uid.uidByte[0] == RFID3[0] &&
   mfrc522.uid.uidByte[1] == RFID3[1] &&
    mfrc522.uid.uidByte[2] == RFID3[2] &&
    mfrc522.uid.uidByte[3] == RFID3[3])||
    (mfrc522.uid.uidByte[0] == RFID4[0] &&
   mfrc522.uid.uidByte[1] == RFID4[1] &&
    mfrc522.uid.uidByte[2] == RFID4[2] &&
    mfrc522.uid.uidByte[3] == RFID4[3])
    ) {
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    }
  else if(
    (mfrc522.uid.uidByte[0] == RFID5[0] &&
   mfrc522.uid.uidByte[1] == RFID5[1] &&
    mfrc522.uid.uidByte[2] == RFID5[2] &&
    mfrc522.uid.uidByte[3] == RFID5[3])||
    (mfrc522.uid.uidByte[0] == RFID6[0] &&
   mfrc522.uid.uidByte[1] == RFID6[1] &&
    mfrc522.uid.uidByte[2] == RFID6[2] &&
    mfrc522.uid.uidByte[3] == RFID6[3])||
    (mfrc522.uid.uidByte[0] == RFID7[0] &&
   mfrc522.uid.uidByte[1] == RFID7[1] &&
    mfrc522.uid.uidByte[2] == RFID7[2] &&
    mfrc522.uid.uidByte[3] == RFID7[3]))
    {
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(500);
    digitalWrite(OUT1, HIGH);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, HIGH);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, HIGH);
    delay(500);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, HIGH);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, HIGH);
    digitalWrite(OUT5, LOW);
    delay(200);
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
    delay(200);
    
    }
  else
  {
    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);
    digitalWrite(OUT5, LOW);
  }
    delay(50);
}
