#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }    
};
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode=head;
        head=head->next;
        
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev=NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz==0;
    }
};
class myStack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode=tail;
        tail=tail->prev;
       
        if(tail==NULL)
        {
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
         delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz==0;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!st.empty()&&!q.empty())
    {
       if(st.top()==q.front())
       {
            st.pop();
            q.pop();
        
       }
       else
       {
            cout<<"NO";
        return 0;
       }
       
    }
    if(q.empty()&&st.empty())
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}