
#define pinLED1   5
#define pinLED2   4
#define pinLED3   0
#define pinLED4   2
#define pinLED5  14
#define pinLED6  12
#define pinLED7  13

void setup() {
  Serial.begin(115200);

  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  pinMode(pinLED6, OUTPUT);
  pinMode(pinLED7, OUTPUT);
}

void loop() {
  LEDTambahSatu();
}

void LEDTambahSatu() {
 
  Serial.println("LED 1 nyala");
  digitalWrite(pinLED1, HIGH);
  delay(1000);
  Serial.println("LED 1 mati");
  digitalWrite(pinLED1, LOW);
  delay(1000);

  Serial.println("LED 1,2 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  delay(1000);
  Serial.println("LED 1,2 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  delay(1000);

  Serial.println("LED 1,2,3 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  delay(1000);
  Serial.println("LED 1,2,3 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  delay(1000);

  Serial.println("LED 1,2,3,4 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, HIGH);
  delay(1000);
  Serial.println("LED 1,2,3,4 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  delay(1000);

  Serial.println("LED 1,2,3,4,5 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED5, HIGH);
  delay(1000);
  Serial.println("LED 1,2,3,4,5 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED5, LOW);
  delay(1000);

  Serial.println("LED 1,2,3,4,5,6 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED5, HIGH);
  digitalWrite(pinLED6, HIGH);
  delay(1000);
  Serial.println("LED 1,2,3,4,5,6 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED6, LOW);
  delay(1000);

  Serial.println("LED 1,2,3,4,5,6,7 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED5, HIGH);
  digitalWrite(pinLED6, HIGH);
  digitalWrite(pinLED7, HIGH);
  delay(1000);

  Serial.println("LED 1,2,3,4,5,6,7 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED6, LOW);
  digitalWrite(pinLED7, LOW);
  delay(1000);
  
}
