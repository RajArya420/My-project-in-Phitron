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
bool check(Node *root)
{
    if(root == NULL)
    {
        return true;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *father = q.front();
        q.pop();
        if ((father->left==NULL) != (father->right==NULL))
            return false;
        if (father->left)
        {
            q.push(father->left);
        }
        if (father->right)
        {
            q.push(father->right);
        }
    }
    return true;
}
int main()
{
    Node *root =input_tree();
    if (check(root))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   return 0;
}