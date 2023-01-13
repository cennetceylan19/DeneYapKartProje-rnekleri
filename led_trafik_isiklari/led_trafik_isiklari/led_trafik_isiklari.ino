#define kirmizi_led D7
#define sari_led D8
#define yesil_led D9


void setup() {
  
  pinMode(kirmizi_led, OUTPUT);  
  pinMode(sari_led, OUTPUT); 
  pinMode(yesil_led, OUTPUT); 
}

void loop(){
  
  digitalWrite(kirmizi_led,HIGH);
  digitalWrite(sari_led,LOW);
  digitalWrite(yesil_led,LOW);
  delay(4000);  
  
  digitalWrite(kirmizi_led,LOW);
  digitalWrite(sari_led,HIGH);
  digitalWrite(yesil_led,LOW);
  delay(1000); 

  digitalWrite(kirmizi_led,LOW);
  digitalWrite(sari_led,LOW);
  digitalWrite(yesil_led,HIGH);
  delay(4000);  

  digitalWrite(kirmizi_led,LOW);
  digitalWrite(sari_led,HIGH);
  digitalWrite(yesil_led,LOW);
  delay(1000);  
  
}
