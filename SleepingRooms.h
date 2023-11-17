#pragma once
#include <iostream> 
#include <string>
#include <istream>
#include <stdexcept>
#include <vector>


using namespace std;

class SleepingRooms
{
public:
	SleepingRooms()
	{
		floor = "Не указан";
		ceil = "Не указан";
		numOfPlaceForSleep = 0;
	}


	SleepingRooms(string floor, string ceil, int numOfplaceForSleep)
	{
		if (checkArgs(numOfPlaceForSleep))
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfplaceForSleep;
		}

	}
	~SleepingRooms()
	{

	}


	string Getfloor()
	{
		return floor;
	}

	string Getfceil()
	{
		return ceil;
	}

	int GetnumOfPlace()
	{
		return numOfPlaceForSleep;
	}



	void Create()
	{
		string floor, ceil;
		int numOfPlaceForSleep;
		cout << "Введите материал пола: ";
		cin >> floor;
		cout << "Введите материал потолка: ";
		cin >> ceil;
		cout << "Введите кол-во спальных мест: ";
		cin >> numOfPlaceForSleep;
		while (getchar() != '\n');
		if (checkArgs(numOfPlaceForSleep))
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfPlaceForSleep;
		}
		else throw invalid_argument("Вы ввели что-то неправильно!");
	}


private:
	string floor;
	string ceil;
	int numOfPlaceForSleep;

	bool checkArgs(int numOfPlaceForSleep)
	{
		return numOfPlaceForSleep >= 0;
	}

};