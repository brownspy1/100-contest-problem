// Created by M.Mahadi on 2025-11-23 Time:23-23-19
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;

    int fact = 1;
    for (int i = 1; i < n+1; i++)
    {
        fact = fact*i;

        cout<<fact<<endl;
    }
    return 0;
}

/*
fact = fact*i;
1=1*1 = 1
1=1*2 = 2
2=2*3 = 6
6=6*4 = 24
24=24*5 = 120
*/