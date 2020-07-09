#include <iostream>
#include <stdio.h>
#include "CameraUtil.h"
#include <pose.h>
#include <cmath>
#include "TagDetector.h"

TagDetectionArray detections;

/*
double X = m[2][3];
double Y = m[0][3];
double Z = m[1][3];
*/

class TagBuddles {
public:
    cv::Mat_<double> m;
    size_t id;

    TagBuddles(size_t t, cv::Mat_<double> l) {
        size_t id = t;
        cv::Mat_<double> m = l;
    }


    size_t getTagId() {
        return id;
    }

    size_t getClosetTag(){}

    cv::Mat_<double> getReletiveLocation(){}

    double getCenterOfMass() {}

};