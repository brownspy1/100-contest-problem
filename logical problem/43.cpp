// Created by M.Mahadi on 2025-11-30 Time:19-33-22
#include <bits/stdc++.h>
using namespace std;
int main(){
    int unit;cin>>unit;
    int total_bill = 0;
    if (unit <=0)
    {
        cout<<"Your input is wrong";
        return 0;
    }
    
    if (unit <= 100)
    {
        total_bill = unit*5;
    }
    else if (unit <= 200)
    {
        total_bill = 500+(unit-100)*6;
    }
     else if (unit <= 300)
    {
        total_bill = 500+600+(unit-200)*7;
    }else
    {
        total_bill = 500+600+700+(unit-300)*8;
    }
    
    
    cout<<total_bill;
    return 0;
}