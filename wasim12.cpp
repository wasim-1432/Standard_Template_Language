#include<iostream>
using namespace std;
template<typename X>
X smaller(X a,X b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    float x=smaller(2.4,3.4);
    cout<<x;
    cout<<endl;
    return 0;
}