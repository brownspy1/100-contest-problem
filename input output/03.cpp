// Created by M.Mahadi on 2025-11-23 Time:23-13-03
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;

    int MAX = a;

    if (MAX < b) MAX = b;
    if (MAX < c) MAX = c;
    
    cout<<MAX;
    
    

    // cout<<a<<' '<<b<<' '<<c;
    return 0;
}