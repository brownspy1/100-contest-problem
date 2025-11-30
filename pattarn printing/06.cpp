// Created by M.Mahadi on 2025-11-23 Time:23-35-42
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<'*';
        }cout<<endl;
        
    }
    
    return 0;
}