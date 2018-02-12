#include <BQZUMJunior.h>
#include <BQZUMJuniorPorts.h>
#include <Servo.h>

//ZUM Junior Servo connedted to port 2. ATTENTION-> Servo is on wire 1.
int pinServo = BQ::ZUMJunior::ports[2][1];
Servo servo;
void setup() {
  // put your setup code here, to run once:
  servo.attach(pinServo);

}

void loop() {
  servo.write(0);
  delay(1000);
  servo.write(180);
  delay(1000);
}
