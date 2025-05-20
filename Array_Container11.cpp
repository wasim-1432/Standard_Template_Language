#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a1={12,23,3,45,5};
    array<int,5>::reverse_iterator it;
    for(it=a1.rbegin();it!=a1.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}