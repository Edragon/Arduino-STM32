

 
#include "ST25DVSensor.h"

#define SerialPort      Serial

#define GPO_PIN PE_4
#define LPD_PIN PE_2
#define SDA_PIN PB_7
#define SCL_PIN PB_6

#define WireNFC MyWire

TwoWire MyWire(SDA_PIN, SCL_PIN);



void setup() {
  const char uri_write_message[] = "7777777";       // Uri message to write in the tag
  const char uri_write_protocol[] = URI_ID_0x01_STRING; // Uri protocol to write in the tag
  String uri_write = String(uri_write_protocol) + String(uri_write_message);

  // Initialize serial for output.
  SerialPort.begin(115200);

  // The wire instance used can be omited in case you use default Wire instance
  if(st25dv.begin(GPO_PIN, LPD_PIN, &WireNFC) == 0) {
    SerialPort.println("System Init done!");
  } else {
    SerialPort.println("System Init failed!");
    while(1);
  }

  if(st25dv.writeURI(uri_write_protocol, uri_write_message, "")) {
    SerialPort.println("Write failed!");
    while(1);
  }

}

void loop() {  
  //empty loop
} 
