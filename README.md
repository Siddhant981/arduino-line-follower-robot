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

## Pin Configuration

### TB6612FNG Motor Driver

| Arduino Nano Pin | Function |

| D7 | Motor A IN1 |
| D4 | Motor A IN2 |
| D5 | Motor A PWM |
| D8 | Motor B IN1 |
| D9 | Motor B IN2 |
| D6 | Motor B PWM |
| D12 | Standby (STBY) |

### Line Sensors

| Arduino Nano Pin | Sensor |

| A0 | S1 |
| A1 | S2 |
| A2 | S3 |
| A3 | S4 |
| A4 | S5 |
| A5 | S6 |
| A6 | S7 |
| A7 | S8 |

### LED

| Arduino Nano Pin | Function |

| D2 | Status LED |

## Control Logic

The robot uses threshold-based sensor logic to determine its movement.

The sensor readings are compared against a threshold value of `900`.

Based on the detected line position:

## Source Code

The Arduino firmware is available here:

[`line_follower_robot.ino`](./line_follower_robot.ino)

- Sensors on the left side trigger a left turn.
- Center sensors allow the robot to move forward.
- Sensors on the right side trigger a right turn.
- The motor speeds are adjusted using PWM to control the turning behavior.

The current implementation uses rule-based control rather than PID control.
