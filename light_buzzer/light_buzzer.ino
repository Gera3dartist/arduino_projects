#define BUZZER_PIN 3
#define LDR_PIN A0

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(LDR_PIN);
  Serial.print(">>>light: ");
  Serial.println(val);
  int frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 20);

}
