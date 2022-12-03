
#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(const vector<int>& v, unsigned int& min, unsigned int& max)
{
    unsigned int i;
    unsigned int j;
    unsigned int size_of_vector = v.size() - 1;
    vector<int> sum_vector;

    for (i = 0, j = size_of_vector; i < j; i++, j--)
    {
        sum_vector.push_back(v[i] + v[j]);
    }
  
    if (v.size() % 2)
    {
        sum_vector.push_back(v[i]);
    }

    min = sum_vector[0];
    max = sum_vector[0];


    for (i = 1; i < sum_vector.size(); i++)
    {
        if (sum_vector[i] > max)
            max = sum_vector[i];
        else if (sum_vector[i] < min)
            min = sum_vector[i];
    }
  
    return sum_vector;
}

void showVector(const vector<int>& v)
{
    for (unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    unsigned int min_sum = 0;
    unsigned int max_sum = 0;
    vector<int> v = {1 ,6 , 4, 7, 6, 2, 4};

    vector<int> vector_of_sums = sum(v, min_sum, max_sum);

    showVector(vector_of_sums);

    cout << "MIN: " << min_sum << "    "<< "MAX: " << max_sum;
    

}



