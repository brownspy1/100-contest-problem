// Created by M.Mahadi on 2025-11-30 Time:14-56-56
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
        }
        
    }
    cout<<mx;

    return 0;
}