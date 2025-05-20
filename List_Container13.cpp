#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    vector<int> a1={10,20,30,40};
    list<int> l1;
    l1.insert(l1.begin(),a1.begin(),a1.end());
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}