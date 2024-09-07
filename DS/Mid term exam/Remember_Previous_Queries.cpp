
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;
    
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print_normal(Node* head) 
// {
//     cout << "L -> ";
//     Node* tmp = head;
//     while (tmp != NULL) 
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// void print_abnormal(Node* tail) 
// {
//     cout << "R -> ";
//     Node* tmp = tail;
//     while (tmp != NULL) 
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }
// void insertAtHead(Node*& head, Node*& tail, int val) 
// {
//     if (head == NULL) 
//     {
//         Node* newNode = new Node(val);
//         head = tail = newNode;
//     } 
//     else 
//     {
//         Node* newNode = new Node(val);
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }
// }
// void insertAtTail(Node*& head, Node*& tail, int val) 
// {
//     if (tail == NULL) 
//     {
//         Node* newNode = new Node(val);
//         head = tail = newNode;
//     } 
//     else 
//     {
//         Node* newNode = new Node(val);
//         newNode->prev = tail;
//         tail->next = newNode;
//         tail = newNode;
//     }
// }
// void deleteAtIndex(Node*& head, Node*& tail, int index) 
// {
//     if (head == NULL || index < 0) return;

//     Node* current = head;
//     int count = 0;

//     while (current != NULL && count != index) 
//     {
//         current = current->next;
//         count++;
//     }

//     if (current == NULL) return;

//     if (current == head) 
//     {
//         head = head->next;
//         if (head != NULL) {
//             head->prev = NULL;
//         } else {
//             tail = NULL;
//         }
//         delete current;
//     } 
//     else if (current == tail) 
//     {
//         tail = tail->prev;
//         tail->next = NULL;
//         delete current;
//     } 
//     else 
//     {
//         current->prev->next = current->next;
//         current->next->prev = current->prev;
//         delete current;
//     }
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
    
//     int q;
//     cin >> q;
    
//     list<int> myList;
//     for (int i = 0; i < q; ++i) {
//         int pos, val;
//         cin >> pos >> val;

//         if (pos == 0) {
//             insertAtHead(head, tail, val);
//             myList.push_front(val);
//         } else if (pos == 1) {
//             insertAtTail(head, tail, val);
//             myList.push_back(val);
//         } else if (pos == 2) {
//             if (val < myList.size()) 
//             {
//                 auto it = myList.begin();
//                 advance(it, val);
//                 myList.erase(it);
//                 deleteAtIndex(head, tail, val);
//             }
//         }
//         print_normal(head);
//         print_abnormal(tail);
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void print_normal(list<int> &myList) 
{
    cout<<"L -> ";
    for (auto it = myList.begin();it!=myList.end();it++) 
    {
        cout <<*it<<" ";
    }
    cout<<endl;
}
void print_abnormal(list<int>& myList)
{
  cout << "R -> ";
   myList.reverse();
  for (int val : myList) 
  {
    cout << val << " ";
  }
  myList.reverse();
  cout << endl;
}

int main() 
{
    list<int> myList;
    int q;
    cin >> q;
    for (int i=0;i<q;i++) 
    {
        int pos,val;
        cin>>pos>>val;

        if (pos==0)
        {
            myList.push_front(val);
        } 
        else if (pos ==1) 
        {
            myList.push_back(val);
        } 
        if (pos == 2 && val < myList.size()) 
        {
            auto it =next(myList.begin(), val);
            myList.erase(it);
        }

        print_normal(myList);
        print_abnormal(myList);
    }
    return 0;
}
