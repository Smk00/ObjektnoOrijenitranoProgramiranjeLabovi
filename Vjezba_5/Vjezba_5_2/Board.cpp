#include<iostream>
#include<vector>
#include<string>
#include"Board.h"
#include<cmath>
using namespace std;




Board::Board(int rows, vector<char> columns)
{
	cout << "Unesi znak obruba" << endl;
	char znak;
	cin >> znak;
	cout << endl << endl;

	for (int y = 0; y <rows; y++)
	{
		for (int x = 0; x < (int)columns.size(); x++)
		{
			if (y == 0 || y == rows - 1)
			{
				columns[x] = znak;
			}
			else if (x == 0 || x == (int)columns.size()-1)
			{
				columns[x] = znak;
			}
			else
			{
				columns[x] = ' ';
			}
		}
		matrix.push_back(columns);
	}
}

Board::Board()
{
	int rows = 10;
	vector<char> columns(10);

	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < (int)columns.size(); x++)
		{
			if (y == 0 || y == rows - 1)
			{
				columns[x] = '*';
			}
			else if (x == 0 || x == (int)columns.size() - 1)
			{
				columns[x] = '*';
			}
			else
			{
				columns[x] = ' ';
			}
		}
		matrix.push_back(columns);
	}
}


Board::Board(Board& b)
{
	for (int i = 0; i < b.matrix.size(); i++)
	{
		matrix.push_back(b.matrix[i]);
	}
}

void Board::print_board()
{
	for (unsigned int i = 0; i < matrix.size(); i++)
	{
		for (unsigned int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Board::draw_char(const Point& p, const char& znak)
{
	int row = p.x + 0.5;
	int column = p.y + 0.5;
	if ((column < (int)matrix.size() && column > 0) && (row < (int)matrix[0].size() && row > 0))
	{
		matrix[column][row] = znak;
	}
	else
	{
		cout << "Out of bounds" << endl;
	}
}

void Board::draw_up_line(const Point& p, const char& znak)
{
	int row = p.x + 0.5;
	int column = p.y + 0.5;
	if ((column < (int)matrix[0].size() && column > 0) && (row < (int)matrix.size() && row> 0))
	{
		while (column > 0)
		{
			matrix[column][row] = znak;
			column--;
		}
	}
	else
	{
		cout << "Out of bounds" << endl;
	}
}

void Board::draw_line(const Point& p1, const Point& p2, const char znak)
{
	int row_p1 = p1.x + 0.5;
	int column_p1 = p1.y + 0.5;

	int row_p2 = p2.x + 0.5;
	int column_p2 = p2.y + 0.5;

	int veci_x = 0;
	int veci_y = 0;
	int manji_x = 0;
	int manji_y = 0;

	if (p1.x > p2.x){
		veci_x = p1.x;
		manji_x = p2.x;
	}
	else{
		veci_x = p2.x;
		manji_x = p1.x;
	}

	if (p1.y > p2.y){
		veci_y = p1.y;
		manji_y = p2.y;
	}
	else{
		veci_y = p2.y;
		manji_y = p1.y;
	}


	if (p1.x == p2.x && p1.y != p2.y)
	{
		while (manji_y <= veci_y)
		{
			matrix[manji_y][row_p1] = znak;
			manji_y++;
		}
	}
	else if (p1.y == p2.y && p1.x != p2.x)
	{
		while (manji_x <= veci_x)
		{
			matrix[column_p1][manji_x] = znak;
			manji_x++;
		}
	}
	else if (abs(row_p1 - row_p2) == abs(column_p1- column_p2))
	{
			if (column_p1 < column_p2 && row_p1 < row_p2)
			{
				while (row_p1 != row_p2)
				{
					matrix[column_p1][row_p1] = znak;
					column_p1++;
					row_p1++;
				}

			}
			else if (column_p1 > column_p2 && row_p1 < row_p2)
			{
				while (row_p1 != row_p2)
				{
					matrix[column_p1][row_p1] = znak;
					column_p1--;
					row_p1++;
				}
			}
			else if(column_p1 > column_p2 && row_p1 > row_p2)
			{
				while (row_p1 != row_p2)
				{
					matrix[column_p1][row_p1] = znak;
					column_p1--;
					row_p1--;
				}
			}
			else if(column_p1 < column_p2 && row_p1 > row_p2)
			{
				while (row_p1 != row_p2)
				{
					matrix[column_p1][row_p1] = znak;
					column_p1++;
					row_p1--;
				}
			}
	}
	else
	{
		cout << "Ne moze se nacrtati ravna linija" << endl;
	}

}