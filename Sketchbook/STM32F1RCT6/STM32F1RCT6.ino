// C:\Users\Administrator\AppData\Local\Arduino15\packages\STM32\hardware\stm32\1.9.0\variants\Generic_F103Rx

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PA_8, OUTPUT);
  pinMode(PD_2, OUTPUT);

  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {

  
  Serial.println("test ...");
  digitalWrite(PA_8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(PD_2, HIGH);
  delay(100);   
  
  
  digitalWrite(PA_8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(PD_2, LOW);
  delay(100);  



}
