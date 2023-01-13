#include <analogWrite.h>

#define pot A0
#define led D9

void setup() {
  Serial.begin(115200);
  Serial.println("Potansiyometreden okunan analog değer:");

}

void loop() {

  int deger = analogRead(pot);
  deger = deger/16;
  analogWrite(led,deger);
  Serial.println(deger);
  delay(100);

}
