// Created by M.Mahadi on 2025-12-02 Time:12-10-14
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string text;

    map<string,int> mp;
    while (ss>>text)
    {
        mp[text] ++;
    }

    for (auto [a,b] :mp)
    {
        cout<<a<<": "<<b<<"\n";
    }
    
    
    
    return 0;
}