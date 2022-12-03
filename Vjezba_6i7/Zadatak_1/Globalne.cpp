#include<iostream>
#include<string>
#include<vector>
#include"Book.hpp"
#include"EBook.hpp"
#include"HardCopyBook.hpp"
#include"Library.hpp"
#include"Globalne.hpp"
using namespace std;

void popuniBook(std::vector<std::string>& text, Library& lib)
{
	string autor = "";
	string naslov = "";
	int godina = 0;

	int br_str = 0;

	string pdf = "";
	float mb = 0;

	for (int i = 0; i < (int)text.size(); i++)
	{
		size_t semicolon = count(text[i].begin(), text[i].end(), ';');
		size_t pos = 0;
		string token = "";
		string delimiter = "; ";
		int podijeli = 0;

		if (semicolon == 2)
		{


			while ((pos = text[i].find(delimiter)) != std::string::npos)
			{
				token = text[i].substr(0, pos);
				text[i].erase(0, pos + delimiter.length());
				if (podijeli == 0)
				{
					autor = token;
				}
				else if (podijeli == 1)
				{
					naslov = token;
				}
				podijeli++;

			}
			token = text[i].substr(0, pos);
			if (podijeli == 2)
			{
				br_str = stoi(token);
			}

			lib.set_lib(new HardCopyBook(autor, naslov, godina, br_str));
			podijeli = 0;

		}
		else if (semicolon == 3)
		{
			while ((pos = text[i].find(delimiter)) != std::string::npos)
			{
				token = text[i].substr(0, pos);
				text[i].erase(0, pos + delimiter.length());
				if (podijeli == 0)
				{
					autor = token;
				}
				else if (podijeli == 1)
				{
					naslov = token;
				}
				else if (podijeli == 2)
				{
					pdf = token;
				}
				podijeli++;

			}
			token = text[i].substr(0, pos);
			if (podijeli == 3)
			{
				token.erase(token.end() - 2, token.end());
				mb = stof(token);
			}
			podijeli = 0;
			lib.set_lib(new EBook(autor, naslov, godina, pdf, mb));

		}
	}

}
