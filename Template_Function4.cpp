#include<iostream>
using namespace std;
template<typename X>
void Sort(X* arr,int size)
{
    int round,i;
    for(round=0;round<size-1;round++)
    {
        for(i=0;i<size-round-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
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
int main()
{
    double arr[]={1,2.4,88.5,99.7,6,4,1,0.55};
    Sort(arr,8);
    cout<<endl;
    return 0;
}