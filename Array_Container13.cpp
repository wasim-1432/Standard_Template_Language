#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    array<int,10> a1;
    int i;
    cout<<"Enter any 10 elements\n";
    for(i=0;i<10;i++)
    {
        cin>>a1[i];
    }
    cout<<"Max element is="<<*max_element(a1.begin(),a1.end());
    cout<<endl;
    return 0;
}