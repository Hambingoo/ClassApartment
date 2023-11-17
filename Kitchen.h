#pragma once
#include <iostream> 
#include <string>
#include <istream>
#include <stdexcept>
#include <vector>

using namespace std;

class Kitchen
{
public:
	Kitchen()
	{
		floor = "Не указан";
		ceil = "Не указан";
	}


	Kitchen(string floor, string ceil)
	{
		this->floor = floor;
		this->ceil = ceil;
	}


	~Kitchen()
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

	void Create()
	{
		string floor, ceil;
		cout << "Введите материал пола: ";
		cin >> floor;
		cout << "Введите материал потолка: ";
		cin >> ceil;
		this->floor = floor;
		this->ceil = ceil;

	}


private:
	string floor;
	string ceil;
};