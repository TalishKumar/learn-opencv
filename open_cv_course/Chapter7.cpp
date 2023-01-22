#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

//using namespace cv;
//using namespace std;
//
//Mat imgGray;
//Mat imgBlur;
//Mat imgCanny;
//Mat imgDia;
//Mat imgErode;
//
//void getContours(Mat imgDia, Mat img) {
//	// Initialize contours
//	vector<vector<Point>> contours;
//	vector<Vec4i> hierarchy;
//
//	// Find contours
//	findContours(imgDia, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//
//	// For each contour, draw a rectangle
//	for (int i = 0; i < contours.size(); ++i) {
//		// Find the area of the contour
//		int area = contourArea(contours[i]);
//
//		// Holds the points of the contour
//		vector<vector<Point>> conPoly(contours.size());
//		
//		// Store the bounding rectangle of the contour
//		vector<Rect> boundRect(contours.size());
//		
//		// Object typ
//		string objectType;
//
//		// ONLY DRAW CONTOURS WITH AREA > 1000
//		if (area > 1000) {
//			float peri = arcLength(contours[i], true);
//			
//			// Approximate the number of points in the contour
//			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//			
//			boundRect[i] = boundingRect(conPoly[i]);
//
//			// Find out what shape it is by the number of points & draw a rectangle around it
//			int objCor = (int)conPoly[i].size();
//			if (objCor == 3) {
//				objectType = "Triangle";
//			}
//			else if (objCor == 4) {
//				// Check if it's a square or rectangle
//				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
//				if (aspRatio > 0.95 && aspRatio < 1.05) {
//					objectType = "Square";
//				}
//				else {
//					objectType = "Rectangle";
//				}
//			}
//			else if (objCor > 4) {
//				objectType = "Circle";
//			}
//
//			// Draw the contour and the rectangle around it & put the object type
//			drawContours(img, contours, i, Scalar(255, 0, 255), 2);
//			rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
//			putText(img, objectType, { boundRect[i].x, boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN, 1, Scalar(0, 69, 255), 1);
//		}
//	}
//}
//
///* IMAGES */
//void main() {
//	string path = "Resources/shapes.png";
//	Mat img = imread(path);
//
//	// Preprocessing
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);
//	GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
//	Canny(imgBlur, imgCanny, 25, 75);
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//	dilate(imgCanny, imgDia, kernel);
//
//	getContours(imgDia, img);
//	
//	imshow("Image", img);
//	imshow("Image Gray", imgGray);
//	imshow("Image Blur", imgBlur);
//	imshow("Image Canny", imgCanny);
//	imshow("Image Dilation", imgDia);
//	waitKey(0);
//}