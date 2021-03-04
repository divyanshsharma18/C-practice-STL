#include <iostream>

using namespace std;

class student{
private:
    string name;
    int age;
public:
    void set(string s,int a)
    {
        name=s;
        age=a;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    pair<string,int>p1;
    pair<string,float>p2;
    pair<int,string>p3;
    pair<int,student>p4;
    p1= make_pair("rahul",23);
    p2= make_pair("rahul",23.23);
    p3= make_pair(12,"yoyo");

    student s1;
    s1.set("div",15);
    p4 = make_pair(12,s1);

    cout<<"fisrt in p1"<<p1.first <<endl;
    cout<<"second in p1"<<p1.second <<endl;
    cout<<"fisrt in p4"<<p4.first<<endl;
    student s2 = p4.second;
    s2.show();
    return 0;
}
