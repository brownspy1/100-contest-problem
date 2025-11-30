// Created by M.Mahadi on 2025-11-23 Time:23-38-10
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count;cin>>count;

    for (int i = count; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<'*';
        }cout<<endl;
        
    }
    
    return 0;
}