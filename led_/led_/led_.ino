#define led D8


void setup() {
  pinMode(led, OUTPUT);  
}

void loop(){
  
  digitalWrite(led,HIGH);
  delay(1000);  //1000 ms gecikme
  digitalWrite(led,LOW);
  delay(1000);  //1000 ms gecikme
}
