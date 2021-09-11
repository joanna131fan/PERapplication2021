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

The data format encoding I chose was Base64 mainly because after an extensive session of Googling I have come to the conclusion that it uses a relatively larger character set to achieve a more efficient encoding. The algorithm is more complex than hex encoding, but the data size is only increased by 33%, which is good for space efficiency. I'm sure there are many better methods of encoding and decoding the given file, and I hope that by joining the team I will be able to learn about them and apply them to the software of the electric car. During my research session, I also came across bit rotation and bit shifting which seem much more efficient and advanced. I hope to learn to implement them in the future to be able to write the encoding/decoding from scratch.

### Run TaskC.py
Run in terminal by calling ` python TaskC.py `.
A prompt will appear asking you if you want to encode or decode the file. First encode, then decode. Each time, it deletes the unused data format to save space (i.e. encoding would delete the CSV file and vis versa).

Reflection:
Before this, my programming experience was mainly from USACO and algorithms on Leetcode and to some extent smaller side projects (i.e. web applications and computational modeling) that required very little of the knowledge required for this application. I have only heard the terms encoding and decoding, but actually spending the time to research about it, I discovered that although there definitely is a learning curve it's something I am willing to spend time on until I feel confident to contribute to building an electric car. Through this application, I also got to research machine vision and the way I was able to gain first-hand experience with manipulating images. Although this application took me 15+ hours and was very challenging, it pushed me to learn and use my tools (i.e. Google) to find answers to my problems. If I am invited to join PER, I hope to learn even more and help the team accomplish its goals for this year in its software development as well as helping defining a trajectory for future endeavors! One thing I'm the most excited about is to gain hands-on experience in automation. I'm very curious about it and hope that by being a part of a team, it will give me an incentive to problem-solve and thing outside the box while creating and watching the car be built from scratch and brainpower.
