//poes.h

cv::Mat_<double> getX(cv::Mat_<double> v, double tagSize);
cv::Mat_<double> getY(cv::Mat_<double> v, double tagSize);
cv::Mat_<double> getZ(cv::Mat_<double> v, double tagSize);
double getRoll(cv::Mat_<double> v);
double getPitch(cv::Mat_<double> v);
double getYaw(cv::Mat_<double> v);
