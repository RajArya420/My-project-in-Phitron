#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }
        parent->left = left;
        parent->right = right;

        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }
    return root;
}
bool left(Node* root)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->left)
    {
        left(root->left);
    }
    else if(root->right)
    {
        left(root->right);
    }
    cout<<root->val<<" ";
    return true;
}
bool right(Node* root)
{
    if(root==NULL)
    {
        return false;
    }
    cout<<root->val<<" ";
    if(root->right)
    {
        right(root->right);
    }
    else if(root->left)
    {
        right(root->left);
    }
    return true;
}
void final(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    left(root->left);
    cout<<root->val<<" ";
    right(root->right);
}
int main()
{
    Node *root = input_tree();
    final(root);
    return 0;
}