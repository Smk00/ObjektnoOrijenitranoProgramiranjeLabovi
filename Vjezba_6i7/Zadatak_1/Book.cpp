#include"Book.hpp"
#include<iostream>
#include<string>
#include<vector>
#include <iterator>
#include <sstream>
#include <ctype.h>
using namespace std;


//______BOOK______
void Book::getBook()
{
	cout << "Autor: " << autor << endl;
	cout << "Naslov knjige: " << naslov << endl;
	cout << "Godina izdanja: " << godina << endl;
}

string Book::getAuthor()
{
	return autor;
}

string Book::getTitle()
{
	return naslov;
}