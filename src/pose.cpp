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
    //std::cout <<"x = " << vector.row(2).col(3) << "\n";
    return vector[2][3];
}

//returns the supposed Y value by inputing the traslation vector
double getY(cv::Mat_<double> vector, double tagSize) {
    //  std::cout << "y = " << vector.row(0).col(3)<< "\n";
    return vector[0][3];
}


//returns the supposed Y value by inputing the traslation vector
double getZ(cv::Mat_<double> vector, double tagSize) {
    // std::cout << "z = " << vector.row(1).col(3)<< "\n";
    return vector[1][3];
}


//returns the Yaw(rotation around the camera's vertical axis) of the camera orientation in degrees
double getYaw(cv::Mat_<double> vector) {
    // std::cout <<"Yaw = " << atan(vector[1][0] / vector[0][0]) * (180.0 / 3.141592653589793238463) << "\n";
    return atan(vector[1][0] / vector[0][0]) * (180.0 / 3.141592653589793238463);
}

//returns the Pitch(rotation around the cameras side to side axis) of the camera orientation in degrees
double getPitch(cv::Mat_<double> vector) {
    //std::cout << "Pitch = " << atan(-vector[2][0] /sqrt(pow(vector[2][1], 2.0) + pow(vector[2][2], 2.0)))* (180.0 / 3.141592653589793238463) <<"\n";
    return atan(-vector[2][0] /
        sqrt(pow(vector[2][1], 2.0) +
            pow(vector[2][2], 2.0))) * (180.0 / 3.141592653589793238463);
}

//returns the Roll(rotation about the camera's fronnt to back axis) of the camera orientation in degrees
double getRoll(cv::Mat_<double> vector) {
    // std::cout << "Roll = " << atan(vector[2][1] / vector[2][2]) * (180.0 / 3.141592653589793238463) << "\n";
    return atan(vector[2][1] / vector[2][2]) * 
        (180.0 / 3.141592653589793238463);
}