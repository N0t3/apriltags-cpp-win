#include <iostream>
#include <stdio.h>
#include "CameraUtil.h"
#include <pose.h>
#include <cmath>


class TagBundlesParams {
public:
    //calls in the orentation matrix
    cv::Mat_<double> matrix;

    //tag id
    size_t id;
};


class TagBuddles {
    size_t id;
public:
    cv::Mat_<double> m;

    TagBuddles(size_t t, cv::Mat_<double> l) {
        size_t id = t;
        cv::Mat_<double> m = l;
    }

    double X = m[2][3];
    double Y = m[0][3];
    double Z = m[1][3]; 


};