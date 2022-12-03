#include<iostream>
#ifndef MONEY_HPP
#define MONEY_HPP

class Money
{
private:
	int kuna;
	int lipa;
	double ukupno;
public:
	Money(int kuna = 0, int lipa = 0) { this->kuna = kuna; this->lipa = lipa; this->ukupno = (double)kuna + ((double)lipa / 100); }
	~Money() {};
	void getMoney() { std::cout << "Kune: " << kuna << std::endl << "Lipe: " << lipa << std::endl; }
	Money operator+(const Money& m);
	Money operator-(const Money& m);
	Money& operator-=(const Money& m);
	Money& operator+=(const Money& m);
	friend std::ostream& operator<<(std::ostream& os, const Money& m);
	operator double() {
		double tmp;
		tmp = (double)kuna + ((double)lipa / 100);
		return tmp;
	}


};

#endif // !MONEY_HPP