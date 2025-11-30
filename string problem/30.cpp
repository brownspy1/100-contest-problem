// Created by M.Mahadi on 2025-11-30 Time:14-40-59
#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;cin>>a;
    cin.ignore();
    string ss,ans;getline(cin,ss);

    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] != a)
        {
            ans.push_back(ss[i]);
        }
        
    }
    cout<<ans;

    return 0;
}