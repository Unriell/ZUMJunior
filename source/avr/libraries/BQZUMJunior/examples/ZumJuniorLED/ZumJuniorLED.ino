#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>

//ZUM Junio LED connedted to port 2
int pinLED1 = BQ::ZUMJunior::ports[2][0];
int pinLED2 = BQ::ZUMJunior::ports[2][1];

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinLED1,OUTPUT);
  pinMode(pinLED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED1,HIGH);
  digitalWrite(pinLED2,LOW);
  delay(500);
  digitalWrite(pinLED1,LOW);
  digitalWrite(pinLED2,HIGH);
  delay(500);

}
