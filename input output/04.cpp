// Created by M.Mahadi on 2025-11-23 Time:23-20-39
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;cin>>n>>m>>x;

    int small = n;

    if(small > m) small = m;
    if(small > x) small = x;


    cout<<small;
    return 0;
}