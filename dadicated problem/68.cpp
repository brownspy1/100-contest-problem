// Created by @brownspy1 on 2025-12-01 Time:21-28-03
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
    int ans = 0;
    int n;
    for (; cin>>n; )
    {
        ans+=n;
    }
    cout<<ans;
    return 0;
}