
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
	

	cout <<endl<<endl<< "������� �������� �� ���������� ��������� ���������� '+': " << flat.getSquare();
	flat = flat + 3.5;
	cout << endl << "������� �����: " << flat.getSquare();



	cout << endl << endl << "���� ���������� '++'(��������): " << endl;
	house = flat++;
	cout << "���-�� ������ � ����� ��������: " << house.getNumOfRooms();
	cout << endl << "���-�� ������ � ������: " << flat.getNumOfRooms();

	cout << endl << endl << "���� ���������� '++'(�������): " << endl;
	house = ++flat;
	cout << "���-�� ������ � ����� ��������: " << house.getNumOfRooms();
	cout << endl << "���-�� ������ � ������: " << flat.getNumOfRooms();

	float square;
	float squareWithPointer = flat.getSquareWithPointer(&square);
	cout << endl << endl << "����������� ������� ������ �������� ����� ���������: " << squareWithPointer << endl;
	float& squareWithReference = flat.getSquareWithReference();
	cout << "����������� ������� ������ �������� ����� ������: " << squareWithReference << endl;

	cout << endl << endl << "\t\t������������ ������������ ������ � ����������" << endl;
	cout << "���-�� �������: " << Apartment::printApartmentCounter() << endl;
}