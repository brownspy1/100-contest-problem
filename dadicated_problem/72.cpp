// Created by @brownspy1 on 2025-12-01 Time:23-23-53
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
    vector<int> v;
    int n;
    while (cin>>n)
    {
        v.push_back(n);
    }
    int target = v.back();
    v.pop_back();

    int l = 0, r = v.size()-1;
    int index; bool flag = false;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (v[mid] == target)
        {
            flag = true;
            index = mid;
            break;
        }else if (v[mid] < target)
        {
            l = mid+1;
        }else if (v[mid] > target)
        {
            r = mid-1;
        }
    }
    if (flag)
    {
        cout<<"Found at index "<<index;
    }else
    {
        cout<<"Not Found";
    }
    
    
    
    return 0;
}