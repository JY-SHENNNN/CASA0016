# CASA0016 Color Quality Checker

This is used for CASA0016 Making, Designing & Building Connected Sensor Systems coursework.

# Introduction
Aims to produce the color quality checker, by using the color sensor to get the sample color and the test color. Through the calculation of RGB value difference to measure the difference between the two color. 
Once the difference is in certain range (e.g. smaller than 10), it means the tested-color quality is good and vice versa.
* Sample color: The expected color to print
* Test color: The color printed by the printer

# Motivation
  * Sometimes I get the sample color that I want exactly same color to print out. I am not able to enter the RGB value for the standard, but pick the roughly same color. After printing it out, I can check if they are the same or in small difference.
  * Sometimes I buy the exactly same products, but have color difference on the package. Even though they are the same product, I still feel that the quality is not the same. My guess is that it's a printing problem, which can be avoided if the color quality is checked before batch printing。
  * Let's say there is a house wall that is being spray-painted, and I choose the appropriate material and color in the catalogue, and I want it to appear on my wall. After the workers are finished, I need to check them, and using a color quality checker can help me find the problem

# Equipment
  * Arduino uno
  * color sensor TCS3200, Neopixel
  * breadboard, jumpwire
  * button

# Deliveries
1. sketch the overflow: press the button to turn on the color sensor -> put sample color to the bottom of the sensor and press the button -> the neopixel turns on the half light -> put test color in a same way -> neopixel turns red or green. (red means bad quality, green means good quality)
2. draft the circuit with code
3. test
4. encapsulate the whole circuit with enclosure
5. test again to ensure everything okay

