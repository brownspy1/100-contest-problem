// Created by M.Mahadi on 2025-12-02 Time:13-46-37
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;char s;cin>>a>>b>>s;
    if (s == '+') cout<<a+b;
    else if(s == '-') cout<<a-b;
    else if(s == '*') cout<<a*b;
    else if(s == '/') cout<<a/b;
    else if(s == '%') cout<<a%b;
    
    
    return 0;
}