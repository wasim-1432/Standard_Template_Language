#include<iostream>
using namespace std;
template<typename X>
void Print_Array_Value(X* arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    double arr[]={1,2.4,88.5,99.7,6,4,1,0.55};
    Print_Array_Value(arr,8);
    cout<<endl;
    return 0;
}