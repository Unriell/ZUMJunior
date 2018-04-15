# ZUMJunior
BQ ZUM Junior integration on Arduino IDE

## Getting Started

### Prerequisites

You need to install latest [Arduino IDE](https://www.arduino.cc/en/Main/Software).

This package has been tested on Arduino IDE 1.8.5.

### Installing

To use the integration with Arduino IDE follow these steps:
1. Open Arduino IDE and go into File -> Preferences.
1. On "Additional Boards Manager URLs:" enter the link to [package_zumjunior_1_8_x_index.json](https://raw.githubusercontent.com/bq/ZUMJunior/master/package_zumjunior_1_8_x_index.json) [right click here and copy link] and press OK.
1. Go to Tools -> Boards -> Board Manager and you will find "ZUM Junior for Arduino 1.8.x" ready to be installed. Install latest version.

Now you can choose your Board **BQ ZUM Junior**.

You can also find some usefull examples for the board available on the IDE.

### Examples

The available examples are:
* BQ ZUM Junior Board
	* Button. Displays on serial port the status of a button attached to port 2.
	* Buzzer. Plays all the musical notes in the buzzer.
	* LED. Turns on and off a LED peripheral attached on port 2.
	* Multi. Displays all data gathered from multi sensor peripheral.
	* RGB LED. Turns on and off the embedded RGB LED on the board.
	* Rotation Servo. Moves a servo attached on port 2. On continuous rotation servo this is full speed in one direction. In mini servo, it sets the angle of the shaft to 180.
	* Servo. Moves the shaft between 10º and 170º. On a continuous rotation servo, it moves in one direction and the opposite.
	* Slider. Displays the status of the slider peripheral attached on port 1.
* BQ ZUM 7 Segment Display
	* 7 Segment Characters. Display all characters on 7 segment display.
	* 7 Segment Segmetns. Shows how to turn on each segment on the 7 segment display.
* BQ ZUM Ambient Light & Proximity Sensor
	* Ambient Light Sensor. Get and display the ambient light in Lux through serial port.
	* Distance sensor. Get and display the value returned by the distance sensor.
* BQ ZUM Color Sensor
	* Color Sensor. Get and display the color sensor measuremnts through serial port.
	* Which color. Example on how to use "whichColor" method to obtain Red, Green, Blue, White or Black.
* BQ ZUM Temperature Sensor
	* Example on how to get the temperature from sensor attached to port A.

## Flashing Bootloader

The bootloader can be flashed on ZUM Junior using another Arduino board as ISP or any other supported ISP programmer.
For further support check this [link](https://www.arduino.cc/en/Tutorial/ArduinoISP).

## License

This project is licensed under the GPL v3 license.

## Credits

This project relies on Arduino IDE to work.

The project is based on [Elektor UNO R4](https://github.com/ElektorLabs/Arduino/) 