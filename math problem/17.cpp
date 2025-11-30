// Created by M.Mahadi on 2025-11-28 Time:17-30-24
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v = {0,1};
    if (n==0 || n==1)
    {
        cout<<n;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        v.push_back(v[v.size()-1]+v[v.size()-2]);
    }
    cout<<v.back();

    return 0;
}