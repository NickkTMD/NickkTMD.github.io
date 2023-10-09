---
title: "Multi-Material Printable Pliers"
excerpt: "This pair of pliers maintains sentence structure while letting you pick up individual electrons."
header:
  teaser: /assets/img/printable_pliers_tn.png
gallery:
  - image_path: assets/img/printable_pliers_2.jpg
  - image_path: assets/img/printable_pliers.png
   
---

## Project Overview

The goal of this project was to use multi-material 3D printing to create a pair of pliers that can be used right off the print bed. That is, pliers that are a single, print-in-place part. Print-in-place parts are parts that don't require assembly, yet usually provide some functionality. This often takes the form of a multi-material print, or some print with small gaps that allow the part to move, like hinges or gears.

There are many great applications of print-in-place parts. That said, the best, and most historical, of course, is the classic ship in a bottle. Pioneered by Captain Edward Teach in the late 1550s, and printed originally using nothing but a bucket of chum and a sail-powered printer, ships in bottles quickly became one of the most awe-inspiring objects known to man. It was seen as particularly crazy by mainlanders, who were yet unaware of FFF printing. Nah I'm just kidding. It was the 1530s not the 1550s.

Really, print-in-place is great for anything that relies on mechanisms like hinges, gears, snap fits, etc. Further research shows some cool examples like a toothpaste squeezer and a really cute articulated sharks.

Multi-material print-in-place parts turn out most effectively for materials with similar physical properties. That said, they are usually more useful when the materials have some difference that allows the part to function in a specific way. For example, TPU is much more flexible than PLA, which makes it perfect as the spring of the pliers, but their physical properties are different enough that the connective tissue between materials needs to be designed a specific way to ensure they stay connected.

## Iterations

This project only required only two iterations. Scale is unclear in the picture, but iteration 1 is about 50% bigger.

<!-- Include specific image -->
{% include figure image_path="/assets/img/printable_pliers_2.jpg" caption="Version 1" %}
{% include figure image_path="/assets/img/printable_pliers.png" caption="Version 2 (Final)" %}

## Fusion 360 Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e4986c4c9459cbf54?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Design Details

The design is relatively straight-forward. It contains a TPU spring in the center, which is attached to four pieces of PLA: the two handles and the two claws.

The TPU is connected to the PLA via dove-tail connections to make sure the materials bond well. The PLA is offset a bit from the corners of the TPU square such that it can bend without them colliding. The TPU is 1.35mm thick, which was found to be a good width for optimal flexibility.

The PLA handles include a honeycomb pattern both to reduce print time and to look cool.

One downside of the design is that the claws of the pliers grab at a point rather than along a line/axis. This could easily be corrected, but was not worth doing during the span of the class project due to the timeline, other obligations, and others' need to use the printer.

## Specifications

The jaw length of the pliers is 30mm. The height is 11mm, and the depth is 7mm. 

I am not sure the jaw capacity of the pliers. I tried to lift myself into the air with them while sitting on my chair, but I could not. Rats.

## Print Settings

Print settings can be downloaded
<!-- link to assets/print_settings -->
[here](/assets/print_settings/pliers.ini).