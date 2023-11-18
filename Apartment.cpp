
#include <windows.h>  
#include "Apartment.h"
#include<iostream>

int Apartment::apartmentCounter = 0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);






	Apartment flat,house;
	flat.Create();
	flat.PrintInfo();
	

	cout <<endl<<endl<< "Площадь квартиры до применения оператора перегрузки '+': " << flat.getSquare();
	flat = flat + 3.5;
	cout << endl << "Площадь после: " << flat.getSquare();



	cout << endl << endl << "Тест перегрузки '++'(Постфикс): " << endl;
	house = flat++;
	cout << "Кол-во комнат в новой квартире: " << house.getNumOfRooms();
	cout << endl << "Кол-во комнат в старой: " << flat.getNumOfRooms();

	cout << endl << endl << "Тест перегрузки '++'(Префикс): " << endl;
	house = ++flat;
	cout << "Кол-во комнат в новой квартире: " << house.getNumOfRooms();
	cout << endl << "Кол-во комнат в старой: " << flat.getNumOfRooms();

	float square;
	float squareWithPointer = flat.getSquareWithPointer(&square);
	cout << endl << endl << "Возвращение площади первой квартиры через указатель: " << squareWithPointer << endl;
	float& squareWithReference = flat.getSquareWithReference();
	cout << "Возвращение площади первой квартиры через ссылку: " << squareWithReference << endl;

	cout << endl << endl << "\t\tДемонстрация статического метода и переменной" << endl;
	cout << "Кол-во квартир: " << Apartment::printApartmentCounter() << endl;
}