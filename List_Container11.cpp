#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string> l1={"Mohd Wasim","Mohd Fahin","Mohd Nadim"};
    list<string>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}