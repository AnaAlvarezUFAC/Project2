/*Ana Beatriz
P3
3 2
255

255 0 0
0 255 0
0 0 255
255 255 0
255 255 255
0 0 0
*/
#include <iostream>
#include <fstream> //read and write images

using namespace std;

int main() {

	//Create image
	std::ofstream image;
	image.open("./images/RGB.ppm");
	if (image.is_open()) {
		//Header
		image << "P3" << endl;
		image << "3 2" << endl;
		image << "255" << endl;
		//Image body
		// 
		image << "255 0 0" << endl; // Blue
		image << "0 255 0" << endl; // Green
		image << "0 0 255" << endl; // Blue
		image << "255 255 0" << endl; //Yellow
		image << "255 255 255" << endl; //White
		image << "0 0 0" << endl; //Black
	}
	image.close();

	return 0;
}

