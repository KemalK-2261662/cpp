#include <iostream>
#include "Date.h"

int main()
{
	using std::cout;

	Date date{};

	cout << "Datum van vandaag is " << date.dag() << " / " << date.maand() << " / " << date.jaar();

	date.setdate(27, 03, 2023);

	cout << "\nDe date gaat door op " << date.dag() << " / " << date.maand() << " / " << date.jaar();
}