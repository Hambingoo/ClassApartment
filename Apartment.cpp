
#include <windows.h>  
#include "Apartment.h"
#include<iostream>

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
	for (size_t i = 0; i < 2; i++)delete dom[i];
	int i;
}