// https://codeforces.com/problemset/problem/1234/B2

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
    
    int n, k;
    cin>>n>>k;
    queue<int> q;
    map<int, int> mp;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        
        int num;
        cin>>num;
        
        if(mp[num]==0)
        {
            q.push(num);
            mp[num]=1;
        }
        if(q.size()>k)
        {
            int last_element = q.front();
            mp[last_element] = 0;
            q.pop();
        }
        
    }
    
    while(!q.empty())
    {
        ans.push_back(q.front());
        q.pop();
    }
    
    cout<<ans.size()<<'\n';
    for(int i=ans.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";
    
    
    return 0;
}
