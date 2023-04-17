#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertNode(node* &tail,int data) 
{
    node * temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}
void pritn(node *&head)
{
    if(head==NULL)
        cout<<"nothing i have\n";
    node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
// in sorted 
void rmdup(node *&head)
{
    if(head==NULL || head->next == NULL)
    return;
    node * prev = head;
    node * curr = head->next;
    while(curr!=NULL)
    {
        if(prev->data == curr->data)
        {
            node * temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        }
        else{
            curr = curr->next;
            prev = prev->next;
        }
    }
}
// in unsorted list
void rmdupuns(node *& head)
{
    if(head==NULL || head->next==NULL)
        return ;
    unordered_set<int> st;
    node * temp = head;
    while(temp!=NULL)
    {
        st.insert(temp->data);
        temp = temp->next;
        delete head;
        head = temp;
    }
    temp = NULL;
    head =NULL;
    for(auto itr : st)
    {
        node * newNode = new node(itr);
        if(head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp= temp->next;
        }
    }
    pritn(head);
    cout<<endl;
}
int main()
{
    node * node1 = new node(5);
    node * head = node1;
    node * tail = node1;
    insertNode(tail,10);
    insertNode(tail,5);
    insertNode(tail,6);
    insertNode(tail,10);
    insertNode(tail,10);
    pritn(head);
    cout<<"after removing\n";
    // rmdup(head);
    rmdupuns(head);
    // pritn(head);
    return 0;
}