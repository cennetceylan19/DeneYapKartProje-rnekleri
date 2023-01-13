#include <analogWrite.h>

#define rpin D8

void setup() {
  Serial.begin(115200)
  pinMode(rpin, OUTPUT);  
  
}

void loop(){
  
  for (int i=0; i<255; i++)
  {
    analogWrite(rpin,i);
    delay(12);
    Serial.println(i);
    }
  for (int k=255; k>0; k--)
  {
    analogWrite(rpin,k);
    delay(12);
    Serial.println(k);
    }
}
