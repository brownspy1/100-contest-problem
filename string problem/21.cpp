// Created by M.Mahadi on 2025-11-28 Time:21-43-16
#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,revers; cin>>text;
    int n = text.size();

    for (int i = n-1; i >= 0; i--)
    {
        revers.push_back(text[i]);
    }
    cout<<revers;
    return 0;
}