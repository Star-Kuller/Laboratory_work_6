#pragma once
#include <iostream>

using namespace std;

class Double
{
public:
	double value = NULL;

	void set() {
		cin >> value;
	}

	void reset() {
		value = 0.0;
	}
	
	void show() {
		cout << value;
	}

	Double operator +(const Double& other);

	Double operator -(const Double& other);

	Double operator /(const Double& other);

	Double operator *(const Double& other);

	Double operator =(const Double& other);

	Double operator =(const double& other);

private:
};