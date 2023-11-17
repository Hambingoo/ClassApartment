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
		floor = "�� ������";
		ceil = "�� ������";
		walltype = "�� ������";
		washtype = "�� ������";
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
		cout << "������� �������� ����: ";
		cin >> floor;
		cout << "������� �������� �������: ";
		cin >> ceil;
		cout << "������� ��� ����(1 - ������, 2 - �����������): ";
		cin >> type;
		switch (type)
		{
		case 1:
			this->walltype = "������";
			break;
		case 2:
			this->walltype = "������";
			break;
		default:
			throw invalid_argument("�� ����� ���-�� �����������!");
			break;
		}
		cout << "������� �������� ��� �����(1 - ���, 2 - �����): ";
		cin >> type;
		switch (type)
		{
		case 1:
			this->washtype = "���";
			break;
		case 2:
			this->washtype = "�����";
			break;
		default:
			throw invalid_argument("�� ����� ���-�� �����������!");
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