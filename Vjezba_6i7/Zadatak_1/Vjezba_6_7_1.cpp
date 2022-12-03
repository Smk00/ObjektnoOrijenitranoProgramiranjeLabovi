#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include<string>
#include"Book.hpp"
#include"EBook.hpp"
#include"HardCopyBook.hpp"
#include"Library.hpp"
#include"Globalne.hpp"

using namespace std;

int main()
{
    /*
    string autor = "Luka";
    string naslov = "Math";
    int godina = 2020;
    int br_str = 128;
    string pdf = "C++_New_Edition_.pdf";
    //float mb = 48.9;

    HardCopyBook boo(autor, naslov, godina, br_str);
    boo.getHard();
    */
    ifstream fin("knjige.txt");
    vector<string> v;
    string line;

    // citanje i spremanje u vektor
    while (getline(fin, line))
        v.push_back(line);


    /*
    // ispis vektora - test
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;

    */
    Library lib;

    popuniBook(v, lib);

    cout << endl << endl << endl;

    //lib.print_lib();

    //string author = "Shin Takahashi";

    //lib.title(author);
    //cout << lib.pdf_size(author);

    string search = "The Manga Guide";
    lib.search_title(search);



}

