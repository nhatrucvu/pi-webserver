void setup() {
  Serial.begin(9600); // Start Serial.
}

void loop() {
  int A = analogRead(A1);
  Serial.println(A);// Display serial results in serial monitor


}
