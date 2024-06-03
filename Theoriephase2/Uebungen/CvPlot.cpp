#include "CvPlot/cvplot.h"
#define CVPLOT_HEADER_ONLY
#include "vector"
#include "string"
#include "utility"
int main(){
   auto axes = CvPlot::plot(std::vector<double>{ 3, 3, 4, 6, 4, 3 }, "-o");
cv::Mat mat = axes.render(300, 400);
 cv::imwrite(std::string("opencv_plot.png", mat);
return 0;
}
