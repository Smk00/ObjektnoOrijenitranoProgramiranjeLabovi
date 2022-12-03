#include"Money.hpp"
#include<iostream>
using namespace std;


Money Money::operator+(const Money& m)
{
	Money tmp;
	tmp.ukupno = this->ukupno + m.ukupno;
	return tmp;
}

Money Money::operator-(const Money& m)
{
	Money tmp;
	tmp.ukupno = this->ukupno - m.ukupno;
	return tmp;
}

Money& Money::operator-=(const Money& m)
{
	this->ukupno = this->ukupno - m.ukupno;
	return *this;
}

Money& Money::operator+=(const Money& m)
{
	this->ukupno = this->ukupno + m.ukupno;
	return *this;
}

ostream& operator<<(ostream& os, const Money& m)
{
	os << m.ukupno << " kn";
	return os;
} 