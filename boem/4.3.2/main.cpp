#include <iostream>
#include "Header.h"

int main()
{
	using std::cout;

	Date Date{ 11,12,2002 }; //geeft waardes aan private

	cout << "Datum van vandaag is " << Date.dag() << " / " << Date.maand() << " / " << Date.jaar();

	Date.setdate(27, 03, 2023);

	cout << "\nDe date gaat door op " << Date.dag() << " / " << Date.maand() << " / " << Date.jaar();
}