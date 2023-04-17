#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtEnd(node* &tail,int data)
{
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void inserAtPos(node* &head,int k,int data)
{
    node * temp =head;
    // if pos==1 then call insertATHEAD
    int cnt =1;
    while(cnt!= k-1)
    {
        temp = temp->next;
        cnt++;
    }
    node * newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(node* &head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
    cout<<endl;
}
int main()
{
    node * node1 = new node(5);
    node * head = node1;
    node * tail = node1;
    insertAtEnd(tail,10);
    insertAtEnd(tail,15);
    insertAtEnd(tail,20);
    inserAtPos(head,3,25);
    print(head);
    return 0;
}