#include <iostream>

// Tells C++ where to begin...
int main()
{	

	int q1answer(0);
	int q2answer(0);
	int q4answer(0);

	std::cout << "Welcome to the Monty C++." <<std::endl;
	std::string name;
	std::cout << "Please enter your name" <<std::endl;
	std::cin >> name;

	std::cout << "What is the answer to 2+2" <<std::endl;
	std::cin >> q1answer;

	if (q1answer == 4)
	{
		std::cout << "Correct " << name << "!" << std::endl;

		std::cout << "What is the answer to 15%2?" <<std::endl;
		std::cin >> q2answer;


		if (q2answer == 1)
		{
			std::cout << "Great job " << name << "!" << std::endl;

			std::string q3answer;
			std::cout << "What is your favorite color?" <<std::endl;
			std::cin >> q3answer;


			if (q3answer == "blue" || "Blue" )
			{
				std::cout << "Correct " << name << "." << std::endl;

				std::cout << "What is the airspeed velocity of an unladen swallow?" <<std::endl;
				std::cin >> q4answer;

				if (q4answer == 42)
				{
					std::cout << "I...I don't know that!...you have been cast into the gorge of enternal peril. also... you win! ";
					std::cout << "Thank you for playing " << name << "!" << "Intermission..." << std::endl;
				}
				else
				{
					std::cout << "nope nope nope...you have been cast into the gorge of enternal peril!" << std::endl;
				}

			}
			else
			{
				std::cout << "not even close...you have been cast into the gorge of enternal peril!" << std::endl;
			}
		}
		else
		{
			std::cout << "well that was disappointing...you have been cast into the gorge of enternal peril!" << std::endl;
		}
	}
	else
	{
		std::cout << "not quite...you have been cast into the gorge of enternal peril!" << std::endl;
	}
	
}