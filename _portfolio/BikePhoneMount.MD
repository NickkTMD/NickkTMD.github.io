---
title: "Bike Phone Mount"
excerpt: "This bike phone mount lets you text and drive marginally more safely."
header:
  image: /assets/img/bike_phone_mount_tn.png
  teaser: /assets/img/bike_phone_mount_tn.png
gallery:
  - image_path: assets/img/bike_phone_mount.jpg
  - image_path: assets/img/bike_phone_mount_use.jpg
   
---

## Purpose/Features of the Design

The Bike Phone Mount allows a user to mount their phone to their bike either horizontally or vertically. This is ideal for
seeing directions, but can also be used for questionable leasure. 

## Top-Down Modeling

Top-down modeling is a CAD technique for designing assemblies with complex interdependencies and relationships between components. Components are designed and assembled at the same time, allowing dimensions from certain parts to be used when defining other parts. This also allows for global parameters to be created in a simplistic way.

Top Down modeling was leveraged in this design to ensure the various components fit together, and also to make sure the grip fit around the handlebar, and the case fit around a phone.

The large handlebar grip component was designed first. Dimensions for the grip were determined relative to a handlebar component in the same CAD assembly file. An opening for a screw was made in the large handlebar grip.

Next, the small handlebar grip component was made relative to the large one. This made it very easy to line everything up, such as the connecting axle and a concentric hole for a screw to connect the two.

Next, a slot was added for the large handlebar grip. The phone holder was then designed, such that it could slide into the previously created slot. Top down modeling allowed the slot and connector to be made relative to eachother such that they would fit together with proper clearance.

Last, a threaded rod on the phone case was added, and the nut that would screw into it to secure the phone was designed, again with the top down approach.

## Rationale Behind the Design

Many choices were made when creating this design, all of them made perfectly and with perfect information.

The choice of using a locking mechanism and a heat-set insert to connect to the handlebar allowed for a good mix of simplicity and security in the connection. The connection to the handlebar is secure, works with different sizes, and is easily reversible. 

The click-and-lock mechanism between the large and small handlebar grip components adds an extra layer of convenience, allowing users to quickly connect these parts without any tools or fasteners. 

The sliding mechanism was the easiest way to allow for secure attaching of the phone either vertically or horizontally. The simple yet secure nature is evidence of an incredible design.

Finally, using a threaded rod and a hexagon nut proved to be the simplest way to lock the phone in place. Adjustment is easy, but in theory simple and secure.

## Assembly Instructions

Assembling the phone holder is exceptionally straightforward:

Print the Components: 3D print the STL files for the phone holder components. Ensure that the printer settings match the chosen material (discussed later).

### Assembly:
a. Melt a heat set insert into the large handlebar grip component.

b. Attach the small handle bar grip component to the larger one by clicking the axel into the round slot.

c. If desired, screw the small handle bar grip component into the larger one. It can also be locked into place using the phone holder.

d. Slide the phone holder into the handle bar grip component.

e. Place the phone in the holder and lock it into place using the hexagon nut.

## Material Choice

PLA (Polylactic Acid) was chosen as the material for the phone holder case for several key reasons. PLA is first and foremost easy to print - its low printing temperature and minimal warping characteristics increase the odds of a smooth printing process.

Additionally, PLA is both durable and lightweight, which are critical attributes for a bike or scooter accessory. It can withstand outdoor conditions, including exposure to sunlight and moisture, without significant degradation.

PLA was chosen mainly over ABS (Acrylonitrile Butadiene Styrene). In comparison to ABS, PLA offers a few properties that make it a more attractive choice. PLA is known for its ease of printing, with a lower printing temperature and minimal warping. This increase in printability makes it more user-friendly to the millions that will print this case, especially for those new to 3D printing (not me). PLA is also better for the environemnt, which I definitely knew. While ABS can emit potentially harmful fumes during printing, PLA is non-toxic and odor-free, ensuring a safer and more comfortable working environment.

PLA is also biodegradable and derived from renewable resources, while ABS is not biodegradable and thus has a larger environmental footprint. Additionally, PLA's lightweight yet durable nature strikes a balance between strength and minimal weight, ensuring the phone holder's robustness without adding unnecessary mass to the bike or scooter.

## Fusion 360 Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ede98467f27378fdb?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Gallery" %}
