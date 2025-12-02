// Created by M.Mahadi on 2025-12-01 Time:01-01-56
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    bool flag = false;
    if (n < 0) {cout<<"Wrong input";return 0;}
    
    if (n == 1 || n==0)
    {
        cout<<"Neither";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i ==0)
        {
            flag = true;
        }
        
    }
    if (!flag)
    {
        cout<<n<<" is Prime";
    }else
    {
        cout<<n<<" is Composite";
    }

    return 0;
}