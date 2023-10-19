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


class Hall
{


public:
	Hall()
	{
		floor = "Не указан";
		ceil = "Не указан";
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

class Apartment
{
public:
	Apartment()
	{
		kitchen = Kitchen();
		hall = Hall();
		bathroom = Bathroom();
		sleepingrooms = SleepingRooms();
		this->status = "Неизвестно";
		this->square = 0;
		this->street = "Не указано";
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
		cout << "Введите улицу: ";
		cin >> street;
		this->street = street;
		cout << "Введите номер дома: ";
		cin >> housenum;
		
		if (housenum < 1)
		{
			throw invalid_argument("Вы ввели что-то неправильно!");
		}
		this->housenum = housenum;
		cout << "Введите номер этажа: ";
		cin >> floor;
		if (housenum < 1)
		{
			throw invalid_argument("Вы ввели что-то неправильно!");
		}
		this->floor = floor;
		cout << "Введите площадь: ";
		cin >> square;
		if (square < 1)
		{
			throw invalid_argument("Вы ввели что-то неправильно!");
		}
		this->square = square;
		cout << "Введите кол-во комнат: ";
		cin >> numOfRooms;
		if (numOfRooms < 1)
		{
			throw invalid_argument("Вы ввели что-то неправильно!");
		}
		this->numOfRooms = numOfRooms;
		cout << "Введите статус(1 - Строится,2 - Готова): ";
		cin >> status1;
		switch (status1)
		{
		case 1:
			this->status = "Строится";
			break;
		case 2:
			this->status = "Готова";
			break;
		default:
			throw invalid_argument("Вы ввели что-то неправильно!");
			break;
		}
		cout << "\n\t\tВвод параметров кухни"<<endl;
		kitchen.Create();
		cout << "\n\t\tВвод параметров зала"<<endl;
		hall.Create();
		cout << "\n\t\tВвод параметров душа"<<endl;
		bathroom.Create();
		cout << "\n\t\tВвод параметров спальных комнат"<<endl;
		sleepingrooms.Create();

	}

	void PrintInfo()
	{
		cout << "\tИнформация о квартире\n";
		cout << "Статус: " << status << endl;
		cout << "Улица " << street << ", дом " << housenum << ", этаж " << floor << endl;
		cout << "Площадь: " << square <<endl<< "Кол-во комнат: " << numOfRooms << endl;

		cout << "\t\tЗал" << endl << "Материал пола: " << this->hall.Getfloor() << endl << "Потолок: " << this->hall.Getfceil() << endl << "Кол-во спальных мест: " << this->hall.GetnumOfPlace() << endl;
		cout << "\t\tКухня" << endl << "Материал пола: " << this->kitchen.Getfloor() << endl << "Потолок: " << this->kitchen.Getfceil() << endl;
		cout << "\t\tВанная комнат" << endl << "Материал пола: " << this->bathroom.Getfloor() << endl << "Потолок: " << this->bathroom.Getfceil() << endl << "Обделка стен: " << this->bathroom.Getwalltype() << endl << "Приспособление для мытья: " << this->bathroom.Getfwashtype() << endl;
		cout<<"\t\tСпальные комнаты"<<endl<< "Материал пола: " << this->sleepingrooms.Getfloor() << endl << "Потолок: " << this->sleepingrooms.Getfceil() << endl << "Кол-во спальных мест: " << this->sleepingrooms.GetnumOfPlace() << endl;
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
