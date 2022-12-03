#include<iostream>
#include<string>
#include<vector>
#include"Book.hpp"


#ifndef EBOOK_HPP
#define EBOOK_HPP

class EBook : public Book {

private:
	std::string pdf;
	float mb;

public:
	EBook(std::string autor, std::string naslov, int godina, std::string pdf, float mb) :
		Book(autor, naslov, godina), pdf(pdf), mb(mb) {
		std::cout << "EBook Constructor" << std::endl;
	}
	virtual void getBook();
	virtual float getSize() { return mb; }


};


#endif // !EBOOK_HPP
