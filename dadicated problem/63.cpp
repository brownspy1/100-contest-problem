// Created by M.Mahadi on 2025-12-01 Time:20-02-21
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n] = {0,1};
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    
    return 0;
}