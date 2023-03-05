#include <cstring>
#include <iostream>

int main()
{
	std::string kak{ "kak" };
	std::string valid{ 'z' };
	for (int i = 0; i < 3; i++)
	{
		if (kak.find(valid) == std::string::npos)
		{
			std::cout << "ioawfioaewo'aebf'awln";
		}
	}

	

}