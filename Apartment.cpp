
#include <windows.h>  
#include "Apartment.h"
#include<iostream>

int Apartment::apartmentCounter = 0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int jk;

	Apartment* dom[2];
	dom[0] = new Apartment();
	dom[0]->Create();
	dom[0]->PrintInfo();
	dom[1] = new Apartment();
	dom[1]->PrintInfo();

	float square;
	float squareWithPointer = dom[0]->getSquareWithPointer(&square);
	cout << endl << endl << "Возвращение через указатель: " << squareWithPointer << endl;
	float& squareWithReference = dom[0]->getSquareWithReference();
	cout << "Возвращение через ссылку: " << squareWithReference << endl;

	cout << endl << endl << "\t\tДемонстрация статического метода и переменной" << endl;
	cout << "Кол-во квартир: " << Apartment::printApartmentCounter() << endl;
	for (size_t i = 0; i < 2; i++)delete dom[i];
	cout << "Кол-во квартир: " << Apartment::printApartmentCounter() << endl;
}