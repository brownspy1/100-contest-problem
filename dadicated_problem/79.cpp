// Created by @brownspy1 on 2025-12-02 Time:12-49-57
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
    int n,x;cin>>n>>x;

    if (n > x) cout<<"Wrong input";
    n = max(2,n);
    
    for (int i = n; i < x; i++)
    {
        bool flag = false;
        for (int j = 2; j*j <= i; j++)
        {
            if (i%j == 0)
            {
                flag = true;
                break;
            }
            
        }
        if (!flag)
        {
            cout<<i<<" ";
        }
        
        
    }
    
    


    return 0;
}