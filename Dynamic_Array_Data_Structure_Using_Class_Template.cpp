#include<iostream>
using namespace std;
#define UNDERFLOW 1
#define INVALIDINDEX 2
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int* arr;
    public:
        DynArray(int);
        bool Is_Empty();
        bool Is_Full();
        void Double_Array();
        void Half_Array();
        int Return_Current_Capacity();
        void Append(int);
        void ShowData();
        void Insert_Element_At_Specified_Index(int,int);
};
DynArray::DynArray(int cap)
{
    capacity=cap;
    lastIndex=-1;
    arr=new int[capacity];
}
bool DynArray::Is_Empty()
{
    return lastIndex==-1;
}
bool DynArray::Is_Full()
{
    return capacity-1==lastIndex;
}
void DynArray::Double_Array()
{
    int* temp=new int[2*capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        temp[i]=arr[i];
    }
    delete arr;
    arr=temp;
    capacity=2*capacity;
}
void DynArray::Half_Array()
{
    int* temp=new int[capacity/2];
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        temp[i]=arr[i];
    }
    delete arr;
    arr=temp;
    capacity=capacity/2;
}
int DynArray::Return_Current_Capacity()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    return capacity;
}
void DynArray::Append(int data)
{
    if(Is_Full())
    {
        Double_Array();
    }
    lastIndex++;
    arr[lastIndex]=data;
}
void DynArray::ShowData()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void DynArray::Insert_Element_At_Specified_Index(int index,int data)
{
    if(index<0 || index>lastIndex+1)
    {
        throw INVALIDINDEX;
    }
    if(Is_Full())
    {
        Double_Array();
    }
    lastIndex++;
    int i;
    for(i=lastIndex;i>=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=data;
}
int main()
{
    DynArray d1(2);
    d1.Append(76);
    d1.Append(89);
    d1.Append(99);
    d1.Insert_Element_At_Specified_Index(4,55);
    d1.ShowData();
    cout<<endl;
    return 0;
}