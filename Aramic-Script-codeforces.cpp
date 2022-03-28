// https://codeforces.com/group/SIMBLrwXK7/contest/354189/problem/M

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
    int n, count=0;
    cin>>n;
    vector<string> word(n);
    set<string> uniWord;
    for(int i=0;i<n;i++)
    {
        cin>>word[i];
        sort(word[i].begin(), word[i].end());
        word[i].resize(unique(word[i].begin(), word[i].end()) - word[i].begin());
        uniWord.insert(word[i]);
    }
    cout<<uniWord.size();
    
    return 0;
}







