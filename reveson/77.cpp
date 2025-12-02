// Created by M.Mahadi on 2025-12-02 Time:22-07-50
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if (n <= 1)
    {
        return 1;
    }
    return n*fact(n-1);
    
}
int main(){
    int n;cin>>n;
    cout<<fact(n);    
    return 0;
}