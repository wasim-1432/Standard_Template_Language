#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a1={12,34,56,78,88};
    int i;
    for(i=0;i<a1.size();i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    return 0;
}