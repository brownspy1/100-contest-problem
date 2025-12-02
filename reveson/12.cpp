// number armstron or not 
// Created by @brownspy1 on 2025-12-02 Time:20-38-29
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int copy,num,digit,ans=0;
    cin>>num;
    copy = num;
    int count = 0;
    while (num)
    {
        num = num/10;
        count++;
    }
    num = copy;

    while (num)
    {
        digit = num%10;
        ans +=pow(digit,count);
        num = num/10;
    }
    
    if (copy == ans) yes
    else no
    
    return 0;
}