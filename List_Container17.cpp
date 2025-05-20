#include<iostream>
#include<list>
using namespace std;
list<int> Sort_List()
{
    list<int> l1={1,99,77,55,44,33,22,12,56,67};
    l1.sort();
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    Sort_List();
    cout<<endl;
    return 0;
}