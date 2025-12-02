// Created by M.Mahadi on 2025-12-02 Time:20-12-49
// remove duplicat from arry
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
    }
    

    for (auto &&i :st)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
}