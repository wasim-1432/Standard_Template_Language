#include<iostream>
using namespace std;
#define OVERFLOW 1
#define UNDERFLOW 2
#define INVALIDINDEX 3
template<class T>
class Array
{
    private:
        int capacity;
        int lastIndex;
        T* arr;
    public:
        Array(int);
        bool Is_Empty();
        void Append(T);
        bool Is_Full();
        void Show_Data();
        void Insert_At_Specified_Index(int,T);
        void Edit(int,T);
        void Delete_At_Specified(int);
        T Get_Element_At_Specified_Index(int);
        int Count_Number_Of_Elements_Present_In_The_Array();
        ~Array();
        int Found(T);
};
template<class T>
Array<T>::Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    arr=new T[capacity];
}
template<class T>
bool Array<T>::Is_Empty()
{
    return lastIndex==-1;
}
template<class T>
bool Array<T>::Is_Full()
{
    return capacity-1==lastIndex;
}
template<class T>
void Array<T>::Append(T data)
{
    if(Is_Full())
    {
        throw OVERFLOW;
    }
    lastIndex++;
    arr[lastIndex]=data;
}
template<class T>
void Array<T>::Show_Data()
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
template<class T>
void Array<T>::Insert_At_Specified_Index(int index,T data)
{
    if(index<0 || index>lastIndex+1)
    {
        throw INVALIDINDEX;
    }
    if(Is_Full())
    {
        throw UNDERFLOW;
    }
    lastIndex++;
    int i;
    for(i=lastIndex;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=data;
}
template<class T>
void Array<T>::Edit(int index,T data)
{
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    arr[index]=data;
}
template<class T>
void Array<T>::Delete_At_Specified(int index)
{
    if(Is_Empty())
        throw UNDERFLOW;
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    int i;
    for(i=index;i<=lastIndex;i++)
    {
        arr[i]=arr[i+1];
    }
    lastIndex--;
}
template<class T>
T Array<T>::Get_Element_At_Specified_Index(int index)
{
    if(index<0 || index>lastIndex)
    {
        throw INVALIDINDEX;
    }
    return arr[index];
}
template<class T>
int Array<T>::Count_Number_Of_Elements_Present_In_The_Array()
{
    return lastIndex+1;
}
template<class T>
Array<T>::~Array()
{
    delete []arr;
}
template<class T>
int Array<T>::Found(T data)
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
    Array<double> a1(6);
    a1.Append(6);
    a1.Append(87);
    a1.Append(99.87);
    //a1.Insert_At_Specified_Index(1,44);
    //a1.Edit(3,98);
    //a1.Delete_At_Specified(3);
    a1.Show_Data();
    cout<<endl;
    return 0;
}