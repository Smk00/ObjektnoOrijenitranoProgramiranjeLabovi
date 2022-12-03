#ifndef STACK_HPP
#define STACK_HPP
#include<iostream>

template <typename T>
class Stack
{
private:
	T* arr;
	int top;
	int capacitiy;

public:
	Stack(int size);
	~Stack();
	void push(T vlaue);
	bool is_empty();
	void pop();
	void getStack();

};

template <typename T>
Stack<T>::Stack(int size)
{
	arr = new T[10];
	capacitiy = size;
	top = -1;
}
template <typename T>
Stack<T>::~Stack()
{
	delete arr;
	arr = NULL;
}

template <typename T>
void Stack<T>::push(T value)
{
	++top;
	arr[top] = value;
}

template <typename T>
T Stack<T>::pop()
{
	if (top < 0)
	{
		std::cout << "No more elemnts to pop" << std::endl;;
		return 0;
	}
	else
	{
		T tmp = arr[top];
		top--;
		return tmp;
	}
}



template <typename T>
bool Stack<T>::is_empty()
{
	if (top == -1)
		return true;
	return false;
}

template <typename T>
void Stack<T>::getStack()
{
	for (int i = 0; i <= top; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}



#endif // !STACK_HPP
