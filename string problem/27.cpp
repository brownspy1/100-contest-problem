// Created by M.Mahadi on 2025-11-30 Time:13-57-12
#include <bits/stdc++.h>
using namespace std;
int main(){
    string ss;getline(cin,ss);
    for (int i = 0; i < ss.size(); i++)
    {
        ss[i] = toupper(ss[i]);
    }
    cout<<ss;
    return 0;
}