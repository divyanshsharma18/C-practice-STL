#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    int n,q,x;
    string w;
    cin>>n;
    for(int i =0 ; i<n;i++)
    {
        cin>>q;
        if(q==1)
        {
            cin>>w>>x;
            // m.insert(make_pair(w,x));
            m[w]+=x;
        }
        else if(q==2)
        {
            cin>>w;
            // map<string,int>::iterator itr=m.find(w);
            m.erase(w);
        }
        else
        {
            cin>>w;
            // map<string,int>::iterator itr=m.find(w);
            cout<<m[w]<<endl;
        }

    }

    return 0;
}



