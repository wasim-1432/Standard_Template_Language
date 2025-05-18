#include<iostream>
using namespace std;
#define UNDERFLOW 1
#define INVALIDINDEX 2
template<class X>
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        X* arr;
    public:
        DynArray(int);
        bool Is_Empty();
        bool Is_Full();
        void Double_Array();
        void Half_Array();
        int Return_Current_Capacity();
        void Append(X);
        void ShowData();
        void Insert_Element_At_Specified_Index(int,X);
        void Edit_An_Element_At_Specified_Index(int,X);
        void Delete_An_Element_At_Specified_Index(int);
        X Return_Get_Element_At_Specified_Index(int);
        int Count_Number_Of_Element_Present_In_The_Array();
        ~DynArray();
        int Found(X);
};
template<class X>
DynArray<X>::DynArray(int cap)
{
    capacity=cap;
    lastIndex=-1;
    arr=new X[capacity];
}
template<class X>
bool DynArray<X>::Is_Empty()
{
    return lastIndex==-1;
}
template<class X>
bool DynArray<X>::Is_Full()
{
    return capacity-1==lastIndex;
}
template<class X>
void DynArray<X>::Double_Array()
{
    X* temp=new X[2*capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        temp[i]=arr[i];
    }
    delete []arr;
    arr=temp;
    capacity=2*capacity;
}
template<class X>
void DynArray<X>::Half_Array()
{
    X* temp=new X[capacity/2];
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        temp[i]=arr[i];
    }
    delete []arr;
    arr=temp;
    capacity=capacity/2;
}
template<class X>
int DynArray<X>::Return_Current_Capacity()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    cout<<capacity<<endl;
}
template<class X>
void DynArray<X>::Append(X data)
{
    if(Is_Full())
    {
        Double_Array();
    }
    lastIndex++;
    arr[lastIndex]=data;
}
template<class X>
void DynArray<X>::ShowData()
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
template<class X>
void DynArray<X>::Insert_Element_At_Specified_Index(int index,X data)
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
template<class X>
void DynArray<X>::Edit_An_Element_At_Specified_Index(int index,X data)
{
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    arr[index]=data;
}
template<class X>
void DynArray<X>::Delete_An_Element_At_Specified_Index(int index)
{
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    int i;
    for(i=index;i<=lastIndex;i++)
    {
        arr[i]=arr[i+1];
    }
    lastIndex--;
    if(capacity/2>=lastIndex+1 && capacity>1)
    {
        Half_Array();
    }
}
template<class X>
X DynArray<X>::Return_Get_Element_At_Specified_Index(int index)
{
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    return arr[index];
}
template<class X>
int DynArray<X>::Count_Number_Of_Element_Present_In_The_Array()
{
    return lastIndex+1;
}
template<class X>
DynArray<X>::~DynArray()
{
    delete []arr;
}
template<class X>
int DynArray<X>::Found(X data)
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        if(arr[i]==data)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    DynArray <double>d1(8);
    d1.Append(76);
    d1.Append(89);
    d1.Append(99);
    d1.Append(96.87);
    //d1.Insert_Element_At_Specified_Index(3,55);
    //d1.Edit_An_Element_At_Specified_Index(2,87);
    //d1.Return_Current_Capacity();
    //d1.Delete_An_Element_At_Specified_Index(3);
    //d1.Return_Current_Capacity();
    d1.ShowData();
    cout<<endl;
    return 0;
}