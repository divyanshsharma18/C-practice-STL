#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "students" ;
    cout<<s1<<endl<<s2<<endl;
    string s4;
    cin>>s4;
    cout<<"hello"<<s4<<endl;
    cout<<s4+"1243"<<endl;

    s1.assign("hello");
    cout<<s1<<endl;

    s1.append("student");
    cout<<s1<<endl;

    s1.insert(2,"999");
    s1.replace(2,2,"a");
    cout<<s1<<endl;
    s1.erase();
    cout<<s1<<endl;

    int i = s1.compare(s2);
    cout<<"comparing="<<i<<endl;

    cout<<"size="<<s1.size();



    return 0;
}
