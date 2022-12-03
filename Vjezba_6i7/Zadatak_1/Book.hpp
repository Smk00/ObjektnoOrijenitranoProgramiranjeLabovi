#include<iostream>
#include<string>
#include<vector>

#ifndef BOOK_H
#define BOOK_H

class Book
{
protected:
	std::string autor;
	std::string naslov;
	int godina;

public:
	Book(std::string autor, std::string naslov, int godina = 0)
	{
		this->autor = autor;
		this->naslov = naslov;
		this->godina = godina;
	}
	Book()
	{
		this->autor = "";
		this->naslov = "";
		this->godina = 0;
	}
	~Book() {};
	virtual void getBook();
	std::string getAuthor();
	std::string getTitle();
	virtual float getSize() { return 0; }
};



#endif