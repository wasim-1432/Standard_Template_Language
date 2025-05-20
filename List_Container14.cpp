#include<iostream>
#include<vector>
#include<list>
using namespace std;
list<int> Vector_To_List_Print()
{
    vector<int> a1={10,20,30,40};
    list<int> l1;
    l1.insert(l1.begin(),a1.begin(),a1.end());
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    Vector_To_List_Print();
    cout<<endl;
    return 0;
}