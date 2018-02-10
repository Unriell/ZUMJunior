#define debug

#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int pinNumber = BQ::ZUMJunior::ports[2][1];
  Serial.println(pinNumber);
}

void loop() {
  // put your main code here, to run repeatedly:

}
