// Created by @brownspy1 on 2025-12-02 Time:14-57-22
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
    int n;cin>>n;
    vector<int> days;
    for (int i = 0; i <n; i++)
    {
        int day;cin>>day;
        days.push_back(day);
    }
    int c;cin>>c;
    vector<int> sales;
    for (int i = 0; i <c; i++)
    {
        int sale;cin>>sale;
        sales.push_back(sale);
    }

    int day_diff = days[1]-days[0];
    int sale_diff = sales[1] - sales[0];

    int predicted_day = days[n-1]+day_diff;
    int predicted_sales = sales[n-1]+sale_diff;

    cout<<"Day ="<<predicted_day<<"\nSales ="<<predicted_sales;

    
    return 0;
}