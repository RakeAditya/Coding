#include<bits/stdc++.h>
using namespace std;
class node {
    public: 
    int data;
    node * left;
    node * right;
    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }
};
node* buildTree(node * root)
{
    cout<<"Enter data of new node"<<endl;
    int data ;
    cin>>data;
    root = new node(data);
    if(data == -1)
    return NULL;
    cout<<"Enter left node\n";
    buildTree(root->left);
    cout<<"Enter right node\n";
    buildTree(root->right);
    return root;
}
int main()
{
    node * root = NULL;
    root = buildTree(root);
    return 0;
}