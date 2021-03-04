#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int x,y,a,b,c;
    cin>>x;
    for(int i =0;i<x;i++)
    {
        cin>>y;
        v.push_back(y);
    }
    cin>>a>>b>>c;
    v.erase(v.begin()+a);
    v.erase(v.begin()+(b-1),v.begin()+(c-1));
    cout<<v.size()<<endl;

    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
