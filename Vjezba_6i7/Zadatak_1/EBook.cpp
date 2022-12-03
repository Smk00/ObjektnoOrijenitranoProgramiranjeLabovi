#include<iostream>
#include<string>
#include<vector>
#include"Book.hpp"
#include"EBook.hpp"
using namespace std;


void EBook::getBook()
{
	//getBook();
	cout << "Autor: " << autor << endl;
	cout << "Naslov: " << naslov << endl;
	cout << "Godina izdanja: " << godina << endl;
	cout << "PDF Naslov: " << pdf << endl;
	cout << "Velicina u MB: " << mb << endl;
}

