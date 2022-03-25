// https://codeforces.com/problemset/problem/1515/C

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
    
    int t;
    cin>>t;
    while(t--){
        long long n, m, x;
        cin>>n>>m>>x;
        
        vector<pair<int, int>> heightOfBlock(n);
        for(int i=0;i<n;i++)
        {
            cin>>heightOfBlock[i].first;
            heightOfBlock[i].second = i+1;
        }
        
        sort(heightOfBlock.rbegin(), heightOfBlock.rend());
        
        vector<int> ans(n+1);
        
        set<pair<int, int>> towers;
        
        int towerNumber = 1;
        for(int i=0;i<n;i++)
        {
            if(towers.size()<m)
            {
                towers.insert({heightOfBlock[i].first, towerNumber});
                ans[heightOfBlock[i].second] = towerNumber;
                towerNumber++;
            }
            else
            {
                pair<int, int> temp = *towers.begin();
                temp.first += heightOfBlock[i].first;
                towers.erase(towers.begin());
                towers.insert(temp);
                ans[heightOfBlock[i].second] = temp.second; 
            }
        }
        
        pair<int, int> firstTower = *towers.begin();
        pair<int, int> secondTower = *towers.rbegin();
        
        if(secondTower.first - firstTower.first > x) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=1;i<=n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
    }
	
    return 0;
}


