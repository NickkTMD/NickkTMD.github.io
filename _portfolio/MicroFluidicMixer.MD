---
title: "Microfluidic Mixer"
excerpt: "This microfluidic mixer uses the power of true love to sidestep the traditional laws of fluid mechanics."
header:
  teaser: /assets/img/microfluidic_tn.png
gallery:
  - image_path: assets/img/microfluidic.png
  - image_path: assets/img/green.png
   
---

## Project Overview

The goal of this project was to construct a homogenous mixer microfluidic device to mix two unknown liquids. I kept asking Professor Florian why he needed so many devices to mix so many fluids, and what the fluids were, but he would just shoot me a stern look then continue on. I think he was trying to put lazy old laminar flow in its place.

Some applications of a homogenous microfluidic mixer include:
1. Mixing of reagents for chemical reactions
2. Mixing of blood samples for analysis
3. Mixing of fluids for drug delivery
4. Lab on a chip devices (think Elizabeth Holmes, we stan a queen)

### Design

The project was designed based on this paper: 
https://www.ncbi.nlm.nih.gov/pmc/articles/PMC3116190/pdf/ijms-12-03263.pdf
as well as research through ChatGPT. It was determined that a long path with many curves would be conducive to good mixing.

Dimensions of the channel were chosen based on the resolution of the printer. Smaller channels should theoretically lead to better mixing, as the different liquids will be closer to each other, but the channels can't get so small that the mold will be hard to print, or that they will be clogged when the PDMS is poured in. The channel dimensions shown in the instruction document were used as baselines to sanity check our design.

Vat photopolymerization was chosen for mold production due to its high resolution and precision, essential for the intricate channels and features of microfluidic devices. This method leverages a laser to cure photosensitive resin layer by layer, allowing for detailed and complex structures which are crucial in microfluidics. The primary limitation of this technique arises when using parylene as a coating material. Parylene, while providing a biocompatible and chemically resistant surface, can delaminate or poorly adhere to the resin surface due to the resin's surface properties. This issue necessitates careful surface preparation to ensure adequate adhesion.


## Instructions for how to go from the 3D printed mold to the final device.

## Creation Instructions

### 1. Print & Cure: 

Break into the Digital Fabrication lab, or obtain access to a Form 3 SLA printer, then print. 

Cleaning: Wash the printed mold in the Form Wash for 50 minutes, followed by a thorough rinse with isopropyl alcohol. Ensure a uniform sheen to confirm the removal of uncured resin.

Curing: Cure the mold with supports intact for 30 minutes at 60°C. Ensure no debris is on the mold before curing.

### 3. PDMS Casting:

Mix PDMS base and curing agent as per the manufacturer's instructions.
Pour the PDMS mixture into the mold and degas to remove air bubbles.
Cure the PDMS in an oven at the recommended temperature and time.

### 4. Demolding and Preparation:

Carefully remove the PDMS cast from the mold.
Trim any excess PDMS and ensure the surface that will bond to the glass slide is flat and clean.

### 5. Parylene Coating (Optional):

If there is any uncured resin, prepare the PDMS surface for coating and apply parylene using a specialized deposition system.

### 5. Parylene Coating (Not Optional This Time):

Now do it for real this time.

### 6. Plasma Bonding:

Treat both the PDMS device and the glass slide with plasma to activate the surfaces. Immediately after plasma treatment, align and bond the PDMS device to the glass slide, ensuring a tight and leak-free seal.

### 6b. Friendship Bonding:

Take a second to take a breath, be present, and make a new pal.

### 7. Final Inspection:

Inspect the bonded device for any leaks or defects.
Test the device with dye mixing experiments to assess performance.


## Fusion 360 Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e9f771756a987cd75?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



## Media

{% include figure image_path="/assets/img/microfluidic.png" caption="The Device In All Its Glory" %}
{% include figure image_path="/assets/img/green.png" caption="Undeniable Proof The Device Works" %}

<!-- EmbedYoutube video -->
<iframe width="560" height="315" src="https://www.youtube.com/embed/fZbXplY6SUI?si=EoMmTIVxFuYBaM3J" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>