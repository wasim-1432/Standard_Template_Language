#include<iostream>
using namespace std;
template<typename X>
void Sort_An_Array(X arr[],int size)
{
    int round,i;
    for(round=0;round<size-1;round++)
    {
        for(i=0;i<size-round-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                X temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
template<typename X>
void Input_Elements_In_Array()
{
    X arr[10];
    int i;
    cout<<"Enter elements"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    Sort_An_Array<X>(arr,10);
}
int main()
{
    Input_Elements_In_Array<float>();
    cout<<endl;
    return 0;
}