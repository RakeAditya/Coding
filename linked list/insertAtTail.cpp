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
void insertAtTail(node* &tail,int data)
{
    node * temp = new node(data);
    // jo mera node bana whi head aur tail h to uske next m temp daal denge aur tail ko temp k barabar kr denge
    tail->next = temp;
    tail = temp;
} 
void print(node * &head)
{
    node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node * node1 = new node(5);
    node * head = node1;
    node * tail = node1;

    insertAtTail(tail,10);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    print(head);
    return 0;
}