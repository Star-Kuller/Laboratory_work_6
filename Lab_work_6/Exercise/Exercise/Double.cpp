#include "Double.h"

Double Double::operator+(const Double& other)
{
	Double ans;
	ans.value = this->value + other.value;
	return ans;
}

Double Double::operator-(const Double& other)
{
	Double ans;
	ans.value = this->value - other.value;
	return ans;
}

Double Double::operator/(const Double& other)
{
	Double ans;
	ans.value = this->value / other.value;
	return ans;
}

Double Double::operator*(const Double& other)
{
	Double ans;
	ans.value = this->value * other.value;
	return ans;
}

Double Double::operator=(const Double& other)
{
	this->value = other.value;
	return *this;
}

Double Double::operator=(const double& other)
{
	this->value = other;
	return *this;
}