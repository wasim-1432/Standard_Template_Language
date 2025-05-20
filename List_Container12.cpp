#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string> l1={"Mohd Wasim","Mohd Fahim","Mohd Nadim"};
    list<string>::reverse_iterator it;
    for(it=l1.rbegin();it!=l1.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}