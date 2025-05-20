#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l1={10,66,20,30,98,65};
    cout<<"Max element is="<<*max_element(l1.begin(),l1.end());
    cout<<endl;
    return 0;
}