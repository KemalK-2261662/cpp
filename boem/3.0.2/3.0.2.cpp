#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::cerr;

	const int size{ 3 };
	float arr[size]{};

	for (int i{}; i < size; i++)		//haal de lengtes op
	{
		cout << "Vul de lengte in: ";
		cin >> arr[i];
	}

	for (int i{}; i < size; i++)		//voeg de lengtes in de array
	{
		if (arr[i] < 0) 
		{
			cerr << "ERROR CODE 404: Negatieve lengte !!! \n";	//errorcode
			return 1;
		}
		arr[i] = arr[i] / 2.54 ;
	}
	for (int i{}; i < size; i++)	//print de lengtes
	{
		cout << arr[i] << "\n";
	}
	return 0;
}