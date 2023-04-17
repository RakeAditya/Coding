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
void insertAtEnd(node* &tail,int data)
{
    node * temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void deleteNode(node * &head,int pos)
{
    if(pos == 1)
    {
        node *temp =head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
    else
    {
        node * pre = NULL;
        node * cur = head;
        int cnt =1;
        while(cnt <pos)
        {
            pre = cur;
            cur = cur->next;
            cnt++;
        }
        pre->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}
int main()
{
    node * node1 = new node(5);
    node * head=  node1;
    node * tail=  node1;
    print(head);
    insertAtEnd(tail,10);
    insertAtEnd(tail,15);
    insertAtEnd(tail,20);
    deleteNode(head,4);
    print(head);
    return 0;
}