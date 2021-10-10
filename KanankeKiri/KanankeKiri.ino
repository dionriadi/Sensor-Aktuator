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

  LEDKananKeKiri();
}

void LEDKananKeKiri() {
  //hidup kanan ke kiri
  Serial.println("LED 7 Hidup");
  digitalWrite(pinLED7, HIGH);
  delay(200);
  
  Serial.println("LED 7,6 Hidup");
  digitalWrite(pinLED6, HIGH);
  delay(200);

  Serial.println("LED 7,6,5 Hidup");
  digitalWrite(pinLED5, HIGH);
  delay(200);

  Serial.println("LED 7,6,5,4 Hidup");
  digitalWrite(pinLED4, HIGH);
  delay(200);

  Serial.println("LED 7,6,5,4,3 Hidup");
  digitalWrite(pinLED3, HIGH);
  delay(200);

  Serial.println("LED 7,6,5,4,3,2 Hidup");
  digitalWrite(pinLED2, HIGH);
  delay(200);

  Serial.println("LED 7,6,5,4,3,2,1 Hidup");
  digitalWrite(pinLED1, HIGH);
  delay(200);

  //mati kanan ke kiri
  Serial.println("LED 1 Mati");
  digitalWrite(pinLED1, LOW);
  delay(200);

  Serial.println("LED 1,2 Mati");
  digitalWrite(pinLED2, LOW);
  delay(200);

  Serial.println("LED 1,2,3 Mati");
  digitalWrite(pinLED3, LOW);
  delay(200);

  Serial.println("LED 1,2,3,4 Mati");
  digitalWrite(pinLED4, LOW);
  delay(200);

  Serial.println("LED 1,2,3,4,5 Mati");
  digitalWrite(pinLED5, LOW);
  delay(200);

  Serial.println("LED 1,2,3,4,5,6 Mati");
  digitalWrite(pinLED6, LOW);
  delay(200);

  Serial.println("LED 1,2,3,4,5,6,7 Mati");
  digitalWrite(pinLED7, LOW);
  delay(200);
}
