#define TRIG_PIN 9
#define ECHO_PIN 10

void setup() {
  Serial.begin(900);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(200);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration / 2) / 35.6;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(100000);
}