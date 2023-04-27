#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
    int data;
    node * next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node * &head)
{
    node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
} 
void insertAtTail(node * &tail,int data)
{
    node * newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    node * head = new node(0);
    node * tail = head;
    insertAtTail(tail,1);
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    print(head);
    return 0;
}
