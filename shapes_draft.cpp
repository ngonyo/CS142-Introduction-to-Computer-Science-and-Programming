// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// ngonyo

// Preprocessor
#include <iostream>

// Tells C++ where to begin...
int main()
{	
	int squareLength(0);
	int rectangleLength(0);
	int rectangleHeight(0);
	int triangleHeight(0);
	int triangleLength(0);
	int squareArea(0);
	int rectangleArea(0);
	int triangleArea(0);

	std::cout << "Welcome to the Area Calculation Program." <<std::endl;

	std::cout << "Please Enter Length of Square." <<std::endl;
	std::cin >> squareLength;
	
	std::cout << "Please Enter Length of Rectangle." <<std::endl;
	std::cin >> rectangleLength;

	std::cout << "Please Enter Height of Rectangle." <<std::endl;
	std::cin >> rectangleHeight;

	std::cout << "Please Enter Length of Triangle." <<std::endl;
	std::cin >> triangleLength;

	std::cout << "Please Enter Height of Triangle." <<std::endl;
	std::cin >> triangleHeight;

	squareArea = squareLength * squareLength;
	rectangleArea = rectangleHeight * rectangleLength;
	triangleArea = triangleHeight * triangleLength;

	std::cout << "\nArea of Square is: " << squareArea << std::endl;
	std::cout << "\nArea of Rectangle is: " << rectangleArea << std::endl;
	std::cout << "\nArea of Triangle is: " << triangleArea << std::endl;



	return 0;
}