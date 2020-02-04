#include <iostream>


int main()
{

	int grade(0);
	std::cout << "Please Enter Grade" << std::endl;
	std::cin >> grade;
	
if (grade >= 90)
{
	grade = 'A';
}
if (grade >= 80 && grade < 90)
{
	grade = 'B';
}
if (grade >= 70 && grade < 80)
{
	grade = 'C';
}
if (grade >= 60 && grade < 70)
{
	grade = 'D';
}
else
{
	grade = 'F';
}
}
