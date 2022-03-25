// https://codeforces.com/problemset/problem/501/B

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



int main (){
    
    fast();
    
    int q, i;
    
    cin>>q;
    
    vector<pair<string, string>> handles;
    
    while(q--)
    {
       string oldHandle, newHandle;
       cin>>oldHandle>>newHandle;
       
       for(i=0;i<handles.size();i++)
       {
           if(handles[i].second==oldHandle)
           {
               handles[i].second=newHandle;
               break;
           }
       }
       
       if(i==handles.size()) //new handle
       handles.push_back({oldHandle, newHandle});
       
    }
    
    cout<<handles.size()<<'\n';
    
    for(i=0;i<handles.size();i++)
    cout<<handles[i].first<<" "<<handles[i].second<<'\n';
    
    
    
    
    return 0;
}





