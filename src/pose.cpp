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


 
 //returns the supposed X value by inputing the traslation vector
 cv::Mat_<double> getX(cv::Mat_<double> vector, double tagSize) {
     return vector.row(2).col(3) * tagSize/2;
 }

 //returns the supposed Y value by inputing the traslation vector
 cv::Mat_<double> getY(cv::Mat_<double> vector, double tagSize) {
     return vector.row(1).col(3) * tagSize / 2;
 }


 //returns the supposed Y value by inputing the traslation vector
 cv::Mat_<double> getZ(cv::Mat_<double> vector, double tagSize) {
     return vector.row(0).col(3) * tagSize / 2;
 }
 