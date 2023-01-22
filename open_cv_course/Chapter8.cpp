#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* IMAGES */
//void main() {
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//
//	// Load the cascade classifier
//	CascadeClassifier faceCascade;
//	faceCascade.load("Resources/haarcascade_frontalface_default.xml");
//
//	// Check that the cascade classifier is loaded
//	if (faceCascade.empty()) {
//		cout << "XML file not loaded" << endl;
//	}
//
//	// Detect faces
//	vector<Rect> faces;
//	faceCascade.detectMultiScale(img, faces, 1.1, 10);
//
//	// Draw rectangles around the faces
//	for (int i = 0; i < faces.size(); ++i) {
//		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
//	}
//	
//	imshow("Image", img);
//	waitKey(0);
//}