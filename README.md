# ESP32 PIR Passive Infrared Motion Sensor Project

### Project Overview
The ESP32 PIR Passive Infrared Motion Sensor project demonstrates how to detect motion using a PIR sensor connected to an ESP32 microcontroller. This project is ideal for security systems, automated lighting, and occupancy detection.

### Components Needed
- **ESP32 Microcontroller**: The main controller that processes the sensor data.
- **PIR Motion Sensor**: Detects infrared radiation from moving objects (e.g., people or animals).
- **Jumper Wires**: Connect the sensor to the ESP32.
- **Breadboard**: Optional, for organizing the circuit connections.

### Block diagram


### Circuit Setup
1. **Connecting the PIR Sensor to ESP32:**
   - **Signal Output (pirPin)**: Connect the signal output pin of the PIR sensor to GPIO 27 on the ESP32.
   - **Power Supply**: Connect the sensor to a suitable power supply (e.g., 3.3V or 5V and GND).

### Instructions
1. **Setup:**
   - Initialize serial communication for debugging purposes using `Serial.begin(9600)`.
   - Define the GPIO pin connected to the PIR sensor (`pirPin` set to 27).
   - Set the PIR sensor pin as an input using `pinMode(pirPin, INPUT)`.

2. **Operation:**
   - **Reading Sensor Data:**
     - Use `digitalRead(pirPin)` to read the digital value from the PIR sensor.
     - Print the read value to the Serial Monitor using `Serial.print` and `Serial.println`.
   - **Detecting Motion:**
     - Check if the sensor value is HIGH, indicating motion detection.
     - Print a message to the Serial Monitor indicating whether motion is detected or not.

3. **Considerations:**
   - **Sensor Sensitivity:** Adjust the PIR sensor's sensitivity using the onboard potentiometers (if available).
   - **Delay Time:** Adjust the delay time between readings based on specific application requirements.

### Applications
- **Security Systems:** Detect unauthorized motion in restricted areas.
- **Automated Lighting:** Turn lights on/off based on room occupancy.
- **Occupancy Detection:** Monitor presence in rooms for HVAC control or data collection.

### Useful Links
🌐 [ProjectsLearner - ESP32 PIR Motion Sensor](https://projectslearner.com/learn/esp32-pir-motion-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner