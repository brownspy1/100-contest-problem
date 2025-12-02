// Created by @brownspy1 on 2025-12-02 Time:11-54-24
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    vector<int> v;
    int n;
    while (cin>>n)
    {
        v.push_back(n);
    }

    set<int> ans ;
    for (int i = 0; i < v.size(); i++)
    {
        ans.insert(v[i]);
    }
    
    
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    

    return 0;
}