#define debug

#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int ledPin = BQ::ZUMJunior::ports[1][1];
}

void loop() {
  // put your main code here, to run repeatedly:

}
