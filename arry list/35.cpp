// Created by M.Mahadi on 2025-11-30 Time:15-19-00
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int nx = unique(a,a+n) - a;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    
    return 0;
}