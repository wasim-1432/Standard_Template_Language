#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,3> a1={10,20,30};
    array<int,3> a2={12,8,99};
    //1. []
    cout<<a1[1]<<endl;
    //2. at()
    try
    {
        cout<<a1.at(3);
    }
    catch(out_of_range e)
    {
        cout<<"Invalid Index"<<endl;;
    }
    //3. Implicit iterator | range for loop
    for(int x: a1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //4. Explicit iterator
    array<int,3>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    a1.swap(a2);
    for(it=a1.begin();it!=a1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(it=a1.begin();it!=a1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Hello"<<endl;
    cout<<endl;
    return 0;
}