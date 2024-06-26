#define SensorPin       34  //D34 
int     sensorVal;

void setup() {
  Serial.begin(115200);
}
void loop() {
  sensorVal = analogRead(SensorPin);
  Serial.print("Moisture Value: ");
  Serial.println(sensorVal);
  delay(1000);
}