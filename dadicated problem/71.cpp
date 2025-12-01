// Created by @brownspy1 on 2025-12-01 Time:22-54-23
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
    string s,sc;cin>>s;
    sc=s;
    reverse(all(s));
    if (s == sc)
    {
        cout<<"Palindrome";
    }else
    {
        cout<<"Not Palindrome";
    }
    
    
    return 0;
}