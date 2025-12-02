// Created by @brownspy1 on 2025-12-02 Time:14-41-37
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int main(){
    fast
    int n;
    cin>>n;
    vector<int> unit;
    for (int i = 0; i < n; i++)
    {
        int num;cin>>num;
        unit.push_back(num);
    }
    
    
    int s;cin>>s;
    vector<int> bill;
   for (int i = 0; i < s; i++)
    {
        int num;cin>>num;
        bill.push_back(num);
    }
    
    int unit_diff = unit[1]-unit[0];
    int bill_diff = bill[1]-bill[0];

    int unit_cost = bill_diff/unit_diff;
    int predict_unit = unit[n-1]+unit_diff;

    cout<<"Predict units="<<predict_unit<<" →Output: -"<<predict_unit*unit_cost<<" Tk";
    

    return 0;
}