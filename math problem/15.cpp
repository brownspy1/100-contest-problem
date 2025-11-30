// Created by M.Mahadi on 2025-11-27 Time:22-16-12
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for (int i = 2; i < n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                flag=false;
                break;
            }
            
        }
        if (flag)
        {
            cout<<i<<" ";
            v.push_back(i);
        }
    }
    int ss = v.size();
    cout<<"\nPrime count"<<ss;
    
    return 0;
}