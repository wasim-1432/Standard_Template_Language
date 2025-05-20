#include<iostream>
#include<vector>
using namespace std;
vector<int> Smaller()
{
    vector<int> a1={12,23,4,56,54};
    vector<int> a2;
    vector<int>::iterator it;
    for(it=a1.begin()+1;it!=a1.end()-1;it++)
    {
        if(*it<*(it-1) && *it<*(it+1))
        {
            a2.push_back(*it);
        }
    }
    return a2;
}
int main()
{
    vector<int> v2;
    v2=Smaller();
    for(auto x: v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}