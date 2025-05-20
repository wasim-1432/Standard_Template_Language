#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<float,5> a1={3.1,3.1,3.1,3.1,3.1};
    float sum=0,avg;
    array<float,5>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    {
        sum=sum+*it;
    }
    avg=sum/5;
    cout<<"Average is="<<avg;
    cout<<endl;
    return 0;
}