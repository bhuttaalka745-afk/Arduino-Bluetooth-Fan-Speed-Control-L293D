# Arduino-Bluetooth-Fan-Speed-Control-L293D
This project demonstrates how to control the speed of a DC fan using an Arduino UNO, an HC-05 Bluetooth module, and an L293D motor driver. A Bluetooth mobile application with a dimmer sends PWM values (0–255) to the Arduino through serial communication. 
Arduino reads the received value using Serial.parseInt() and generates a PWM signal using analogWrite() on the Enable pin of the L293D. The PWM signal controls the motor driver, which adjusts the speed of the connected DC fan.

This project is a simple example of wireless motor speed control and helps in understanding Bluetooth communication, PWM control, and motor driver interfacing in embedded systems.

Components Used

Arduino UNO

HC-05 Bluetooth Module

L293D Motor Driver IC

DC Motor / Fan

Jumper Wires

External Power Supply (for motor)

Working

The Bluetooth mobile application sends a value between 0–255 using a dimmer slider.

The HC-05 Bluetooth module receives this value and sends it to the Arduino via UART serial communication.

Arduino reads the value using Serial.parseInt().

The received value is passed to the analogWrite() function.

The PWM signal is generated on the Enable pin (enA) of the L293D motor driver.

The motor driver adjusts the speed of the DC fan according to the PWM value.

Speed Behavior

0 → Fan OFF

50–100 → Low Speed

120–180 → Medium Speed

200–255 → Full Speed
Applications

Bluetooth controlled fan

Wireless motor speed control

Smart home automation systems

Basic IoT and embedded system experiments
