#ifndef BOARD_H
#define BOARD_H
#include<iostream>
#include<vector>
using namespace std;


struct Point
{
	double x;
	double y;
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
};


class Board
{
private:
	vector<vector<char> > matrix;

public:

	Board(int rows, vector<char> columns);
	Board();
	Board(Board& b);
	~Board() {}
	void print_board();
	void draw_char(const Point& p, const char& znak);
	void draw_up_line(const Point& p, const char& znak);
	void draw_line(const Point& p1, const Point& p2, const char znak);

};






#endif // !BOARD_H
