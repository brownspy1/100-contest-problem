// Created by M.Mahadi on 2025-11-30 Time:18-08-32
#include <bits/stdc++.h>
using namespace std;

int sum(int a[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    } return sum;
    
}

int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n);
    return 0;
}