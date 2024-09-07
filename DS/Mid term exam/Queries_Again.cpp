#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node* head) 
{
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_abnormal(Node* tail) 
{
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_any_position(Node* &head, Node* &tail, int pos, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL && pos == 0) 
    {
        head = newNode;
        tail = newNode;
    } 
    else if (pos == 0) 
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } 
    else 
    {
        Node* tmp = head;
        for (int i = 0; i < pos - 1; i++) 
        {
            if (tmp == NULL) 
            {
                cout << "Invalid" << endl;
                return;
            }
            tmp = tmp->next;
        }
        if (tmp == NULL) 
        {
            cout << "Invalid" << endl;
            return;
        }
        newNode->next = tmp->next;
        if (newNode->next != NULL) 
        {
            newNode->next->prev = newNode;
        } 
        else 
        {
            tail = newNode;
        }
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    print_normal(head);
    print_abnormal(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int q;
    cin >> q;
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        insert_at_any_position(head, tail, pos, val);
    }
    
    return 0;
}
