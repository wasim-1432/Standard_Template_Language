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
class Stack
{
    private:
        Node<X>* top;
    public:
        Stack();
        bool Is_Empty();
        void Push(X);
        void Peek();
        X Pop();
        ~Stack();
};
template<class X>
Stack<X>::Stack()
{
    top=nullptr;
}
template<class X>
bool Stack<X>::Is_Empty()
{
    return top==nullptr;
}
template<class X>
void Stack<X>::Push(X data)
{
    Node<X>* n=new Node<X>;
    n->item=data;
    if(top==nullptr)
    {
        n->prev=nullptr;
    }
    else
    {
        n->prev=top;
        top->next=n;
    }
    n->next=nullptr;
    top=n;
}
template<class X>
void Stack<X>::Peek()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    cout<<top->item<<endl;
}
template<class X>
X Stack<X>::Pop()
{
    if(Is_Empty())
    {
        throw UNDERFLOW;
    }
    int data=top->item;
    top=top->prev;
    delete top->next;
    return data;
}
template<class X>
Stack<X>::~Stack()
{
    while(top)
    {
        Pop();
    }
}
int main()
{
    Stack<double> s1;
    s1.Push(87);
    s1.Push(99);
    s1.Push(86.9);
    s1.Peek();
    cout<<endl;
    return 0;
}