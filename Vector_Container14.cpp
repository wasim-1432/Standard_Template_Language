#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a1={12,23,4,56,54};
    vector<int>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}