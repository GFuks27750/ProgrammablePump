#include <IRremote.h>

const byte IR_RECEIVE_PIN = 5;
int irCommand = 0;
const byte RELAY_PIN = 12; 
void setup()
{
   Serial.begin(115200);
   Serial.println("IR Receive test");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
   pinMode(RELAY_PIN, OUTPUT);
}

void loop()
{
   if (IrReceiver.decode())
   {
      irCommand = IrReceiver.decodedIRData.command; 
      switch(irCommand){
        case 0: // pump is working for 15 seconds every hour
          setTimePeriod(15000,3600000)
        break;
        case 2: //pump turn off
          digitalWrite(RELAY_PIN, LOW);
        break; 

        case 3: //pump turn on 
          digitalWrite(RELAY_PIN, HIGH);
        break; 
        default: 
          Serial.println("");
      }
      IrReceiver.resume();
   }
   delay(500);
}

//very simple function to set time period when your pump will be working
void setTimePeriod(int activeTime, int delayTime){
  while(true){
   if (IrReceiver.decode())
  {
    irCommand = IrReceiver.decodedIRData.command; 
    IrReceiver.resume(); 
    if(irCommand != 0) 
    {
      break; 
    }
  }
  digitalWrite(RELAY_PIN, HIGH); 
  delay(activeTime);
  digitalWrite(RELAY_PIN, LOW);
  delay(delayTime);
}
}