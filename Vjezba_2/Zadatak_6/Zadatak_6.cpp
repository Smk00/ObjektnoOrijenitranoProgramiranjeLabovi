#include<iostream>
using namespace std;

struct _vector
{
	int* arr;
	unsigned int fiz = 0;
	unsigned int log = 0;

};

_vector* vector_new()
{
	_vector* new_v = new _vector;
	cout << "How much space would you like to allocate for your vector\n";
	cin >> new_v->fiz;
	new_v->arr = new int[new_v->fiz];

	return new_v;
}

void vector_delete(_vector* v)
{
	delete[] v->arr;
	v->arr = 0;
	if (v->arr)
		cout << "Could not delete ARR\n";
	
	delete v;
	v = 0;
	if(v)
		cout << "Could not delete VECTOR\n";
}

_vector* vector_push_back(_vector* v)
{
	cout << "Push back a number\n";
	if (v->log == 0)
	{
		cin >> v->arr[0];

	}
	else if (v->log < v->fiz)
	{
		cin >> v->arr[v->log];

	}
	else if (v->log == v->fiz)
	{
		int* tmp = new int[v->fiz * 2];
		v->fiz *= 2;
		copy(v->arr, v->arr + v->fiz, tmp);
		delete[] v->arr;
		v->arr = tmp;
		cin >> v->arr[v->log];
	}
	v->log++;
	return v;

}
void show_vector(_vector* v)
{
	if (v->log == 0)
	{
		cout << "There are no vector elemts to display";
		return;
	}
	for (int i = 0; i < v->log; i++)
	{
		cout << "INDEX " << i << " " << v->arr[i] << endl;
	}
}

_vector* vector_pop_back(_vector* v)
{
	cout << "Pop back last number\n";
	if (v->log == 0)
	{
		cout << "There are no numbers to pop back\n";
		exit;
	}
	else
	{
		v->log--;
		int* tmp = new int[v->log];
		copy(v->arr, v->arr + v->log, tmp);
		delete[] v->arr;
		v->arr = 0;
		v->arr = tmp;

	}
	return v;

}

int& vector_front(_vector* v)
{
	if (v->log == 0)
	{
		cout << "There are no elemnts in this vector\n";
		exit;
	}
	
	int& front = v->arr[0];
	return front;
}

int& vector_back(_vector* v)
{
	if (v->log == 0)
	{
		cout << "There are no elemnts in the vector\n";
		exit;
	}
	int& back = v->arr[v->log-1];
	return back;

}

int vector_size(_vector* v)
{
	return v->log;
}

int main()
{
	_vector* new_vector = vector_new();
	cout << "FIZ: " << new_vector->fiz << "		" << "LOG: " << new_vector->log << endl;
	
	
	new_vector = vector_push_back(new_vector);
	new_vector = vector_push_back(new_vector);
	new_vector = vector_push_back(new_vector);
	
	new_vector = vector_pop_back(new_vector);

	cout << "Vector size " << vector_size(new_vector) << endl;

	cout << "Vector front: " << vector_front(new_vector) << endl;
	
	cout << "Vector back: " << vector_back(new_vector) << endl;

	show_vector(new_vector);
	
	cout << "FIZ: " << new_vector->fiz << "		" << "LOG: " << new_vector->log << endl;
	
	vector_delete(new_vector);
	
}