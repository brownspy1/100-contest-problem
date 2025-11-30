// Created by M.Mahadi on 2025-11-30 Time:15-01-37
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }

    reverse(ar,ar+n);

    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<' ';
    }
    
    return 0;
}