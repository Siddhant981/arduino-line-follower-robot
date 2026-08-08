# Arduino Line Follower Robot

A basic autonomous line-following robot built using an Arduino Nano, TB6612FNG motor driver, QTR-8RC line sensors, and DC geared motors.

## Hardware Used

- Arduino Nano
- TB6612FNG motor driver
- QTR-8RC line sensor array
- 200–300 RPM DC geared motors
- Rubber wheels
- 2S 7.4V LiPo battery
- Voltage regulator
- Jumper wires

## How It Works

The QTR-8RC line sensor array continuously reads the surface beneath the robot.

The Arduino Nano compares the sensor readings with a predefined threshold and determines the required movement.

Based on the sensor readings, the robot can:

- Move forward
- Turn left
- Turn right

The Arduino sends the control signals to the TB6612FNG motor driver, which controls the direction and speed of the two DC motors.

### Control Flow

Line Sensors → Arduino Nano → Decision Logic → TB6612FNG → DC Motors
