// https://codeforces.com/contest/977/problem/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main ()
{
    fast();
    
    long long n, k, sum=0, ans = -1;
    map<long long, long long>mp;
    
    cin>>n>>k;
    
    for(int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        mp[num]++;
    }
    
    for(auto &x:mp){
        
        if(k==0){
          ans = x.first == 1? -1 : x.first - 1;    
          break;  
        }
        
        if(sum<k)
        {
            sum+=x.second;
        }
        if(sum==k)
        {
            ans = x.first;
            break;
        }
        if(sum>k) break;
        
    }
    
    
    cout<<ans;
    return 0;
}





