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
class DLL
{
    private:
        Node<X>* start;
    public:
        DLL();
        bool Is_Empty();
        void Insert_Element_At_Begining(X);
        void Show_Linked_List();
        void Insert_At_End(X);
        Node<X>* Search(X);
        void Insert_After_Specified_Node(Node<X>*,X);
        void Delete_First_Node();
        void Delete_Last_Node();
        void Delete_Specific(Node<X>*);
        ~DLL();
};
template<class X>
DLL<X>::DLL()
{
    start=nullptr;
}
template<class X>
bool DLL<X>::Is_Empty()
{
    return start==nullptr;
}
template<class X>
void DLL<X>::Insert_Element_At_Begining(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    n->next=start;
    if(Is_Empty())
    {
        n->prev=start;
    }
    else
    {
        start->prev=n;
    }
    start=n;
}
template<class X>
void DLL<X>::Show_Linked_List()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=start;
    while(temp)
    {
        cout<<temp->item<<" ";
        temp=temp->next;
    }
}
template<class X>
void DLL<X>::Insert_At_End(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    n->next=nullptr;
    if(Is_Empty())
    {
        n->prev=start;
        start=n;
    }
    else
    {
        Node<X>* temp=start;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        n->prev=temp->next;
        temp->next=n;
    }
}
template<class X>
Node<X>* DLL<X>::Search(X data)
{
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
void DLL<X>::Insert_After_Specified_Node(Node<X>* s,X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    n->next=s->next;
    n->prev=s;
    if(s->next!=nullptr)
    {
        s->next->prev=n;
    }
    s->next=n;
}
template<class X>
void DLL<X>::Delete_First_Node()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=start;
    start=start->next;
    if(start->next!=nullptr)
    {
        start->next->prev=nullptr;
    }
    delete temp;
}
template<class X>
void DLL<X>::Delete_Last_Node()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    Node<X>* temp=start;
    if(start->next==nullptr)
    {
        start=nullptr;
        delete temp;
    }
    else
    {
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}
template<class X>
void DLL<X>::Delete_Specific(Node<X>* s)
{
    if(s->next->next==nullptr)
    {
        Node<X>* temp=s->next;
        s->next=nullptr;
        temp->prev=nullptr;
        delete temp;
    }
    else
    {
        Node<X>* temp=s->next;
        s->next=temp->next;
        temp->next->prev=s;
        delete temp;
    }
}
template<class X>
DLL<X>::~DLL()
{
    while(start)
    {
        Delete_First_Node();
    }
}
int main()
{
    DLL<string> d1;
    d1.Insert_Element_At_Begining("Wasim");
    d1.Insert_Element_At_Begining("Nadim");
    d1.Insert_Element_At_Begining("Fahim");
    d1.Insert_At_End("Shafiq");
    Node<string>* temp=d1.Search("Shafiq");
    if(temp)
    {
        d1.Insert_After_Specified_Node(temp,"Wasim");
    }
    //d1.Delete_First_Node();
    //d1.Delete_Last_Node();
    d1.Show_Linked_List();
    cout<<endl;
    return 0;
}