#include<bits/stdc++.h>
using namespace std;
 
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node* &head,int data)
{
    // new node banae
    node* temp = new node(data);
    temp->next = head;
    head=temp;
}
void print(node* &head)
{
    node* temp =head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node * obj = new node(10);
    node * head = obj;
    print(head);
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtHead(head,25);
    print(head);
    return 0;
}