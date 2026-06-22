#include <IRremote.hpp>  

#define IR_RECEIVE_PIN 2 
int RelayPin = 3;
long code;
int flag = 1;

void setup() {
  Serial.begin(9600);
  pinMode(IR_RECEIVE_PIN,INPUT_PULLUP);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  pinMode(RelayPin,OUTPUT); 
}
void loop() {
  if (IrReceiver.decode()) {
    code = IrReceiver.decodedIRData.decodedRawData; 
    Serial.println(code);

    if(code == -1169817856){
  if(flag == 0){
    flag = 1;
    digitalWrite(RelayPin, HIGH);
  }
  else if(flag == 1){
    flag = 0;
    digitalWrite(RelayPin,LOW);
  }
}
    IrReceiver.resume(); 
  }

}




  
  




