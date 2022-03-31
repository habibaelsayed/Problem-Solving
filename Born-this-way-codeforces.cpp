// https://codeforces.com/problemset/problem/1148/B

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
    ll n, m, ta, tb, k, result=0, flag=0;
    
    cin>>n>>m>>ta>>tb>>k;
    ll a[n], b[m];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]+=ta;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    if(k>=n||k>=m)
    cout<<-1;
    else{
       for(int i=0;i<k+1;i++)
       {
           auto pos = lower_bound(b, b+m, a[i]) - b;
           pos += k-i;
           if(pos>=m)
           {
               cout<<-1;
               flag=1;
               break;
           }
           else
           {
               result = max(result, b[pos]+tb);
           }
       }
       if(flag==0)
         cout<<result;
    }
    
    
    
    
    return 0;
}
