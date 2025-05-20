#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float> a1={12.9,34.3,56.89,78.2,88.87};
    int i;
    for(i=0;i<a1.size();i++)
    {
        cout<<a1.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}