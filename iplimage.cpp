#include<iostream>
#include<opencv2/opencv.hpp>

int main(void){
	IplImage *img;
	img=cvLoadImage("image03303.png");
		//return -1;
	cvCircle(img,cvPoint(img->width/2,img->height/2),50,cvScalar(0,255,255),3,8);
	std::cout << "w:" << img->width << "h:"<< img->height << std::endl;
	cvShowImage("Window",img);
	cvWaitKey(0);
	return 0;
}



