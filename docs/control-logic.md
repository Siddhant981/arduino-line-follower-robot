# Control Logic

The current firmware uses a fixed threshold and conditional steering rules.

## Control Flow

```text
Read S1-S8
    |
    v
Compare each reading with threshold
    |
    +--> Left sensor pattern --> leftturn()
    |
    +--> Center sensor pattern --> forward()
    |
    +--> Right sensor pattern --> rightturn()
```

## Control Method

The implementation is **threshold-based rule logic**.

It does not currently calculate:

- proportional error
- integral error
- derivative error
- encoder-based speed feedback

Therefore, this project should not be described as PID-controlled in its current state.

## Tuning

The main values affecting physical behavior are the sensor threshold and PWM values used by the movement functions. These are hardware- and track-dependent, so changing sensors, motors, battery, surface, or mechanical geometry may require retuning.

The firmware itself is intentionally preserved unchanged in this repository cleanup.
