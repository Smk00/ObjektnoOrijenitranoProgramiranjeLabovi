#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

bool veci(int n) { return n > 500; }
bool compare(int n, int m) { return n < m; }
bool manji(int n) { return n < 300; }
bool sortt(int n, int m) { return n > m; }


int main()
{
    vector<int> v;
    try {
        ifstream f("numbers.txt");
        if (!f.good())
            throw 1;

        istream_iterator<int> is(f), eos;
        copy(is, eos, back_inserter(v));
        // radimo nesto s vektorom 

        //--3--
        int count = count_if(v.begin(), v.end(), veci);
        cout << "Number of values bigger than 500:  " << count << endl << endl;

        //--4--
        cout << "The largest elemnt of vector is:   " << *max_element(v.begin(), v.end(), compare) << endl << endl;

        cout << "The smallest elemnt of vector is:   " << *min_element(v.begin(), v.end(), compare) << endl << endl;
        //--5--
        v.erase(remove_if(v.begin(), v.end(), manji), v.end());

        //--6--
        sort(v.begin(), v.end(), sortt);



        ostream_iterator<int> os(cout, "\n");
        copy(v.begin(), v.end(), os);


    }
    catch (int e) { cout << "File not found" << endl; }
    

}