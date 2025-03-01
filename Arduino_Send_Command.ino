#include <SoftwareSerial.h>

// Define SoftwareSerial pins (RX, TX)
SoftwareSerial mySerial(10, 11); // RX = 10, TX = 11

void setup() {
  // Initialize Serial communication with the PC (Serial Monitor)
  Serial.begin(9600);

  // Initialize SoftwareSerial communication with the STM32
  mySerial.begin(9600);
}

void loop() {
  // Check if data is available from the PC's Serial Monitor
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n'); // Read the command until newline
    mySerial.println(command); // Forward the command to STM32
    Serial.print("Sent to STM32: ");
    Serial.println(command); // Echo the command to Serial Monitor
  }

  // Check if data is available from the STM32
  if (mySerial.available()) {
    String response = mySerial.readStringUntil('\n'); // Read response from STM32
    Serial.print("Received from STM32: ");
    Serial.println(response); // Print the response to Serial Monitor
  }
}