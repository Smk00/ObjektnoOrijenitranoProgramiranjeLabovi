#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cctype>
using namespace std;

void zamini (string& s)
{
    int string_size = s.size();
    cout << "String size: " << string_size << endl;
    
    string tmp("");
    string recenica("");
    int j = 0;
    

    for (int i = string_size; i >= 0; i--)
    {
        if (isalpha(s[i]))
        {
            j++;
            tmp.push_back(tolower(s[i]));

        }
        else if (isspace(s[i]) && tmp.empty() == false)
        {
            reverse(tmp.begin(), tmp.end());
            recenica = recenica + tmp + " ";
            tmp.erase(tmp.begin(), tmp.end());
        }

        else
            continue;


       
    }
    reverse(tmp.begin(), tmp.end());
    recenica = recenica + tmp;
    tmp.erase(tmp.begin(), tmp.end());
    s = recenica + ".";
    s[0] = toupper(s[0]);
    

}

int main()
{
    string s = "This is a test testy.";
    zamini(s);
    //reverse(s.begin(), s.end());
    cout << s << endl;

   // cout << *(s.begin()) << endl;
    


}
