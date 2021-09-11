# PERapplication2021

## Task A & B
This supposes you have OpenCV installed on your device.
On Mac, open TaskA.cpp on XCode. 
Modify:
- Change path to the location of the PPM images on your device.
- Change imwrite path.
- Make sure in Edit Scheme on XCode to have it updated to your custom working directory.

### Run TaskA.cpp!
The original image and the filtered image show be displayed and also saved onto your device.
Justification for HSL cutoffs: using a trackbar, I tested the range of neon orange that best satisfied all test cases. Since the hue, saturation, and luminance of the cones differed from picture to picture, the cutoffs I chose were able to satisfy the cones in all sorts of lighting. This meant finding an "average" that in some cases led to closely colored objects to also be highlighted but to a somewhat unrecognizable degree.

## Task C
Modify:
- Change path of CSV file
Run in terminal by calling ` python TaskC.py `.
A prompt will appear asking you if you want to encode or decode the file. First encode, then decode. Each time, it deletes the unused data format to save space (i.e. encoding would delete the CSV file and vis versa).
