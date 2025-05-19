#include<iostream>
using namespace std;
#define UNDERFLOW 1
template<class X>
struct Node
{
    Node<X>* prev;
    X item;
    Node<X>* next;
};
template<class X>
class Queue
{
    private:
        Node<X>* front;
        Node<X>* rear;
    public:
        Queue();
        void Insert_New_Element_At_Rear(X);
        bool Is_Empty();
        void View_Rear();
        void View_Front();
        X Delete_Front();
        ~Queue();
        int Count_Total_Elements_In_The_Queue();
};
template<class X>
Queue<X>::Queue()
{
    front=nullptr;
    rear=nullptr;
}
template<class X>
bool Queue<X>::Is_Empty()
{
    return front==nullptr && rear==nullptr;
}
template<class X>
void Queue<X>::Insert_New_Element_At_Rear(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    if(Is_Empty())
    {
        n->next=n;
        n->prev=n;
        front=n;
        rear=n;
    }
    else
    {
        n->next = rear;
        n->prev = rear->prev;
        rear->prev->next = n;
        rear->prev = n;
        rear = n;

    }
}
template<class X>
void Queue<X>::View_Rear()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    cout<<rear->item<<" ";
}
template<class X>
void Queue<X>::View_Front()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    cout<<front->item<<" ";
}
template<class X>
X Queue<X>::Delete_Front()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=front;
    front=front->prev;
    delete temp;
    return front->item;
}
template<class X>
Queue<X>::~Queue()
{
    while(front!=nullptr && rear!=nullptr)
    {
        Delete_Front();
    }
}
template<class X>
int Queue<X>::Count_Total_Elements_In_The_Queue()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=rear;
    int count=1;
    while(temp!=front)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Queue<double> q1;
    q1.Insert_New_Element_At_Rear(87);
    q1.Insert_New_Element_At_Rear(76);
    q1.Insert_New_Element_At_Rear(99.87);
    //q1.View_Rear();
    q1.Delete_Front();
    q1.View_Rear();
    q1.View_Front();
    q1.Count_Total_Elements_In_The_Queue();
    cout<<endl;
    return 0;
}