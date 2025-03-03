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
int main()
{
    int val,s1=0,s2=0;
    Node* head1=NULL,*tail1=NULL;
    Node* head2=NULL,*tail2=NULL;
    while(true){
        cin>>val;
        if(val== -1) break;
        insert_at_tail(head1,tail1,val);
        s1++; 
    }
    while(true){
        cin>>val;
        if(val== -1) break;
        insert_at_tail(head2,tail2,val); 
        s2++;
    }
    if(s1 != s2) {
      cout<<"NO"<<endl;
      return 0;
   }
   Node* tmp1 = head1;
   Node* tmp2 = head2; 
   while(tmp1!=NULL) {
      if(tmp1->val != tmp2->val) { 
         cout <<"NO"<<endl;
         return 0;
      }
      tmp1 = tmp1->next;
      tmp2 = tmp2->next;
   }
   cout<<"YES"<<endl; 
    return 0;
}