
#define buzzer D8

void setup() {
  
  pinMode(buzzer, OUTPUT);  
  
}

void loop(){
  
 digitalWrite(buzzer, HIGH);
 delay(1000);
 digitalWrite(buzzer, HIGH);
 delay(1000); 
 
}
