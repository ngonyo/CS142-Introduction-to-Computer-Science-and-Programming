#include <iostream>


int main()
{
int count (1000000);
std::cout << count << std::endl;

	while (count>0)
	{
		if (count %2 == 1)	
		{
			std::cout << count << std::endl;
		}	
		count = count-2;
	}
	
return 0;
}
