#include <iostream>
#include <cv.h>
#include <highgui.h>

using namespace cv;
using namespace std;

int main(){
    Mat image;
    Vec3b val;

    image = imread("bolhas.png", CV_LOAD_IMAGE_GRAYSCALE);

    if(!image.data){
        cout << "não foi possível abrir bolhas.png"<< endl;
    }

    namedWindow("janela", WINDOW_AUTOSIZE);

    for(int i=200; i<210; i++){
        for(int j=10; j<200; j++){
            image.at<uchar>(i,j) = 0;
        }
    }

    imshow("janela", image);
    waitKey();

    image = imread("bolhas.png", CV_LOAD_IMAGE_COLOR);
    val[0] = 0;
    val[1] = 0;
    val[2] = 255;

    for(int i=200; i<210; i++){
        for(int j=10; j<200; j++){
            image.at<Vec3b>(i,j) = val;
        }
    }

    imshow("janela", image);
    waitKey();

    return 0;
}
