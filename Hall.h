#pragma once
#include <iostream> 
#include <string>
#include <istream>
#include <stdexcept>
#include <vector>


using namespace std;


class Hall
{


public:
	Hall()
	{
		floor = "�� ������";
		ceil = "�� ������";
		numOfPlaceForSleep = 0;
	}


	Hall(string floor, string ceil, int numOfplaceForSleep)
	{
		if (checkArgs(numOfPlaceForSleep))
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfplaceForSleep;
		}

	}

	~Hall()
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
		cout << "������� �������� ����: ";
		cin >> floor;
		cout << "������� �������� �������: ";
		cin >> ceil;
		cout << "������� ���-�� �������� ����: ";
		cin >> numOfPlaceForSleep;
		while (getchar() != '\n');
		if (checkArgs(numOfPlaceForSleep))
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfPlaceForSleep;
		}
		else throw invalid_argument("�� ����� ���-�� �����������!");
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