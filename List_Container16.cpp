#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l1={1,99,77,55,44,33,22,12,56,67};
    l1.sort();
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}