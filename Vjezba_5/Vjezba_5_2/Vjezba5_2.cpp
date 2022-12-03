#include <iostream>
#include <vector>
#include<string>
#include"Board.h"
using namespace std;
int main()
{
	int rows = 10;
	vector<char> columns(20);
	Board b(rows, columns);
	Point p1(2, 8);
	Point p2(8, 2);
	//b.draw_char(p1, '%');
	//b.draw_up_line(p1, '*');
	b.draw_line(p1, p2, '*');
	b.print_board();





	/*
	cout << "Unsi broj redaka" << endl;
	int redci = 0;
	cin >> redci;

	cout << "Unesi broj stupaca" << endl;
	int br_st = 0;
	cin >> br_st;
	vector<char> stupci(br_st);

	Board matrica(redci, stupci);

	Point p1(2, 8);
	Point p2(16, 8);
	//char znak = '#';

	//matrica.draw_char(p, znak);

	//matrica.draw_up_line(p, '*');

	matrica.draw_line(p1, p2, '*');

	matrica.print_board();
	*/

}

