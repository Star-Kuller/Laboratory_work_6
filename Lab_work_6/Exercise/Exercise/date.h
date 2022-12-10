#pragma once
#include <iostream>

using namespace std;

class date
{
public:
	void getdate() {
			cin >> month >> dummychar >> day >> dummychar >> year;
			reduction();
	}

	void showdate() {
		printf("%02d/%02d/%d", month, day, year);
	}

private:
	char dummychar;
	int month,
		day,
		year;

	void reduction();
};
