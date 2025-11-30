// Created by M.Mahadi on 2025-11-30 Time:19-15-24
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if (n%400 == 0 || ((n%4 ==0) && (n%100 != 0)))
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}