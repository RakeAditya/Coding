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

int main()
{
    node* obj = new node(5);
    cout<< obj->data<<endl;
    cout<< obj->next<<endl;
 
    return 0;
}