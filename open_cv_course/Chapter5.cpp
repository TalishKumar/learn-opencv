#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* WARP IMAGES */


//float w = 250, h = 350;
//Mat matrix, imgWarpKingOfSpades, imgWarpQueenOfHearts, imgWarpJackOfClubs, imgWarpNineOfDiamonds;
//
//void main() {
//
//	string path = "Resources/cards.jpg";
//	Mat img = imread(path);
//
//	// Source points
//	Point2f srcKingOfSpades[4] = { {529, 142}, {771, 190}, {405, 395}, {674, 457} };
//	Point2f dstKingOfSpades[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };
//	
//	Point2f srcQueenOfHearts[4] = { { 64, 326 }, { 337, 280 }, { 91, 633 }, { 401, 571 } };
//	Point2f dstQueenOfHearts[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };
//
//	Point2f srcJackOfClubs[4] = { { 778, 108 }, { 1018, 85 }, { 845, 357 }, { 1114, 330 } };
//	Point2f dstJackOfClubs[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };
//
//	Point2f srcNineOfDiamonds[4] = { {744, 385}, {1021, 438}, {649, 708}, {966, 780} };
//	Point2f dstNineOfDiamonds[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };
//	
//	// Transform points
//	matrix = getPerspectiveTransform(srcKingOfSpades, dstKingOfSpades);
//	warpPerspective(img, imgWarpKingOfSpades, matrix, Point(w, h));
//	
//	matrix = getPerspectiveTransform(srcQueenOfHearts, dstQueenOfHearts);
//	warpPerspective(img, imgWarpQueenOfHearts, matrix, Point(w, h));
//
//	matrix = getPerspectiveTransform(srcJackOfClubs, dstJackOfClubs);
//	warpPerspective(img, imgWarpJackOfClubs, matrix, Point(w, h));
//
//	matrix = getPerspectiveTransform(srcNineOfDiamonds, dstNineOfDiamonds);
//	warpPerspective(img, imgWarpNineOfDiamonds, matrix, Point(w, h));
//
//	// Draw points
//	for (int i = 0; i < 4; ++i) {
//		circle(img, srcKingOfSpades[i], 10, Scalar(0, 69, 255), FILLED);
//		circle(img, srcQueenOfHearts[i], 10, Scalar(0, 69, 255), FILLED);
//		circle(img, srcJackOfClubs[i], 10, Scalar(0, 69, 255), FILLED);
//		circle(img, srcNineOfDiamonds[i], 10, Scalar(0, 69, 255), FILLED);
//	}
//	
//	// Display images
//	imshow("Image", img);
//	imshow("Image Warp King Of Spades", imgWarpKingOfSpades);
//	imshow("Image Warp Queen Of Hearts", imgWarpQueenOfHearts);
//	imshow("Image Warp Jack Of Clubs", imgWarpJackOfClubs);
//	imshow("Image Warp Nine Of Diamonds", imgWarpNineOfDiamonds);
//	waitKey(0);
//}