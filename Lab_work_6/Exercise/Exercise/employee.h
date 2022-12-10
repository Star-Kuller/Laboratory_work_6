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
		cout << "������� ����� ���������� � ��� ����� � ������� \"[�����]:[�����]\" ��� 0x0 ����� ��������� ����: ";
		cin >> number >> dummychar >> salary;
		if (!((dummychar == '�') | (dummychar == '�') | (dummychar == 'x') | (dummychar == 'X'))) {
			cout << "������� ���� �������� �� ������ � ������� \"12/31/22\": ";
			dateOfEmployment.getdate();
			do {
				cout << "������� ������ ����� ��������� (��������, ���������, ��������): ";
				cin >> userInput;
				switch (userInput)
				{
				case '�':
				case '�':
					type = laborer;
					break;
				case '�':
				case '�':
					type = secretary;
					break;
				case '�':
				case '�':
					type = manager;
					break;
				default:
					type = err;
					cout << "[������]:��� ����� ���������!\n";
					break;
				}
			} while (type == err);
		}
		return dummychar;
	}

	void show() {
		printf("��������� ��� ������� %d ����� ����� %14.0f\n", number, salary);
	}

	void putemploy() {
		printf("��������� ��� ������� %d ����� ����� %14.0f\n", number, salary);
		cout << "��������� ��� ������ �� ������ ";
		dateOfEmployment.showdate();
		cout << " �� ��������� ";
		switch (type)
		{
		case employee::laborer:
			cout << "��������";
			break;
		case employee::secretary:
			cout << "���������";
			break;
		case employee::manager:
			cout << "��������";
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
