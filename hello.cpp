// Your First C++ Program

#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    
    unsigned char img_data[] = {
        0, 255, 0, 255, 
        255, 0, 255, 0
    };

    unsigned char * img_data_ptr = (unsigned char*) &img_data;

    cv::Mat img(2, 4, CV_8UC1, img_data_ptr);
    cv::imwrite("/out/myimage.png", img);

    std::cout << "Image written!\n";

    return 0;
}
