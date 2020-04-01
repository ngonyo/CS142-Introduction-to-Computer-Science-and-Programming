// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// ngonyo

#include <iostream>
// C Standard Library
#include <cstdlib>
//function declaration
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

double modulus(int x, int y);
int main()
{
	std::cout << "Welcome to the Calculator\n" << std::endl;
	//variables that will be used
	int selection(0);
	double x(0);
	double y(0);
	double answer1(0);
	double answer2(0);
	double answer3(0);
	double answer4(0);
	double answer5(0);
	int rnum1(0);
//create do while loop used for switch selection
do {
//menu / list of functions
	std::cout << "1. Addition (x+y)" << std::endl;
	std::cout << "2. Subtraction (x-y)" << std::endl;
	std::cout << "3. Multiplication (x*y)" << std::endl;
	std::cout << "4. Division (x/y)" << std::endl;
	std::cout << "5. Modulus (x%y)" << std::endl;
	std::cout << "6. Surprise Me" << std::endl;
	std::cout << "7. Quit Program\n" << std::endl;
	std::cout << "Please enter your choice: ";
	std::cin >> selection;
	std::cout << std::endl;
	//use of switches for loop
	switch(selection)
{
	case 1:
		std::cout << "Please enter a value: ";
		std::cin >> x;
		std::cout << "Please enter another value: ";
		std::cin >> y;
		std::cout << std::endl;
		answer1 = add(x, y);
		std::cout << "Answer: " << answer1 << std::endl;
		std::cout << std::endl;
	break;
	case 2:
		std::cout << "Please enter a value: ";
		std::cin >> x;
		std::cout << "Please enter another value: ";
		std::cin >> y;
		std::cout << std::endl;
		answer2 = subtract(x, y);
		std::cout << "Answer: " << answer2 << std::endl;
		std::cout << std::endl;
	break;
	case 3:
		std::cout << "Please enter a value: ";
		std::cin >> x;
		std::cout << "Please enter another value: ";
		std::cin >> y;
		std::cout << std::endl;
		answer3 = multiply(x, y);
		std::cout << "Answer: " << answer3 << std::endl;
		std::cout << std::endl;
	break;
	case 4:
		std::cout << "Please enter a value: ";
		std::cin >> x;
		std::cout << "Please enter another value: ";
		std::cin >> y;
		std::cout << std::endl;
		answer4 = divide(x, y);
		std::cout << "Answer: " << answer4 << std::endl;
		std::cout << std::endl;
//create if statement for 0 in denominator
	if (y == 0)
	{
		std::cout << "The denominator cannot be 0! Please enter a non-zero value: ";
		std::cin >> y;
		answer4 = divide(x, y);
		std::cout << "Answer: " << answer4 << std::endl;
		std::cout << std::endl;
	}
	break;
	case 5:
		std::cout << "Please enter a value: ";
		std::cin >> x;
		std::cout << "Please enter another value: ";
		std::cin >> y;
		std::cout << std::endl;
		answer5 = modulus(x, y);
		std::cout << "Answer: " << answer5 << std::endl;
		std::cout << std::endl;
//create if statement for 0 in denominator (results in invalid output)
	if (y == 0)
	{
		std::cout << "The denominator cannot be 0! Please enter a non-zero value: ";
		std::cin >> y;
		answer5 = modulus(x, y);
		std::cout << "Answer: " << answer5 << std::endl;
		std::cout << std::endl;
	}
	break;
//random function choice
	case 6:
	{
		int rnum1(0);
		// Seeding the Random Number Generator
		srand((unsigned) time(0));	
		// Value of time() - this is the system time on Thomas in (ms).
		//std::cout << "Time: " << time(0) << std::endl;
		// Generates a random number between 1 and 10.
		rnum1 = (rand() % 5) + 1;
		// What the rand() function returns...	
		//std::cout << "Rand(): " << rand() << std::endl;	
		std::cout << "Random Selection is " << rnum1 << std::endl;
		selection = rnum1;
	}
						
	break;	
// to end program
	case 7:
		std::cout << "Thank you for using my calculator - goodbye!" << std::endl;
		std::cout << std::endl;
	break;
	default:
		std::cout << "Invalid Entry - please select a valid option!\n" << std::endl;
	break;
	}
	
}

while (selection != 7);
return 0;
}
	//fucntion definitions
	double add(double x, double y)
{
	double answer1(0);
	answer1 = (x + y);
	return answer1;
}
	double subtract(double x, double y)
{
	double answer2(0);
	answer2 = (x - y);
	return answer2;
}
	double multiply(double x, double y)
{
	double answer3(0);
	answer3 = (x * y);
	return answer3;
}
	double divide(double x, double y)
{
	double answer4(0);
	answer4 = (x / y);
	return answer4;
}
	double modulus(int x, int y)
{
	double answer5(0);
	answer5 = (x % y);
	return answer5;
}