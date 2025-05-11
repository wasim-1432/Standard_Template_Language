#include<iostream>
using namespace std;
template<typename X>
X big(X a,X b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x=big(2,3);
    cout<<x<<endl;
    cout<<endl;
    return 0;
}