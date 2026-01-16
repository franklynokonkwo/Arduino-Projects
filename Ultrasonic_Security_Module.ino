const int TRIG_PIN = 11;
const int ECHO_PIN = 10;
const int BUZZER_PIN = 7;
const int LED_PIN = 12;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  long duration = pulseIn(ECHO_PIN, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance > 0 && distance < 15) {
    // CRITICAL ZONE: High Pitch + Fast Blinking
    tone(BUZZER_PIN, 2000); 
    digitalWrite(LED_PIN, HIGH);
    delay(50); 
    digitalWrite(LED_PIN, LOW);
    delay(50);
    Serial.println("CRITICAL: High Intensity");
  } 
  else if (distance >= 15 && distance < 40) {
    // WARNING ZONE: Low Pitch + Solid LED
    tone(BUZZER_PIN, 500); 
    digitalWrite(LED_PIN, HIGH); 
    Serial.println("WARNING: Low Intensity");
  } 
  else {
    // CLEAR: Off
    noTone(BUZZER_PIN);
    digitalWrite(LED_PIN, LOW);
  }

  delay(200);
}
