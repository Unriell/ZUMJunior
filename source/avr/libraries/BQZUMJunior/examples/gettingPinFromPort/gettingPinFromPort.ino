#define debug

#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int pinNumber = BQ::ZUMJunior::ports[2][1];
  int i2cNumber = BQ::ZUMJunior::i2cPorts['A'];
  Serial.println(pinNumber);
  Serial.println(i2cNumber);
}

void loop() {
  // put your main code here, to run repeatedly:

}
