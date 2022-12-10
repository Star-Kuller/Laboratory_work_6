#pragma once
#include <iostream>
#include "date.h"

using namespace std;



class employee
{
public:
	char set() {
		cin >> number >> dummychar >> salary;
		return dummychar;
	}

	char getemploy() {
		cout << "Введите номер сотрудника и его оклад в формате \"[номер]:[оклад]\" или 0x0 чтобы закончить ввод: ";
		cin >> number >> dummychar >> salary;
		if (!((dummychar == 'х') | (dummychar == 'Х') | (dummychar == 'x') | (dummychar == 'X'))) {
			cout << "Введите дату принятия на работу в формате \"12/31/22\": ";
			dateOfEmployment.getdate();
			do {
				cout << "Введите первую букву должности (Лаборант, Секретарь, Менеджер): ";
				cin >> userInput;
				switch (userInput)
				{
				case 'Л':
				case 'л':
					type = laborer;
					break;
				case 'С':
				case 'с':
					type = secretary;
					break;
				case 'М':
				case 'м':
					type = manager;
					break;
				default:
					type = err;
					cout << "[Ошибка]:Нет такой должности!\n";
					break;
				}
			} while (type == err);
		}
		return dummychar;
	}

	void show() {
		printf("Сотрудник под номером %d имеет оклад %14.0f\n", number, salary);
	}

	void putemploy() {
		printf("Сотрудник под номером %d имеет оклад %14.0f\n", number, salary);
		cout << "Сотрудник был принят на работу ";
		dateOfEmployment.showdate();
		cout << " на должность ";
		switch (type)
		{
		case employee::laborer:
			cout << "лаборант";
			break;
		case employee::secretary:
			cout << "секретарь";
			break;
		case employee::manager:
			cout << "менеджер";
			break;
		default:
			break;
		}
	}

private:
	char dummychar;
	char userInput;
	int number;
	float salary;
	date dateOfEmployment;
	enum etype { laborer, secretary, manager, err };
	etype type;
};
