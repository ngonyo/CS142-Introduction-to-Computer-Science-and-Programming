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

//declaration of doubles

	double hamburgerQuantity(0);
	double cheeseburgerQuantity(0);
	double fryQuantity(0);
	double drinkQuantity(0);
	double cakeQuantity(0);
	double orderTotal(0);
	double order(0);
	double payment (0);

//do while statement for all menu choices EXCEPT 6 which opts to finish order. If user enters another number on menu, it will say invalid selection.
//body of do while statement keeps track of each menu item & amount ordered.
	
	do
	{
	std::cout << "Welcome to Ryan's Deli" "\n" <<std::endl;
	std::cout << "What would you like to order?" "\n" <<std::endl;
	std::cout << "1." "\t" "Hamburger" "\t" "1.50" <<std::endl;
	std::cout << "2." "\t" "Cheeseburger" "\t" "2.00" <<std::endl;
	std::cout << "3." "\t" "French Fries" "\t" "1.00" <<std::endl;
	std::cout << "4." "\t" "Soft Drink" "\t" "1.00" <<std::endl;
	std::cout << "5." "\t" "Piece of Cake" "\t" "1.25" <<std::endl;
	std::cout << "6." "\t" "Complete Order" <<std::endl;
	std::cout << "Please enter your selection" <<std::endl;
	std::cin >> order;
		if (order == 1)
		{
			hamburgerQuantity++;

		}
		else if (order == 2)
		{
			cheeseburgerQuantity++;
			
		}
		else if (order == 3)
		{
			fryQuantity++;
			
		}
		else if (order == 4)
		{
			drinkQuantity++;
			
		}
		else if (order == 5)
		{
			cakeQuantity++;
			
		}
		else if (order >6 || order<1)
		{
			std::cout << "Invalid Order Selection" << std::endl;

		}		

	} while (order != 6);

//Output when user opts to finish selection. Tells them amount of each item ordered.
	
	std::cout << "You have selected to complete your order." <<std::endl; 
	std::cout << "You have ordered " << hamburgerQuantity << " Hamburger(s)" <<std::endl;
	std::cout << "You have ordered " << cheeseburgerQuantity << " Cheeseburger(s)" <<std::endl;
	std::cout << "You have ordered " << fryQuantity << " Order(s) of French Fries" <<std::endl;
	std::cout << "You have ordered " << drinkQuantity << " Soft Drink(s)" <<std::endl;
	std::cout << "You have ordered " << cakeQuantity << " Slice(s) of cake" <<std::endl;

//Tells user order total based on amount of each item ordered * the price of each item.

	orderTotal = (hamburgerQuantity * 1.50) + (cheeseburgerQuantity * 2.00) + (fryQuantity * 1.00) + (drinkQuantity * 1.00) + (cakeQuantity * 1.25);
	std::cout << "Your total is: $" << orderTotal <<std::endl;

//Tells user to enter amount paid, stores input as payment.
	
	std::cout << "Enter amount tendered" << std::endl;
	std::cin >> payment;

//If they don't enter enough money, they will be prompted to enter an amount greater than or equal to their order total.
	
	while (payment < orderTotal)
	{
		std::cout << "You have not provided enough money to purchase your items!" << "\n" << "Please enter an amount equal to or greater than your total." << std::endl;
		std::cin >> payment;
	}

//Tells user change if present and thanks them.
	
	std::cout << "Your change is $" << (payment - orderTotal) << std::endl;
	std::cout << "Thank you! Enjoy your meal!" << std::endl;



return 0;

}








