#include<iostream>
#include<string>
#include<vector>
#include"Book.hpp"

#ifndef HARD_COPY_BOOK_H 
#define HARD_COPY_BOOK_H

class HardCopyBook : public Book {

private:
	int broj_str;

public:
	HardCopyBook(std::string autor, std::string naslov, int godina, int br_str) :
		Book(autor, naslov, godina), broj_str(br_str) {
		std::cout << "hardBackCopy" << std::endl;
	}
	virtual void getBook();

};




#endif HARD_COPY_BOOK_H