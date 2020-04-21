// Your First C++ Program

#include <iostream>
#include <cv.h>

int main() {
    
    unsigned char img_data = {
        0, 255, 0, 255, 
        255, 0, 255, 0
    };

    unsigned char * img_data_ptr = &img_data;

    cv::Mat img(2, 4, CV_8UC1, img_data_ptr);
    imwrite(img, "out/myimage.png")

    std::cout << "Image written!\n";

    return 0;
}
