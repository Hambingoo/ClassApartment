#pragma once
#include <iostream> 
#include <string>
#include <istream>
#include <stdexcept>
#include <vector>


using namespace std;

class Bathroom
{
public:
	Bathroom()
	{
		floor = "Не указан";
		ceil = "Не указан";
		walltype = "Не указан";
		washtype = "Не указан";
	}

	Bathroom(string floor, string ceil, string walltype, string washtype)
	{
		this->floor = floor;
		this->ceil = ceil;
		this->walltype = walltype;
		this->washtype = washtype;
	}

	~Bathroom()
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

	string Getwalltype()
	{
		return walltype;
	}

	string Getfwashtype()
	{
		return washtype;
	}

	void Create()
	{
		string floor, ceil;
		int type;
		cout << "Введите материал пола: ";
		cin >> floor;
		cout << "Введите материал потолка: ";
		cin >> ceil;
		cout << "Введите тип стен(1 - Плитка, 2 - Стандартные): ";
		cin >> type;
		switch (type)
		{
		case 1:
			this->walltype = "Плитка";
			break;
		case 2:
			this->walltype = "Плитка";
			break;
		default:
			throw invalid_argument("Вы ввели что-то неправильно!");
			break;
		}
		cout << "Введите средство для мытья(1 - Душ, 2 - Ванна): ";
		cin >> type;
		switch (type)
		{
		case 1:
			this->washtype = "Душ";
			break;
		case 2:
			this->washtype = "Ванна";
			break;
		default:
			throw invalid_argument("Вы ввели что-то неправильно!");
			break;
		}

		this->floor = floor;
		this->ceil = ceil;
	}



private:
	string floor;
	string ceil;
	string walltype;
	string washtype;
};