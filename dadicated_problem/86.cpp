// Created by M.Mahadi on 2025-12-02 Time:13-50-47
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max = INT_MIN;
    int min = INT_MAX;
    while (cin>>n)
    {
        if (max < n)
        {
            max = n;
        }
        if (min > n)
        {
            min = n;
        }
        
        
    }
    
    cout<<"Max = "<<max<<"\nMin = "<<min;


    return 0;
}