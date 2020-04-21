// Your First C++ Program

#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    
    unsigned char img_data[] = {
	// first row, 4 colored pixels
	0, 0, 0,
	255, 0, 0,
	0, 0, 0 ,
	0, 255, 0,

	// second row, 4 colored pixels
	0, 0, 255,
	0, 0, 0,
	255, 0, 255,
	0, 0, 0
    };

    unsigned char * img_data_ptr = (unsigned char*) &img_data;

    cv::Mat img(2, 4, CV_8UC3, img_data_ptr);
    cv::cvtColor(img, img, cv::COLOR_BGR2RGB);
    cv::imwrite("/out/myimage.png", img);

    std::cout << "Image written!\n";

    return 0;
}
