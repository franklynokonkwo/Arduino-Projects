const int LDR_PIN = A0;  // Pin connected to the LDR
const int LED_PIN = 11;  // Pin connected to the LED
const int THRESHOLD = 00; // Adjust this value based on your room's light

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); // Allows you to see the light levels on your computer
}

void loop() {
  int lightLevel = analogRead(LDR_PIN); // Read light (0 to 1023)
  Serial.println(lightLevel);           // Print level to Serial Monitor

  if (lightLevel < THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);        // It's dark! Turn on light
  } else {
    digitalWrite(LED_PIN, LOW);         // It's bright! Turn off light
  }
  
  delay(100); // Small pause for stability
}
