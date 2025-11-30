// Created by M.Mahadi on 2025-11-27 Time:17-52-43
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<'\n';
        }
        
    }
    
    return 0;
}