# Using base64 encoding
# https://www.tenminutetutor.com/data-formats/binary-encoding/base64-encoding/
import base64
import csv
import os
def encoder(s):
    data = open(s, "r").read()
    encoded = base64.b64encode(data)
    with open("EncodedData.txt", 'w') as f:
        f.write(encoded)
    # prevent double storage
    os.remove(s)

def decoder(s): 
    data = open("EncodedData.txt", "r").read()
    decoded = base64.b64decode(data)
    with open(s, 'w') as f:
        f.write(decoded)
    os.remove("EncodedData.txt")

def run():
    i = int(input("Encode(1) or Decode(2)"))
    if i == 1:
        encoder("/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task C/DATA.csv")
    else:
        decoder("/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task C/DATA.csv")

run()