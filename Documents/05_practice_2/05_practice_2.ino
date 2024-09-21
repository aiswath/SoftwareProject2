#define LED_PIN 7
#define BLINKS 5
#define BLINK_DURATION 200

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  
  digitalWrite(LED_PIN, 0);
  delay(1000);

 
  for (int i = 0; i < BLINKS; i++) {
    digitalWrite(LED_PIN, 0);
    delay(BLINK_DURATION / 2);
    digitalWrite(LED_PIN, 1);
    delay(BLINK_DURATION / 2);
  }

  
  digitalWrite(LED_PIN, 1);
  while (true);
}
