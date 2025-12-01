// Created by @brownspy1 on 2025-12-01 Time:21-12-36
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
    string s;cin>>s;
    reverse(all(s));
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] =='1')
        {
            ans += 1LL<<i*int(s[i]-'0');
        }
        
    }
    cout<<ans;
    return 0;
}