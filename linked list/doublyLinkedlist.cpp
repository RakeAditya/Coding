#include<bits/stdc++.h>
using namespace std;
// definition of doubly linked list
class node{
    public:
    int data;
    node * next;
    node * prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(node* &head)
{
    node * temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
} 
// operations on doubly linked list
void insertAtHead(node * &head,int data)
{
    node * temp = new node(data);
    // ek node banae temp 
    // temp k next head ko pont krega
    // head ka prev temp ko point krega 
    // head ab temp ho gaya
    temp->next = head;
    head->prev = temp;
    head =temp;
}
void insertAtEnd(node * &tail, int data)
{
    node * temp =new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPos(node * &head,int pos,int data)
{
    if(pos == 1)
        {
            insertAtHead(head,data);
        }
        int cnt = 1;
        node * temp = head;
        while(cnt < pos-1)
        {
            temp = temp->next;
            cnt++;
        }
        node * newnode = new node(data);
        newnode->next = temp ->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
}
int main()
{
    node * node1 = new node(5);
    node * head = node1;
    node * tail = node1;
    insertAtHead(head,10);
    insertAtEnd(tail,15);
    insertAtEnd(tail,20);
    insertAtEnd(tail,25);
    insertAtPos(head,3,100);
    print(head);
    return 0;
}