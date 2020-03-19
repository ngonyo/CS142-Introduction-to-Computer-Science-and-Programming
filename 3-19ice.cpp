#include <iostream>
int main()
{
	int base (0), height (0);
	double area(0);

	std::cout << "please enter base" << std::endl;
	std::cin >> base >> std::endl;

	std::cout << "please enter height" << std::endl;
	std::cin >> height >> std::endl;

	area = triangleArea(base, height);

	std::cout << "area of triangle is: " << area << std::endl;
}


double triangleArea(int length, int width)
{
	// Function Body
	double Area(0);
	
	area = length * width * 0.5;
	
	return area;	
}