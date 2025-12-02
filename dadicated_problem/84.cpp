// Created by @brownspy1 on 2025-12-02 Time:13-42-56
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
    int n;cin>>n;
    if (n ==0||n==1) {cout<<"false";return 0;}
    bool flag = false;
    for (int i = 2; i*i <=n; i++)
    {
        if (n%i == 0)
        {
            flag = true;
        }
        
    }
    if (!flag)
    {
        cout<<"true";
    }else
    {
        cout<<"false";
    }
    
    
    
    return 0;
}