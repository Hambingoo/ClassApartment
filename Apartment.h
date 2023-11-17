#pragma once
#include <iostream> 
#include <string>
#include <istream>
#include <stdexcept>
#include <vector>
#include "Kitchen.h"
#include "Bathroom.h"
#include "Hall.h"
#include "SleepingRooms.h"

using namespace std;





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
		apartmentCounter++;
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
		apartmentCounter++;
	}

	~Apartment()
	{
		apartmentCounter--;
	}

	static int printApartmentCounter()
	{
		return apartmentCounter;
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
	static int apartmentCounter;
};
