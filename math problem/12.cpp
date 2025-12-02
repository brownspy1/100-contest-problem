// Created by M.Mahadi on 2025-11-26 Time:21-45-50
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,digit,copy;cin>>n;
    copy=n;
    
    for (;n;)
    {
        digit = n%10;
        sum += pow(digit,3);
        n=n/10;
    }
    if (sum==copy)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}