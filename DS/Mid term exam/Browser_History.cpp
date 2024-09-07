

// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         string val;
//         Node* next;
//         Node* prev;
//     Node (string val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }    
// };
// void insert_tail(Node* &head,Node* &tail,string val)
// {
//     Node* newNode= new Node(val);
//     if(tail==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=newNode;
// }
// void print(string val) 
// {
//     cout << val <<endl;
// }
// void visit(Node* &cur, string add) 
// {
//     Node* tmp=cur;
//     bool flag=true;
//     while (tmp!=NULL) {
//         if (tmp->val==add) {
            
//             cur=tmp;
//             flag=false;
//             break;
//         }
//         tmp=tmp->next;
//     }
//     if (flag==true)
//     {
//         cout << tmp->val << endl;
//         return tmp;
//     } 
//     else
//     {
//         cout << "Not Available" << endl;
//         return cur;
//     }
// }
// void Next(Node* &cur) 
// {
//     if (cur!=NULL&& cur->next !=NULL) 
//     {
//         cur= cur->next;
//         print(cur->val);
//     } 
//     else 
//     {
//        cout<<"Not Available"<<endl;
//     }
// }
// void Prev(Node* &cur) 
// {
//     if (cur!=NULL && cur->prev!=NULL) 
//     {
//         cur= cur->prev;
//         print(cur->val);
//     } 
//     else 
//     {
//         cout<<"Not Available"<<endl;
//     }
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//     string val;
    
//     while(true)
//     {
//         cin>>val;
//         if(val=="end") 
//         break;
//         insert_tail(head,tail,val);
        
//     }
//     Node* cur= head;
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         string text,add;
//         cin>>text;
//        if (text=="visit")
//         {
//             cin>>add;
//             Node* save_head = cur; 
//             cur = visit(cur, add);
//             if (cur==NULL)
//             { 
//                 cur =save_head; 
//             }
//         } 
//         else if (text=="next")
//          {
//             Next(cur);
//         } 
//         else if (text=="prev") 
//         {
//             Prev(cur);
//         }
        
//     }
   
   

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, string val) 
{
    Node* newNode = new Node(val);
    if (tail == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(string val) 
{
    cout << val << endl;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    string val;
    
    while (true) 
    {
        cin >> val;
        if (val == "end") 
            break;
        insert_tail(head, tail, val);
    }
    
    Node* cur = head;
    int q;
    cin >> q;
    while (q--) 
    {
        string text, add;
        cin >> text;
        if (text == "visit") 
        {
            cin >> add;
            Node* tmp = head;
            bool flag = false;
            while (tmp != NULL) 
            {
                if (tmp->val == add) 
                {
                   
                    
                    flag = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (flag==true) 
            {
                print(add);
                cur=tmp;
            }
            else
            {
                 
                 cout << "Not Available" << endl;
            }
        } 
        else if (text == "next") 
        {
            if (cur != NULL && cur->next != NULL) 
            {
                cur = cur->next;
                print(cur->val);
            } 
            else 
            {
                cout << "Not Available" << endl;
            }
        } else if (text == "prev") {
            if (cur != NULL && cur->prev != NULL) {
                cur = cur->prev;
                print(cur->val);
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    
    return 0;
}
