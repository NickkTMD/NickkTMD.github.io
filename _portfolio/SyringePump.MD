---
title: "Syringe Pump"
excerpt: "A 1 kg/hr pellet extruder and 1 cubic meter build envelope for printing furniture."
header:
  image: /assets/img/syringe_pump_header.png
  teaser: /assets/img/syringe_pump.png
gallery:
  - image_path: assets/img/syringe_pump_2.png
  - image_path: assets/img/syringe_pump.png
   
---

# Syringe Pump Project - DF-2100

## Purpose/Features of the Design

The Syringe Pump design aims to provide a precise and consistent method for delivering fluids in a controlled manner. Its key features include:
- Adjustable flow rate
- Compatibility with various syringe sizes
- User-friendly interface
- Safety mechanisms to prevent over-pressurization

## Off-the-Shelf Parts Required

| Part Number | Description                    | Quantity | Supplier Link   |
|-------------|--------------------------------|----------|-----------------|
| OSP-001     | DC Motor with Encoder           | 1        | [Link](#)       |
| OSP-002     | LCD Display 16x2               | 1        | [Link](#)       |
| OSP-003     | Syringe Mount Bracket          | 1        | [Link](#)       |
| OSP-004     | Push Buttons                   | 3        | [Link](#)       |
| ...         | ...                            | ...      | ...             |

## 3D Printed Parts Required

| Part Name           | Description              | Material    | Quantity |
|---------------------|--------------------------|-------------|----------|
| 3DP-001             | Motor Mount Bracket      | PLA         | 1        |
| 3DP-002             | Syringe Holder           | PLA         | 1        |
| 3DP-003             | Button Enclosure         | ABS         | 1        |
| ...                 | ...                      | ...         | ...      |

## Arduino Code

The Arduino code for this project can be accessed here: [Syringe Pump Arduino Code](/assets/syringe_pump_code.ino).

## Fusion 360 Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ed22154bff88b5cc3?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Operating the Pump

1. **Setup:** Securely attach the syringe into the holder, ensuring the tip is connected to the desired delivery tubing.
2. **Power Up:** Turn on the device using the main power switch.
3. **Flow Rate:** Navigate the LCD menu using the push buttons to set the desired flow rate.
4. **Start:** Once settings are configured, press the 'Start' button.
5. **Monitor:** The LCD display will showcase the current status, flow rate, and any potential errors.
6. **Shutdown:** Press and hold the 'Stop' button to halt operations. Always ensure the device is turned off after use.

{% include gallery caption="Large Format 3D Printer Gallery" %}
