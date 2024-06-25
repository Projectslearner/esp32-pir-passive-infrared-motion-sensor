/*
    Project name: ESP32 PIR Passive Infrared Motion Sensor
    Modified Date: 25-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-pir-motion-sensor
*/

// Define the GPIO pin connected to the PIR sensor
const int pirPin = 27; // Example GPIO pin on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(pirPin, INPUT); // Set the PIR sensor pin as an input
}

void loop() {
  // Read the PIR sensor value
  int pirValue = digitalRead(pirPin);

  // Print the PIR sensor value to the Serial Monitor
  Serial.print("PIR Sensor Value: ");
  Serial.println(pirValue);

  // Check if motion is detected
  if (pirValue == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected.");
  }

  // Add a delay before the next reading
  delay(1000);
}
