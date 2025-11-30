// Created by M.Mahadi on 2025-11-28 Time:21-49-36
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,copy;cin>>s;
    copy = s;
    reverse(s.begin(),s.end());
    if (s == copy)
    {
        cout<<"Palindrome";
    }else
    {
        cout<<"Not Palindrome";
    }
    
    
    return 0;
}