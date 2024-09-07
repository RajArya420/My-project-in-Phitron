#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // mp.insert({"sakib al hasan",75});
    // mp.insert({"tamim",19});
    // mp.insert({"raj",23});
    // mp.insert({"nihad",69});
    // cout<<mp["raj"]<<endl;
    mp["sakib al hasan"]=100;
    mp["raj"]=69;
    mp["nihad"]=70;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}