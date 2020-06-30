/*********************************************************************
 * This file is distributed as part of the C++ port of the forked :/N0t3 APRIL tags
 * library
 *
 * Original author: Edwin Olson <ebolson@umich.edu>
 * C++ port and modifications: Matt Zucker <mzucker1@swarthmore.edu>
 * Wrapper modifications: Christian Koch <chipgad@gmail.com>
 ********************************************************************/


#include <iostream>
#include <stdio.h>
#include "CameraUtil.h"
#include <pose.h>
#include <cmath>


 //returns the supposed X value by inputing the traslation vector
 double getX(cv::Mat_<double> vector, double tagSize) {
     return vector[2][3] * tagSize / 2;
 }

 //returns the supposed Y value by inputing the traslation vector
 double getY(cv::Mat_<double> vector, double tagSize) {
     return vector[1][3] * tagSize / 2;
 }

 //returns the supposed Y value by inputing the traslation vector
 double getZ(cv::Mat_<double> vector, double tagSize) {
     return vector[0][3] * tagSize / 2;
 }
 

//returns the Yaw of the camera 
double getYaw(cv::Mat_<double> vector) {
    return atan(vector[1][0]/vector[0][0]);
 }

//returns the Pitch of the camera 
double getPitch(cv::Mat_<double> vector) {
    return atan(-vector[0][2]/ 
        sqrt(pow(vector[2][1], 2.0) + 
        pow(vector[2][2], 2.0)));
}


//returns the Roll of the camera 
double getRoll(cv::Mat_<double> vector) {
    return atan(vector[2][1]/vector[2][2]);
}



