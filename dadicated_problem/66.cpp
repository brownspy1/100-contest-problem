// Created by M.Mahadi on 2025-12-01 Time:20-47-45
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(3,vector<int>(3));
    vector<vector<int>> X(3,vector<int>(3));
    vector<vector<int>> ans(3,vector<int>(3));
    // input V
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>v[i][j];
        }
        
    }
    // input X
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>X[i][j];
        }
        
    }
    // add X and v
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = v[i][j]+X[i][j];
        }
        
    }
    


// print ans
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }cout<<'\n';
        
    }

    return 0;
}