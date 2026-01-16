**Automotive Proximity & Security Alert System**

**PROJECT OVERVIEW**
This project is a high-precision Advanced Driver Assistance System (ADAS) prototype designed for vehicle safety and perimeter security. By utilizing Ultrasonic Time-of-Flight (ToF) technology, the system acts as a "Virtual Bumper." It monitors the environment for obstacles and provides instant Audible-Visual alerts via a synchronized LED and Buzzer once a critical distance threshold is breached.

**CORE FEATURES**
Collision Mitigation: Real-time distance calculation mimicking modern vehicle parking sensors.

Perimeter Security: Acts as an acoustic tripwire to detect unauthorized proximity in restricted zones.

Immediate Feedback: High-decibel audio (Buzzer) and high-visibility visual (LED) alerts for fail-safe operation.

** HARDWARE CONFIGURATION **
The system uses an HC-SR04 sensor to "see" and a combined LED/Buzzer hub to "warn.
**COMPONENT  ARDUINO PIN       FUNCTION
Ultrasonic    Trig Pin 5     Sends acoustic pulse
Ultrasonic    EchoPin 6      Receives reflected pulse
Buzzer (+)     Pin 4            Audible alarm
LED (Anode)    Pin 13          Visual warning

 **TECHNICAL LOGIC**
 The system calculates the distance of an object by measuring the time it takes for a sound wave to bounce back. It uses the following formula to convert time into centimeters:
`            DISTANCE = (DURATION * 0.034) / 2
 If the calculated distance is less than 20cm, the Arduino triggers the Alarm State, activating both the LED and the Buzzer simultaneously.
