#include<iostream>
using namespace std;
template <typename X>
X big(X x,X y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int x=big(2,3);
    float y=big(3.4,88.4);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;
    return 0;
}