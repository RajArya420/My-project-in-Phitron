#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;
        string dual;
        int count=0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word]>count)
            {
                count= mp[word];
                dual= word;
            }
        }
        cout<<dual<< " " <<count<< endl;
    }
    return 0;
}
    


