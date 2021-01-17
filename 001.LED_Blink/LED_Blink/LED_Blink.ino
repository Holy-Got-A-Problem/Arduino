
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //LED接於接腳12&11
}

void loop() {
  digitalWrite(12, HIGH);  
  digitalWrite(11, LOW);
  delay(1000);      
  //當12亮時，11暗，為時1秒                
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);    
  delay(1000);      
  //當12暗時，11亮，為時1秒                 
}
