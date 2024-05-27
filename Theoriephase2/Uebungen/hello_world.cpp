#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
auto main() -> int{
    cv::Mat output = cv::Mat::zeros(120,350, CV_8UC3);
    cv::putText(output,"Hello World)", cv::Point(15,70), cv::FONT_HERSHEY_PLAIN, 3,cv::Scalar(0, 255, 0), 4);
    cv::imwrite(std::string(OUTPATH)+"/opencv_hello.jpg",output);
}