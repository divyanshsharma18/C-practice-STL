#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v1{12,34,54};
    vector<char>v2(4);
    vector<char>v3(4,10);
    vector<string>v4(3,"hello");

//    cout<<v4[0]<<" "<<v4[1];
    /*for(int i=0;i<=3;i++)
    {
        cout<<v4[i]<<endl;
    }*/
    cout<<v1.capacity()<<endl;
    v1.push_back(10);
    cout<<v1.capacity()<<endl;// capacity will be six as it is a array that doubles its capacity if needed
    cout<<v1.size()<<endl;

    v1.pop_back();
    cout<<v1.size()<<endl;

    cout<<v1.at(2)<<endl;

    cout<<"using back "<<v1.back()<<endl;
    cout<<"using front"<<v1.front()<<endl;

    vector<int>::iterator it= v1.begin();
    v1.insert(it+2,35);
    for(int i=0;i<=3;i++)
    {
        cout<<v1[i]<<endl;
    }

    return 0;
}
