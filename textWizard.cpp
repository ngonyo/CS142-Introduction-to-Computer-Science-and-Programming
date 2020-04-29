// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// ngonyo

#include <iostream>
#include <string.h>

//function declaration/defenition
//void program (select);

void program(char select);
void backwardsWord(char input[], int size)
{
	char word;
	if(size < 2)
{
	return;
}
	else
	{
		char word;
		word = input[0];
		input[0] = input[size - 1];
		input[size - 1] = word;
		backwardsWord(input + 1, size - 1);
	}
}

int main()
{
//variables that will be used
	int size;
	char input[size];
	char select;

// printed statements
	std::cout << "Welcome to Nathan's Word Reversal Program" << std::endl;
	std::cout << std::endl;
	program (select);
do
{
	std::cout << "Do you wish to continue (Y or N)? ";
	std::cin >> select;
	std::cout << std::endl;
	if (select == 'N')
	{
		std::cout << "Thank you! Goodbye!" << std::endl << std::endl;
	}

	else if (select == 'Y')
	{
		program (select);
	}
	else
	{
	do
	{
	std::cout << "Invalid input. Enter Y or N: ";
	if (select == 'N')
{
	std::cout << "Thank you! Goodbye!";
}
	
}while (select =! 'Y'||'N');

}

}while (select == 'Y');

return 0;
}
void program (char select)
{
	int size(0);
	char input[size];
	std::cout << "Enter a word that is 100 characters or less: ";
	std::cin >> input;
	std::cout << std::endl;

//use strlen to find array size

	strlen(input);
	size = strlen(input);
	backwardsWord (input, size);
	std::cout << "Your word backwards is: ";
	std::cout << backwardsWord;
	std::cout << std::endl << std::endl;
}