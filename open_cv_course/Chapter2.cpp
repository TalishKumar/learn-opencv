#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* IMAGES */
//void main() {
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//	Mat imgGray;
//	Mat imgBlur;
//	Mat imgCanny;
//	Mat imgDia;
//	Mat imgErode;
//	
//
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);
//	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
//	Canny(imgBlur, imgCanny, 25, 75);
//
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//	dilate(imgCanny, imgDia, kernel);
//	erode(imgDia, imgErode, kernel);
//	
//	imshow("Image", img);
//	imshow("Image Gray", imgGray);
//	imshow("Image Blur", imgBlur);
//	imshow("Image Canny", imgCanny);
//	imshow("Image Dilation", imgDia);
//	imshow("Image Erode", imgErode);
//	waitKey(0);
//}