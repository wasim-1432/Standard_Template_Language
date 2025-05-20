#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    array<int,10> a1={12,99,33,66,45,7,8,14,67,88};
    sort(a1.begin(),a1.end());
    array<int,10>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}