// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// ngonyo
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

//function declaration to calculate grade
void calculateLetterGrade(double score, char letter);
int main()
{
	std::string name, fileName;
	//variables for grades
	char letter(0);
	double score(0);
	double gradeTotal(0);
	double grade(0);
	double gradeTotalA(0);
	double gradeTotalP(0);
	double gradeTotalM(0);
	double gradeTotalF(0);

	std::cout << "Welcome to Nathan's Grade Calulator!" << std::endl;
	std::cout << "Please enter the file you wish to open: ";
	std::cin >> fileName;
	std::cout << "Reading from file grades.txt..." << std::endl;
	std::cout << "Calculating grades..." << std::endl;
	//opens files
	std::ifstream inputFile(fileName.c_str());
	std::ofstream outputFile;
	//if statement after file is opened (input)
	if (inputFile.is_open())
	{
	do
	{
		outputFile.open("letterGrade.txt");
		std::cout << "Save to: letterGrade.txt "<< std::endl;
		outputFile << gradeTotal << calculateLetterGrade << std::endl;
		std::cout << "Score & Letter Grade written to file: letterGrade.txt" << std::endl;
	}	

	while(!inputFile.eof());
	}
	//calculate grade percentage
	for(int loopVariable = 0; loopVariable<6;loopVariable++)
	{
		inputFile >> grade;
		gradeTotal = gradeTotal + grade;
	}
	gradeTotalA= gradeTotal / 6;
	gradeTotalP = 90;
	gradeTotalM = 75;
	gradeTotalF = 90;
	gradeTotal = (gradeTotalA * .5) + (gradeTotalP * .1) + (gradeTotalM * .2) + (gradeTotalF * .2);
	score = gradeTotal;
	outputFile << gradeTotal;

	//call void function
	calculateLetterGrade (score, letter);
	outputFile << calculateLetterGrade;
	inputFile.close();
	outputFile.close();
	std::cout << "Thank you for using my program. good bye!" << std::endl;
	return 0;
}
//function defintion for calculating letter grade

void calculateLetterGrade(double score, char letter)
{
	char gradeL(0);
{
	if(score>=90 && score<=100)
	gradeL = 'A';
	else if(score>=80 && score<=89)	
	gradeL = 'B';
	else if(score>=70 && score<=79)
	gradeL = 'C';
	else if(score>=60 && score<=69)
	gradeL = 'D';
	else if(score>=0 && score<=59)
	gradeL = 'F';
};

}