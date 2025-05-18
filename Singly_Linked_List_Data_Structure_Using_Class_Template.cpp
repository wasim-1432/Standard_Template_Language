#include<iostream>
using namespace std;
#define UNDERFLOW 1
template<class X>
struct Node
{
    X item;
    Node<X>* next;
};
template<class X>
class SLL
{
    private:
        Node<X>* start;
    public:
        SLL();
        void Insert_At_Beginning(X);
        bool Is_Empty();
        void Show_Data();
        void Insert_At_End(X);
        Node<X>* Search(X);
        void Insert_Node_At_Specified_Node(Node<X>*,X);
        void Delete_First_Node();
        void Delete_Last_Node();
        void Delete_Specified_Node(Node<X>*);
        ~SLL();
};
template<class X>
SLL<X>::SLL()
{
    start=nullptr;
}
template<class X>
bool SLL<X>::Is_Empty()
{
    return start==nullptr;
}
template<class X>
void SLL<X>::Insert_At_Beginning(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    n->next=start;
    start=n;
}
template<class X>
void SLL<X>::Insert_At_End(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    if(Is_Empty())
    {
        n->next=start;
        start=n;
    }
    else
    {
        Node<X>* temp=start;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->next=nullptr;
    }
}
template<class X>
void SLL<X>::Show_Data()
{
    Node<X>* temp=start;
    while(temp)
    {
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}
template<class X>
Node<X>* SLL<X>::Search(X data)
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=start;
    while(temp)
    {
        if(temp->item==data)
        {
            return temp;
        }
        temp=temp->next;
    }
    return nullptr;
}
template<class X>
void SLL<X>::Insert_Node_At_Specified_Node(Node<X>* s,X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    n->next=s->next;
    s->next=n;
}
template<class X>
void SLL<X>::Delete_First_Node()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    if(start->next==nullptr)
    {
        Node<X>* temp=start;
        start=nullptr;
        delete temp;
    }
    else
    {
        Node<X>* temp=start;
        start=start->next;
        delete temp;
    }
}
template<class X>
void SLL<X>::Delete_Last_Node()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    if(start->next==nullptr)
    {
        Node<X>* temp=start;
        start=nullptr;
        delete temp;
    }
    else
    {
        Node<X>* temp=start;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}
template<class X>
void SLL<X>::Delete_Specified_Node(Node<X>* s)
{
    Node<X>* temp=start;
    if(start==s)
    {
        Delete_First_Node();
    }
    else
    {
        do
        {
            temp=temp->next;
        }while(temp->next!=s);
        temp->next=s->next;
        delete s;
    }
}
template<class X>
SLL<X>::~SLL()
{
    while(start)
    {
        Delete_First_Node();
    }
}
int main()
{
    SLL<double> s1;
    s1.Insert_At_Beginning(98);
    s1.Insert_At_Beginning(87);
    s1.Insert_At_Beginning(76);
    s1.Insert_At_End(77);
    Node<double>* temp=s1.Search(76);
    if(temp)
    {
        s1.Insert_Node_At_Specified_Node(temp,98.98);
    }
    //s1.Delete_First_Node();
    //s1.Delete_Last_Node();
    s1.Show_Data();
    cout<<endl;
    return 0;
}