#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> c1;
    c1[100]="gajju";
    c1[123]="dyfahb";
    c1[143]="yoyo";
    c1[156]="osap";
    map<int, string> c2{{123,"hello"},{342,"jello"}};

    map<int, string>::iterator p = c1.begin();
    while(p!=c1.end())
    {
        cout<<p->second<<endl;
        p++;
    }

    cout<<c1.at(100)<<endl;
    cout<<"size="<<c1.size()<<endl;
    cout<<"tells if empty or not , 1 if empty = "<<c1.empty()<<endl;
    c1.insert(pair<int , string>(204,"saurabh"));

    map<int, string>::iterator q = c1.begin();
    while(q!=c1.end())
    {
        cout<<q->second<<endl;
        q++;
    }

    c1.clear();
    cout<<"size after clear="<<c1.size()<<endl;

    return 0;
}
