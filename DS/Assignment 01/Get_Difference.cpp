#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
    }    
};
void insert_at_tail(Node* &head,Node* &tail,int v)
{
    Node * newNode= new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    
}
void min_max(Node* head)
{
    int min=INT_MAX;
    int max=INT_MIN;
    for(Node* i=head;i!=NULL;i=i->next)
    {
        if(i->val < min) 
        {  
           min = i->val; 
        }
        if(i->val > max)
        {
          max = i->val; 
        }
    }
    int d=max - min;

     cout<<d<<endl;
  
}
int main()
{
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        cin>>val;
        if(val== -1) break;
        insert_at_tail(head,tail,val); 
    }
    min_max(head);
    return 0;
}