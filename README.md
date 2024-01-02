# Hybrid Walk and Roll QuadRuped Robot

- Essential parts
  | Part name           | Description                          |  Qty     |
  |---------------------|--------------------------------------|-----------|
  | ESP32 LOLIN32       | cpu                                  | 1         |
  | PCA9658 module      | servo motor controller               | 1         |
  | SPT5430HV-180W 8.4V | HV servo motor                       | 12        |
  | L298N module        | motor driver module                  | 2         |
  | TT gear motor       | DC motor                             | 4         |
  | DC-DC buck converter| 7V-28V to 5V 3A                      | 1         |
  | 1S3P 18650 battery  | lithium ion battery                  | 2         |
  | WS2812 RGB LED      | RGB LED for eyes                     | 2         |
  | Round Rocker Switch | Switch with LED                      | 1         |

- Optional parts
  | Part name           | Description                          |  Qty     |
  |---------------------|--------------------------------------|-----------|
  | HX-2S-JH20          | lithium ion 2S charger               | 1         |
  | PDC004-PD 9V        | usb-c PD decoy module                | 1         |
  | STPS2045C           | power shottky rectifier              | 1         |
  | battery indicator   | Lithium Battery Capacity Indicator   | 1         |
<br><br>

Robot control with BLE(bluetooth le) joystick
  | key        |    control    |  key      |  control          |
  |----------- |---------------|-----------|-------------------|
  | **A**      | walk / stop   | **L2+L1** | step interval-    |
  | **B**      | gait change   | **L2+R1** | step interval+    |
  | **X**      | balance mode  | **L2+X**  | step height-      |
  | **Y**      | flash ledstrip| **L2+Y**  | step height+      |
  | **THUMB-L**| save settings | **L2+A**  | step dist-        |
  | **THUMB-R**| load settings | **L2+B**  | step dist+        |
  | **DPAD-L** | toe offset-   | **R2+L1** | toe offset-       |
  | **DPAD-R** | toe offset+   | **R2+R1** | toe offset+       |

----
# Reference
  - This is a modified project
  - Special thanks to
  - PingguSoft for walking code<br>
    [](https://github.com/PingguSoft/esp32_quadruped.git)
  - for IK model<br>
    [12-DOF Quadrupedal Robot: InverseKinematics by Adham Elarabawy](https://www.adham-e.dev/pdf/IK_Model.pdf)
  - Kangal cad files<br>
    [Diy quadruped robot by Baris ALP](https://grabcad.com/library/diy-quadruped-robot-1)
  - SpotMicro cad files<br>
    [User Fran Ferri models](https://gitlab.com/public-open-source/spotmicroai/3dprinting/-/tree/master/User%20Fran%20Ferri%20models)

