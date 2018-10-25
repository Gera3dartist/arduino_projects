#define LED_PIN 13
#define LDR_PIN A0
#define POT_PIN A1

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int brightness = analogRead(LDR_PIN);
  int threshold = analogRead(POT_PIN);

  Serial.print(">>> threshold: ");
  Serial.print(threshold);
  Serial.print("  ");
  Serial.print(">>> brightness: ");
  Serial.println(brightness);
  boolean tooDark = (brightness < threshold);
//  Serial.print(">>>too dark: ");
//  Serial.println(tooDark);

  if (tooDark) {
      digitalWrite(LED_PIN, HIGH);
  } else {
      digitalWrite(LED_PIN, LOW);  
  }
  delay(10);

}
