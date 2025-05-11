#include<iostream>
using namespace std;
template<typename X>
X Input_Elements_In_Arrau()
{
    X arr[10];
    int i;
    cout<<"Enter elements"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    Input_Elements_In_Arrau<float>();
    cout<<endl;
    return 0;
}