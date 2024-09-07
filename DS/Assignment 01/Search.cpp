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
void match(Node* head,int n)
{
    
   
    int pos=0;
    bool flag=false;
    Node* tmp= head;
    for(Node* tmp=head;tmp!=NULL;tmp=tmp->next)
    {
        if(n==tmp->val)
        {
            flag=true;
            break;
        }
        pos++;
        
    }
    if(flag==true)
        {
            cout<<pos<<endl;
        }
    else
    cout<<"-1"<<endl;    
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int val,n;
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
      {
        cin>>val;
        if(val== -1) break;
        insert_at_tail(head,tail,val); 
      }
       cin>>n;
      match(head,n);
    }
    
    
    return 0;
}