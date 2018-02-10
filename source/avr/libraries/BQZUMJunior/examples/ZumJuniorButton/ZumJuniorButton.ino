#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>

//ZUM Junior Button connedted to port 2. ATTENTION-> Button is on wire 1.
int pinButton = BQ::ZUMJunior::ports[2][1];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinButton,INPUT);

}

void loop() {
  Serial.println(digitalRead(pinButton));
  delay(1000);

}
