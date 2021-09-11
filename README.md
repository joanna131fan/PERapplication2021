# PERapplication2021

## Task A & B
This supposes you have OpenCV installed on your device.
On Mac, open TaskA.cpp on XCode. 
Modify:
- Change path to the location of the PPM images on your device.
- Change imwrite path.
- Make sure in to have the Edit Scheme on XCode updated to your custom working directory.

### Run TaskA.cpp!
The original image and the filtered image should be displayed and also saved onto your device.
Justification for HSL cutoffs: using a trackbar, I tested the range of neon orange that best satisfied all test cases. Since the hue, saturation, and luminance of the cones differed from picture to picture, the cutoffs I chose were able to satisfy the cones in all sorts of lighting. This meant finding an "average" that in some cases led to closely colored objects to also be highlighted but to a somewhat unrecognizable degree.

## Task C
Modify:
- Change path of CSV file

The data format encoding I chose was Base64 mainly because after an extensive session of Googling I have come to the conclusion that it uses a relatively larger character set to achieve a more efficient encoding. The algorithm is more complex than hex encoding, but the data size is only increased by 33%, which is good for space efficiency. I'm sure there are many better methods of encoding and decoding the given file, and I hope that by joining the team I will be able to learn about them and apply them to the software of the electric car.

### Run TaskC.py
Run in terminal by calling ` python TaskC.py `.
A prompt will appear asking you if you want to encode or decode the file. First encode, then decode. Each time, it deletes the unused data format to save space (i.e. encoding would delete the CSV file and vis versa).
