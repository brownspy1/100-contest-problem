// Created by M.Mahadi on 2025-11-27 Time:22-27-07
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if (n==0)
    {
        cout<<"0";
        return 0;
    }else if (n==1)
    {
        cout<<"1";
        return 0;
    }

    vector<int> v = {0,1};

    for (int i = 2; i <= n; i++)
    {
        v.push_back(v[v.size()-2]+v[v.size()-1]);
    }

    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    
    
    return 0;
}