// Created by M.Mahadi on 2025-11-30 Time:14-16-16
#include <bits/stdc++.h>
using namespace std;
int main(){
    string ss,ans;getline(cin,ss);
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] !=' ')
        {
            ans.push_back(ss[i]);
        }
    }
    cout<<ans;
    
    return 0;
}