#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cctype>
#include<list>
using namespace std;

int num_of_elemets(list<int>& myList)
{
    list<int>::iterator it;
    list<int>::iterator tmp = myList.begin();

    for (it = myList.begin(); it != myList.end(); it++)
    {
        if (*it == 0 || *it == 1)
        {
            continue;
        }
        else if ((*it) % 2 == 0)
        {
            myList.insert(it, 0);
        }
        else if ((*it) % 2 == 1)
        {
            tmp = it;
            tmp++;
            myList.insert(tmp, 1);
        }
            
    }

    for (it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "____";
    }
    cout << endl;

    list<int>::iterator itEnd = myList.end();
    itEnd--;
    it = myList.begin();

    while (1)
    {
        if((*it != 0))
            it++;
        if(*itEnd != 1)
            itEnd--;
        if ((*it == 0) && (*itEnd == 1))
            break;
    }
    int i = 0;
    while (it != itEnd)
    {
        it++;
        i++;
    }


    return --i;
}

int main()
{
    list<int> myList(0,10);
    list<int>::iterator it = myList.begin();
    for (int i = 0; i < 11; i++)
    {
        myList.push_back(i);
    }
    
    //myList.push_back(1);

    
    for (it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "____";
    }
    cout << endl;

    cout << "The number of elemts between the first zero and the las one is: " << num_of_elemets(myList) << endl;

    
}


