#include<iostream>
#include<string>
#include<vector>
#include"Library.hpp"
using namespace std;

void Library::set_lib(Book* book)
{
	books_shelf.push_back(book);
}

void Library::print_lib()
{
	for (int i = 0; i < (int)books_shelf.size(); i++)
	{
		books_shelf[i]->getBook();
		cout << endl;
		cout << "********************************************************************";
		cout << endl;
	}
}

void Library::title(std::string& author)
{
	cout << "ALL TITLES OF AUTHOR: " << "{" << author << "}" << endl << endl;
	for (int i = 0; i < (int)books_shelf.size(); i++)
	{
		string tmp = books_shelf[i]->getAuthor();
		if (tmp.find(author) != std::string::npos)
			cout << books_shelf[i]->getTitle() << endl;
	}
}

float Library::pdf_size(std::string& author)
{
	float mb_sum = 0;
	for (int i = 0; i < (int)books_shelf.size(); i++)
	{
		string tmp = books_shelf[i]->getAuthor();
		if (tmp.find(author) != std::string::npos)
			mb_sum += books_shelf[i]->getSize();
	}
	cout << "PDF SIZE OF AUTHOR'S BOOKS: " << "{" << author << "} " << "{MB} ";
	return mb_sum;
}

void Library::search_title(std::string& search)
{
	for (int i = 0; i < (int)books_shelf.size(); i++)
	{
		string tmp = books_shelf[i]->getTitle();
		if (tmp.find(search) != std::string::npos)
		{
			cout << endl << endl;
			books_shelf[i]->getBook();
			cout << "*********************************************";
			cout << endl << endl;

		}
	}
}


Library::~Library()
{
	for (int i = 0; i < (int)books_shelf.size(); i++)
	{
		if (books_shelf[i] != NULL)
		{
			delete books_shelf[i];
			books_shelf[i] = 0;
			cout << "Deleted Library elemnt" << endl;
		}

		else
			cout << "Could not delete Library elemnt" << endl;
	}

}



