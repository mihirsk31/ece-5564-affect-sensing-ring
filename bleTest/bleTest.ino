int x = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
      x = Serial.read()-48;
      Serial.print("Value Received: ");
      Serial.println(x);
      delay(1000);
    }
    
}
