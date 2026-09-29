# Hardware Documentation

## Main Components

| Component | Purpose |
|---|---|
| Arduino Nano | Reads sensors and executes steering logic |
| QTR-8RC | Detects the line using an 8-channel reflectance sensor array |
| TB6612FNG | Controls the two DC motors |
| DC geared motors | Drive the robot |
| 2S 7.4 V LiPo | Main power source |

## Pin Mapping

| Arduino Nano Pin | Connected Function |
|---|---|
| D4 | Motor A IN2 |
| D5 | Motor A PWM |
| D6 | Motor B PWM |
| D7 | Motor A IN1 |
| D8 | Motor B IN1 |
| D9 | Motor B IN2 |
| D12 | TB6612FNG STBY |
| D2 | Status LED |
| A0-A7 | QTR-8RC S1-S8 |

## Power

The motor supply and logic supply should be provided according to the electrical requirements of the specific hardware used. A suitable regulator should be used where required, and the grounds of the controller, sensor system, and motor-driver logic should share a common reference.

## Hardware Notes

Check the final physical wiring before powering the system. Motor polarity, sensor orientation, supply voltage, and driver connections can affect robot behavior.
