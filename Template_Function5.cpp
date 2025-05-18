#include<iostream>
using namespace std;
template<typename X>
X Sort(X* arr,int size)
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
    return arr[size-1];
}
int main()
{
    double arr[]={1,2.4,88.5,99.7,6,4,1,0.55};
    cout<<Sort(arr,8);
    cout<<endl;
    return 0;
}