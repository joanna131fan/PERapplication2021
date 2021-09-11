#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <typeinfo>


  using namespace cv;
  using namespace std;

/// COLOR DETECTION

  int main() {
      
      Mat imgHSL, mask, res;
      int hmin = 0, smin = 90, lmin = 102;
      int hmax = 18, smax = 250, lmax = 255;
      
      string path = "/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task A/traffic-cones-4.ppm";
      const char* fileName = "/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task A/traffic-cones-4.ppm";
      FILE* fr = fopen(fileName, "r");
      int height, width, ccv;
      char header[100];
      fscanf(fr, "%s %d %d %d", header, &width, &height, &ccv);
      
//      cout << "Magic Number: " << header << endl;
//      cout << "Width:" << width << endl;
//      cout << "Height:" << height << endl;
//      cout << "Maximum: " << ccv << endl;
      if(strcmp(header, "P3") != 0 && strcmp(header, "P6") != 0)
          return 0;
      
      Mat img = imread(path);
//      load_ppm(img, path);
      cvtColor(img, imgHSL, COLOR_BGR2HLS); // convert picture to HSL
      
      /// For Testing Ranges of Hue, Saturation, and Luminance for test cases
//      namedWindow("Trackbars");
//      createTrackbar("Hue Min", "Trackbars", &hmin, 179);
//      createTrackbar("Hue Max", "Trackbars", &hmax, 179);
//      createTrackbar("Sat Min", "Trackbars", &smin, 255);
//      createTrackbar("Sat Max", "Trackbars", &smax, 255);
//      createTrackbar("Lum Min", "Trackbars", &lmin, 255);
//      createTrackbar("Lum Max", "Trackbars", &lmax, 255);
      
      while(true) {

          Scalar lower(hmin, smin, lmin);
          Scalar upper(hmax, smax, lmax);
          inRange(imgHSL, lower, upper, mask);
          bitwise_and(img, img, res, mask);
          imshow("Image", img);
//          imshow("Image Mask", mask);
          imshow("Image Final", res);
//          imshow("Image HSL", imgHSL);
          imwrite("/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task A/TC4.ppm", res);
          waitKey(5); // wait for 5 ms
//          cout << "H: " << hmin << "," << hmax << endl;
//          cout << "S: " << smin << "," << smax << endl;
//          cout << "L: " << lmin << "," << lmax << endl;
      }
  }



