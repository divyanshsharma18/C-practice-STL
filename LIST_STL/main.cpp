#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1{11,23,43};
    list<string>l2{"hello","hi","yo"};

    //cout<<l1[0]; ERROR
    list <int>::iterator p = l1.begin();
    while(p!= l1.end())
    {
        cout<<*p;
        p++;
    }
    cout<<endl;

    cout<<"size ="<<l1.size()<<endl;

    l2.push_back("bhopal");
    l2.push_back("jdh");
    // putting elements in l2
    l1.pop_front();
    //removing last element of l1
    l1.sort();
    //sorting l1
    l1.reverse();
    //reversing the list

    list<int>::iterator q=l1.begin();
    cout<<endl;
    while(q!=l1.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
    l1.clear();
    //l1.remove(11);
    cout<<"size after clear="<<l1.size();
    return 0;
}
