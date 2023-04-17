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
void insertAtTail(node* &tail,int data)
{
    node* temp = new node(data);
    tail->next = temp;
    tail=temp;
}
void print(node* &head)
{
    node * temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
    cout<<endl;
} 
// normal iterative function
void reverse(node* &head)
{
    node* prev = NULL;
    node* curr = head;
    node* frwd = NULL;
    if(head==NULL || head->next==NULL)
        {
            cout<<head;
            return ;
        }
    while(curr != NULL)
    {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
    }
    head=prev;
}
// recursive function for list reversal
void reverseLi(node* &head,node* &prev,node* &curr)
{
    if(curr == NULL)
    {
        head=prev;
        return;
    }
    node* frwd = curr->next;
    reverseLi(head,curr,frwd);
    curr->next = prev;

}
node* reverseList(node * & head)
{
    node * curr = head;
    node * prev = NULL;
    reverseLi(head,prev,curr);
    return head;
}
// approach 3 for reversal
node* rev(node* &head)
{ if(head==NULL || head->next==NULL)
        return head;
        node * chotahead= reverseList(head->next);
        head->next->next = head;
        head->next=NULL;
        return chotahead;
}
int main()
{
    node * node1 = new node(5);
    node * head = node1;
    node * tail = node1;
    cout<<"befor reverse list is \n";
    insertAtTail(tail,10);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    print(head);
    // reverse(head);
    // reverseList(head);
    cout<<"after reversing list will be\n";
    rev(head);
    print(head);
    return 0;
}