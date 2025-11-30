// Created by M.Mahadi on 2025-11-30 Time:20-02-26
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    if (a+b < c || a+c < b || b+c < a)
    {
        cout<<"Not possible";
    }else
    {
        float s = (a+b+c)/2.0;
        float ans = (float)sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<ans;
    }
    
    
    return 0;
}