#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello Monitor!!!");
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(14, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello Monitor!!!");
  digitalWrite(17, HIGH);
  digitalWrite(16, HIGH);
  Serial.println("Group One On.");
  delay(2000);
  digitalWrite(17, LOW);
  digitalWrite(16, LOW);
  Serial.println("Group One Off.");
  delay(2000);
  digitalWrite(27, HIGH);
  digitalWrite(14, HIGH);
  Serial.println("Group Two On.");
  delay(2000);
  digitalWrite(27, LOW);
  digitalWrite(14, LOW);
  Serial.println("Group Two Off.");
  delay(2000);
  digitalWrite(17, HIGH);
  digitalWrite(27, HIGH);
  Serial.println("Group Three On.");
  delay(2000);
  digitalWrite(17, LOW);
  digitalWrite(27, LOW);
  Serial.println("Group Three Off.");
  delay(2000);
  digitalWrite(14, HIGH);
  digitalWrite(16, HIGH);
  Serial.println("Group Four On.");
  delay(2000);
  digitalWrite(14, LOW);
  digitalWrite(16, LOW);
  Serial.println("Group Four Off.");
  delay(2000);
}