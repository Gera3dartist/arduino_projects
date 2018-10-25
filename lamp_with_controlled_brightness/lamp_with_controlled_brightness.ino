#define LED_PIN 10
#define POT_PIN A0

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int rotation, brightness;
  rotation = analogRead(POT_PIN);
  brightness = rotation/4;
  Serial.print(">>rotation");
  Serial.println(rotation);
  analogWrite(LED_PIN, brightness);
}
