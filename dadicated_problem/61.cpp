// Created by M.Mahadi on 2025-12-01 Time:00-50-10
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b,bool print){
    while (b!=0)
    {
        int r = a%b;
        a=b;
        b=r;
    } 
    if (print)
    {
       cout<<"GCD ="<< a<<'\n';
    }
    
    return a;
};
void lcm(int a,int b){
    cout<<"LCM ="<< ((long long) a)*b/gcd(a,b,false);
};


int main(){
    int a,b;cin>>a>>b;
    gcd(a,b,true);
    lcm(a,b);
    return 0;
}