#pragma once
#include <iostream> 
#include <string>


using namespace std;



class Kitchen
{
public:
	Kitchen()
	{
		floor = "�� ������";
		ceil = "�� ������";
	}


	Kitchen(string floor, string ceil)
	{
		this->floor = floor;
		this->ceil = ceil;
	}


	~Kitchen();

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
		cout << "������� �������� ����: ";
		cin >> floor;
		cout << "������� �������� �������: ";
		cin >> ceil;
		this->floor = floor;
		this->ceil = ceil;
		
	}


private:
	string floor;
	string ceil;
};


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
		if (checkArgs)
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfplaceForSleep;
		}
		
	}
	~Hall();


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
		if (checkArgs)
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
		while (getchar() != '\n');
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


class SleepingRooms
{
public:
	SleepingRooms()
	{
		floor = "�� ������";
		ceil = "�� ������";
		numOfPlaceForSleep = 0;
	}


	SleepingRooms(string floor, string ceil, int numOfplaceForSleep)
	{
		if (checkArgs)
		{
			this->floor = floor;
			this->ceil = ceil;
			this->numOfPlaceForSleep = numOfplaceForSleep;
		}

	}
	~SleepingRooms();


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
		if (checkArgs)
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

class Apartment
{
public:
	Apartment()
	{
		kitchen = Kitchen();
		hall = Hall();
		bathroom = Bathroom();
		sleepingrooms = SleepingRooms();
		this->status = "�� �������";
		this->square = 0;
		this->street = "�� �������";
		this->numOfRooms = 0;
		this->floor = 0;
		this->housenum = 0;
	}

	Apartment(Kitchen kitchen, Hall hall, Bathroom bathroom, SleepingRooms sleepingrooms, string status, float square, string street, int numOfRooms, int floor, int housenum)
	{
		this->kitchen = kitchen;
		this->hall = hall;
		this->bathroom = bathroom;
		this->sleepingrooms = sleepingrooms;
		this->status = status;
		this->square = square;
		this->street = street;
		this->numOfRooms = numOfRooms;
		this->floor = floor;
		this->housenum = housenum;
	}

	~Apartment()
	{
	}

	void Create()
	{
		string street,status;
		int housenum, floor,numOfRooms,status1;
		float square;
		cout << "������� �����: ";
		cin >> street;
		cout << "������� ����� ����: ";
		cin >> housenum;
		if (housenum < 1)
		{
			throw invalid_argument("�� ����� ���-�� �����������!");
		}
		cout << "������� ����� �����: ";
		cin >> floor;
		if (housenum < 1)
		{
			throw invalid_argument("�� ����� ���-�� �����������!");
		}
		cout << "������� �������: ";
		cin >> square;
		if (square < 1)
		{
			throw invalid_argument("�� ����� ���-�� �����������!");
		}
		cout << "������� ���-�� ������: ";
		cin >> numOfRooms;
		if (numOfRooms < 1)
		{
			throw invalid_argument("�� ����� ���-�� �����������!");
		}
		cout << "������� ������(1 - ��������,2 - ������): ";
		cin >> status1;
		while (getchar() != '\n');
		switch (status1)
		{
		case 1:
			status = "��������";
		case 2:
			status = "������";
		default:
			throw invalid_argument("�� ����� ���-�� �����������!");
			break;
		}
		cout << "\n\t\t���� ���������� �����";
		kitchen.Create();
		cout << "\n\t\t���� ���������� ����";
		hall.Create();
		cout << "\n\t\t���� ���������� ����";
		bathroom.Create();
		cout << "\n\t\t���� ���������� �������� ������";
		sleepingrooms.Create();

	}

	void PrintInfo()
	{
		cout << "\t���������� � ��������\n";
		cout << "������: " << status << endl;
		cout << "����� " << street << ", ��� " << housenum << ", ���� " << floor << endl;
		cout << "�������: " << square <<endl<< "���-�� ������: " << numOfRooms << endl;

		cout << "\t\t���" << endl << "�������� ����: " << this->hall.Getfloor() << endl << "�������: " << this->hall.Getfceil() << endl << "���-�� �������� ����: " << this->hall.GetnumOfPlace() << endl;
		cout << "\t\t�����" << endl << "�������� ����: " << this->kitchen.Getfloor() << endl << "�������: " << this->kitchen.Getfceil() << endl;
		cout << "\t\t������ ������" << endl << "�������� ����: " << this->bathroom.Getfloor() << endl << "�������: " << this->bathroom.Getfceil() << endl << "������� ����: " << this->bathroom.Getwalltype() << endl << "�������������� ��� �����: " << this->bathroom.Getfwashtype() << endl;
		cout<<"\t\t�������� �������"<<endl<< "�������� ����: " << this->sleepingrooms.Getfloor() << endl << "�������: " << this->sleepingrooms.Getfceil() << endl << "���-�� �������� ����: " << this->sleepingrooms.GetnumOfPlace() << endl;
	}



private:
	string status;
	float square;
	string street;
	int numOfRooms, floor, housenum;
	Kitchen kitchen;
	Hall hall;
	Bathroom bathroom;
	SleepingRooms sleepingrooms;
};
