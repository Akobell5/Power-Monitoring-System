# Power-Monitoring-System
Arduino Code for Voltage and Current Monitoring with Overload Protection
This Arduino code enables voltage and current monitoring using analog pins A3 and A4. The code reads the raw values from the pins, converts them to voltage and current values, and calculates the power. It includes overload protection by controlling a relay to turn off the circuit if the power exceeds a certain threshold.

**Circuit Setup**
Connect the voltage source to pin A3 and the current sensor to pin A4.
Connect a relay to pin 2 to control the circuit power.

**Usage**
Upload the code to your Arduino board.
Connect the voltage source and current sensor to the specified pins.
Open the serial monitor in the Arduino IDE (baud rate: 9600).
Observe the measured voltage, current, and power values in the serial monitor.
If the power exceeds 65.0 units, the code triggers the overload protection and turns off the relay.


**Description**
The code starts by initializing the necessary pins, including the voltage pin (A3), current pin (A4), and relay pin (2).
In the loop() function, it reads the raw voltage and current values using the analogRead() function.
The code then converts the raw values to voltage and current values by dividing them by appropriate factors.
It calculates the power by multiplying the voltage and current values.
The measured voltage, current, and power values are displayed in the serial monitor using Serial.print() and Serial.println() functions.
If the power exceeds the threshold of 65.0 units, the code triggers the overload protection. It displays an overload message and turns off the relay by setting the relay pin to LOW.
If the power is within the safe range, the code displays a message indicating that the circuit is powered on and sets the relay pin to HIGH.


**Additional Notes:**
Adjust the threshold value (65.0) to suit your specific application and power limits.
Make sure to connect the voltage source and current sensor correctly to the specified analog pins.
Consider adding a display or other output methods to enhance the interaction and visualization of the system.
This code provides a basic implementation of voltage and current monitoring with overload protection. Feel free to modify it according to your requirements and add additional features.
License:
This code is provided as-is, without any warranties or guarantees. You are free to use and modify the code to meet your needs. Refer to the Arduino documentation for more information on usage and licensing of Arduino-based projects.

Please refer to the circuit diagram and additional documentation for a detailed understanding of the setup and functionality.

Use this code as a starting point to monitor voltage and current in your Arduino projects, and ensure overload protection for safe operation. Enjoy working with this Arduino code and also you can modify the code and save it on cloud 






