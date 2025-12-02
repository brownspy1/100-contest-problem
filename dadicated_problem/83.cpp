// Created by @brownspy1 on 2025-12-02 Time:13-34-00
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
    char left,right;
    int n;
    vector<int> v;
    while (cin>>left && left =='[')
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>n;
            v.push_back(n);
        }
        cin>>right;
        
    }
    
    set<int> st;


    for (int i = 0; i < v.size(); i++)
    {
        st.insert(v[i]);
    }
    
    for (auto &&i : st)
    {
        cout<<i<<" ";
    }
    
    return 0;
}