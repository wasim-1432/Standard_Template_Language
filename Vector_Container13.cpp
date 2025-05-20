#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> a1={"Mohd Wasim","Mohd Nadim","Mohd Fahim","Shafiq Ahmad","Rashid"};
    for(auto x : a1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}