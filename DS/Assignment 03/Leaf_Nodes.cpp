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
void count(Node *root, vector<int> &val)
{
    if (root == NULL)
        return;
    count(root->left, val);
    count(root->right, val);
    if (root->left == NULL && root->right == NULL)
    {
        val.push_back(root->val);
    }
}
int main()
{
    Node *root = input_tree();
    vector<int> val;
    count(root,val);
    sort(val.begin(), val.end(), greater<int>());
    for (int v : val)
    {
        cout<<v<< " ";
    }
    return 0;
}