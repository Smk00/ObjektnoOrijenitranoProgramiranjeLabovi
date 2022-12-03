#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;



void function(string& str, string sub_str) {
    int pos; 
    while ((pos = str.find(sub_str)) != string::npos)
    {
        str.erase(pos, sub_str.length());
    }
}

int main() {

    string main_string;
    string sub_string;
    
    cout << "Unesi main string\n";
    getline(cin, main_string);
    
    cout << "Unesi podstring\n";
    cin >> sub_string;
    
    function(main_string, sub_string);
    cout << main_string << endl;
}