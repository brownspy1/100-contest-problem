// Created by @brownspy1 on 2025-12-01 Time:22-37-25
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

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
            
            
        }
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    
    
    return 0;
}