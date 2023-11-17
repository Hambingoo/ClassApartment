
#include <windows.h>  
#include "Apartment.h"
#include<iostream>

int Apartment::apartmentCounter = 0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	Apartment* dom[2];
	dom[0] = new Apartment();
	dom[0]->Create();
	dom[0]->PrintInfo();
	dom[1] = new Apartment();
	dom[1]->PrintInfo();
	cout << "Кол-во квартир: " << Apartment::printApartmentCounter() << endl;
	for (size_t i = 0; i < 2; i++)delete dom[i];
	cout << "Кол-во квартир: " << Apartment::printApartmentCounter() << endl;
}