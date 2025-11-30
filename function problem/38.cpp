// Created by M.Mahadi on 2025-11-30 Time:18-18-14
#include <bits/stdc++.h>
using namespace std;
void fact(int n){
    long long int  fc = 1;
    for (int i = 1; i <= n; i++)
    {
        fc*=i;
    }
    cout<<fc;
    
}
int main(){
    int n;cin>>n;
    fact(n);
    return 0;
}