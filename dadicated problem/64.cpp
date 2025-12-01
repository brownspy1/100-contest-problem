// Created by M.Mahadi on 2025-12-01 Time:20-08-08
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    while (cin>>n)
    {
        v.push_back(n);
    }
    
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
        if(min > v[i]){
            min = v[i];
        }
        
    }
    cout<<"Max = "<<max<<"\nMin = "<<min;
    
    
    return 0;
}