# CASA0016 Color Quality Checker

This is used for CASA0016 Making, Designing & Building Connected Sensor Systems coursework.
<div style="display: flex; align-items: center;">
  <img src="[img1.png](https://github.com/JY-SHENNNN/CASA0016/blob/main/src/image.png)" width="400">
</div>

<div>

  **Declaration:**
  * Code: contains the code for the color quality checker.
  * Model: contains the enclosure model of the color quality checker.
  * Note: contains the notes while during the development of the project.
  * src: contains the image source files.
</div>

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

<div style="text-align: center;">
  <img src="[flowchart.png](https://github.com/JY-SHENNNN/CASA0016/blob/main/src/flowchart.png)" width="200" height="450" alt="Flowchart">
</div>

    **Overflow Process:**
    1. Press the button to turn on the color sensor.  
    2. Place the sample color at the bottom of the sensor and press the button.  
    3. The NeoPixel lights up halfway.  
    4. Place the test color in the same way.  
    5. NeoPixel turns red or green (red indicates bad quality, green indicates good quality).  

<div style="text-align: center;">
  <img src="[circuit.png](https://github.com/JY-SHENNNN/CASA0016/blob/main/src/circuit.png)" width="400" alt="Flowchart">
</div>

2. draft the circuit with code
<div>

    **pin connections:**
    1. button - pin2
    2. S0 - pin3
    3. S1 - pin4
    4. S2 - pin5
    5. S3 - pin6
    6. OUT - pin7
    7. LED - pin8
    8. Neopixel - pin9
    9. GND - GND
    10. VCC - 5V

</div>    

3. test via printed color
4. encapsulate the whole circuit with enclosure
    The enclosure model is in the folder "EModel"
5. test again to ensure everything okay

# Reference
1. https://dfimg.dfrobot.com/enshop/image/data/SEN0101/TCS3200%20TCS3210.pdf
2. https://wiki.dfrobot.com/TCS3200_Color_Sensor__SKU_SEN0101_
3. https://doditsuprianto.blogspot.com/2018/09/tcs3200-color-sensor-fritzing-library.html package for fritzing TCS3200
4. https://github.com/adafruit/Fritzing-Library/blob/master/parts/Adafruit%20NeoPixel%20Stick.fzpz package for fritzing Neopixel8
