#ifndef TODOUBLE_HPP
#define TODOUBLE_HPP

class Number
{
private:
	int n;
public:
	Number(int n = 0) { this->n = n; }
	~Number() {}
	void getNum() { std::cout << n; }
	operator double(){
		double tmp;
		tmp = n;
		return tmp;
	}

};


#endif // !TODOUBLE_HPP
