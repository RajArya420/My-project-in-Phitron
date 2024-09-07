// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int q;
//     cin>>q;
//     while(q--)
//     {
//     priority_queue<int> pq;
//     while(true)
//     {
//         int c;
//         cin>>c;
//         if(c==0)
//         {
//             int x;
//             cin>>x;
//             pq.push(x); //o logN
//         }
//         else if(c==1)
//         {
//             pq.pop(); //O(Log N)
//         }
//         else if(c==2)
//         {
//             cout<<pq.top()<<endl; //O(1)
//         }
//         else break;
//     }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int get: v)
    {
        pq.push(get);
    }
    while (q--) 
    {
             int c;
            cin>>c;
            if (c==0) 
            {
                int x;
                cin>>x;
                pq.push(x);
                cout<<pq.top()<<endl;
            } else if (c==1) 
            {
                if (!pq.empty())
                    cout<<pq.top()<<endl;
                else
                    cout<<"Empty"<<endl;
            } 
            else if (c==2) 
            {
                if (!pq.empty()) 
                {
                    pq.pop();
                    if (!pq.empty())
                        cout<<pq.top()<<endl;
                    else
                        cout<<"Empty"<<endl;
                } 
                else 
                {
                    cout<<"Empty"<<endl;
                }
            }    
               
                else
                {
                    cout<<pq.top()<<endl;
                }
             
        
    }

    return 0;
}
