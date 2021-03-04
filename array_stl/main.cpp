#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,4>arr ={12,34,54,45};
    cout <<"first element"<< arr.front()<<endl;
    cout <<"last element"<< arr.back()<<endl;
    cout<<"first array = "<<endl;
    for(int i =0; i<=3;i++)
    {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    arr.fill(10);
    cout<<"first array = "<<endl;
    for(int i =0; i<=3;i++)
    {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    cout<<arr.size();
    //swaping two arrays
    cout<<endl;
    array<int,4>arr2={345,432,234,564};
    cout<<"second array = "<<endl;
    for(int i =0; i<=3;i++)
    {
        cout<<arr2[i]<<" ";
    };
    arr.swap(arr2);
    cout<<endl;
    cout<<"second array = "<<endl;
    for(int i =0; i<=3;i++)
    {
        cout<<arr2[i]<<" ";
    };
    cout<<endl;
    cout<<"first array = "<<endl;
    for(int i =0; i<=3;i++)
    {
        cout<<arr[i]<<" ";
    };
    return 0;
}
