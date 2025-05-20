#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> s1;
    s1.assign({10,10,10,10,5,5,5});
    for(auto x: s1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}