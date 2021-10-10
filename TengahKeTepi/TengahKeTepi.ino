
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
  LEDKiriKeKanan();
}

void LEDKiriKeKanan() {
 
  Serial.println("LED 4 nyala");
  digitalWrite(pinLED4, HIGH);
  delay(200);
  Serial.println("LED 3,5 nyala");
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED5, HIGH);
  delay(200);

  Serial.println("LED 2,6 nyala");
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED6, HIGH);
  delay(200);

  Serial.println("LED 1,7 nyala");
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED7, HIGH);
  delay(200);

  Serial.println("LED 1,7 mati");
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED7, LOW);
  delay(200);
  
  Serial.println("LED 2,6 mati");
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED6, LOW);
  delay(200);
  
  Serial.println("LED 3,6 mati");
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED5, LOW);
  delay(200);
  
  Serial.println("LED 4 mati");
  digitalWrite(pinLED4, LOW);
  delay(200);
}
