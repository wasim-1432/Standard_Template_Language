#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    vector<int> a1={1,99,77,55,44,33,22,12,56,67};
    list<int> l1;
    vector<int>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    {
        if(*it%2==0)
        {
            l1.push_front(*it);
        }
        else
        {
            l1.push_back(*it);
        }
    }
    list<int>::iterator it1;
    for(it1=l1.begin();it1!=l1.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
    return 0;
}