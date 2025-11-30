// Created by M.Mahadi on 2025-11-24 Time:00-01-20
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count;cin>>count;
    for (int i = 1; i <=count; i++)
    {

        for (int k = 1; k < i; k++)
        {
            cout<<' ';
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<'*';
        }cout<<endl;
        
    }
    

    return 0;
}