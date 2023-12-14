---
title: "Electric Skateboard Truck & Deck"
excerpt: "This skateboard is electric."
header:
  teaser: /assets/img/skateboard_tn.png
gallery:
  - image_path: assets/img/skateboard.png
  - image_path: assets/img/skateboard_2.png
   
---


## Project Overview

The goal of this project was to construct the truck and deck for an electric skateboard. With enough electric skateboards, it was though that we would be able to make a generous donation to the Vanderbilt run club, with the goal of sunsetting that sad endeavor by 2044. The truck was designed using generative design in Fusion 360 and printed using Selective Laser Sintering (SLS) in either Nylon 12 or aluminum alloy. The deck was designed to be printed in ABS using large filament 3d printing. All other parts were purchased.

# Skateboard Truck

## Fusion 360 Model

### Aluminum
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e9d65a4fac8881594?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


### Nylon
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6efe8b7133ae0bcd3e?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


## Images

{% include figure image_path="/assets/img/truck_render.png" caption="Render" %}
{% include figure image_path="/assets/img/skateboard_truck.jpg" caption="" %}
{% include figure image_path="/assets/img/skateboard_truck_2.jpg" caption="" %}


I didn't attach the generative design truck to the rest of the skateboard, mainly due to hubris and a soft spot in my heart that didn't wish to make other students feel bad about their design, but this is what ChatGPT says it would look like:

{% include figure image_path="/assets/img/ai_gen.png" caption="This was taken in the Digital Fabrication lab" %}


## Discussion

The creation of the truck was a great opportunity to pair powder bed fusion and generative design. This pairing allows for rapid iteration of high fidelity parts, which is revolutionizing the way manufacturing is being approached, particularly in high-stakes industries like aerospace and automotive.

### Overview

Powder bed fusion, a type of additive manufacturing, involves the use of a heat source (usually a laser, and electron beam, or a can of sunscreen and a lighter) to selectively melt and fuse material powder together. This technique allows for the creation of complex, high-strength, and lightweight parts. Generative design, on the other hand, is a design method that harnesses the power of computational algorithms to generate optimized structures and shapes based on specific constraints and requirements. In the case of Fusion360, geometries are modeled to either be preserved or kept clear, and required structural loads are specified. A design is the generated which meets the constraints. When combined, PBF and GD can create highly efficient and tailored components that were previously unimaginable.

### Applications in Aerospace

In the aerospace industry, the weight of components is a critical factor. Every gram saved can significantly impact fuel efficiency and performance. The integration of PBF and GD in this sector allows for the creation of parts that are not only lighter but also stronger and more reliable. For instance, GD can be used to develop complex geometries that maximize strength while minimizing material use. These designs can then be realized through PBF, creating components that are impossible to produce using traditional manufacturing methods. This approach is particularly useful in designing parts like turbine blades, structural components of aircraft, and satellite components, where the combination of lightweight and high strength is paramount.

GD also often allows for assemblies to be simplified into single parts. This creates less points of failure in the part, and reduces the number of parts that need to be assembled. This is particularly useful in aerospace, where every part needs to be assembled in a clean room, and every part is a potential point of failure.

Ultimately, when designing parts optimally, generative design makes more conceptual sense than standard design. When creating a part, the designer is trying to map inputs to outputs within some constraints. Their design is an attempt to do this, however in most cases the optimal answer will be an abstract design that is only really possible to create via computation.

### Automotive Industry Transformations

In the automotive industry, particularly in the realm of electric vehicles (EVs), the use of PBF and GD is equally transformative. The need for lighter, more efficient components is crucial in extending the range and performance of EVs. For example, GD can be employed to design lightweight yet robust chassis components or battery casings, which are then produced using PBF. This not only reduces the overall weight of the vehicle but also improves its efficiency and battery life. Furthermore, the ability to consolidate multiple parts into a single, complex component reduces assembly time and costs, a significant advantage in automotive manufacturing. Henry Ford was great and all, but now we're trying to just do it right the first time.

### Conclusion

The synergy between powder bed fusion and generative design is paving the way for innovative manufacturing solutions in industries where performance, efficiency, and precision are crucial. In aerospace, this pairing facilitates the creation of lighter, stronger components that contribute to fuel efficiency and safety. In the automotive sector, especially in the burgeoning field of electric vehicles, it enables the production of optimized parts that enhance vehicle performance and range. Educational projects like the electric longboard at Vanderbilt’s Wond’ry exemplify how these advanced technologies can be applied in practical settings, preparing the next generation of engineers and designers for the future of manufacturing.

# Longboard Deck

## Fusion 360 Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6efe4a4c8c3e9b43ea?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Simulation Results

{% include figure image_path="/assets/img/load_case.png" caption="Displacement" %}
{% include figure image_path="/assets/img/load_case_2.png" caption="Safety Factor" %}

## Design Description

Crafted through the cutting-edge capabilities of Fusion360's simulation tools, the longboard deck is a marvel of modern engineering and design. Starting with a carefully selected SVG, the deck's initial shape was born from precise scaling and extrusion, setting the stage for its distinctive silhouette. This digital inception was only the beginning of a meticulous process of creation, where each iteration brought with it a refinement of the deck's architecture.

With each cycle, the thickness and cutouts underwent a series of adjustments, driven by a rigorous application of simulation tools that scrutinized every aspect of the deck's durability and resilience. The goal was unwavering: to engineer a deck robust enough to support a 200-pound rider with absolute integrity. The simulations, intricate digital trials that tested the bounds of physics, were relentless, each one inching the design closer to its final form.

The result of these iterations was not just a deck, but a testament to the harmony of form and function. The safety factor, a quantifiable measure of the deck's ability to withstand stress, was pushed beyond the threshold of 1.0, ensuring a robust platform for riders. The culmination of this iterative design was a deck characterized by its strength and an impressive resistance to deformation, capping at a maximum of 6mm displacement even under the concentrated weight of a rider.

The final design of the deck emerged as a symphony of strength and flexibility, its contours and cutouts finalized not just for aesthetic appeal but for their contribution to the structural integrity of the board. This balance of form, function, and beauty marks the deck as a paragon of longboard engineering, ready to carve the streets with precision and grace, and to endure the trials of ride after ride.


## Scale Model Printed

I tried to print a scale model. Scaled it up 10x but it just started printing a block filling the entirety of the 3D printer. Just kidding, I'm just a washed up senior please don't fail me.

## Instructions
Be sure to add three 0's to all Gcode commands to account for the much larger volume of the large filament printer.