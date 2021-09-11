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


  using namespace cv;
  using namespace std;

/// COLOR DETECTION

  int main() {
      
      Mat imgHSL, mask;
      int hmin = 0, smin = 90, lmin = 102;
      int hmax = 18, smax = 250, lmax = 255;
      
      string path = "/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task B/traffic-cones-5.ppm";
      Mat img = imread(path);
//      load_ppm(img, path);
      cvtColor(img, imgHSL, COLOR_BGR2HLS); // convert picture to HSL
      
      /// For Testing Ranges of Hue, Saturation, and Luminance for all 4 test cases
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
          
          imshow("Image", img);
//          imshow("Image HSL", imgHSL);
          imshow("Image Mask", mask);
          imwrite("/Users/joannafan/Desktop/C++/OpenCVCourse/OpenCVCourse/Resources/Task B/TC5.png", mask);
          waitKey(5); // wait for 5 ms
//          cout << "H: " << hmin << "," << hmax << endl;
//          cout << "S: " << smin << "," << smax << endl;
//          cout << "L: " << lmin << "," << lmax << endl;
      }
  }



