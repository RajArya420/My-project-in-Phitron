#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* left;
       Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }   
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1) left=NULL;
        else left=new Node(l);
        if(r==-1) right=NULL;
        else right=new Node(r);
        f->left=left;
        f->right=right;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<" Tree nai";
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1st ber kore ana
        Node* f=q.front();
        q.pop();
        // jabotiyo jha kaj
        cout<<f->val<<" ";
        //3rd children gulo rakaha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
}
int main()
{
    Node* root=input_tree();
    level_order(root);
    return 0;
}