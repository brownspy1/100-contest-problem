// Created by M.Mahadi on 2025-12-02 Time:12-35-53
#include <bits/stdc++.h>
using namespace std;
bool cmp(const tuple<int,int> &a,const tuple<int,int> &b){

    return get<1>(a) < get<1>(b);
}

int main(){
    vector<tuple<int,int>> v;
    int first,secend;
    char open,coma,cls;
    while (cin>>open && open == '(')
    {
        cin>>first;
        cin>>coma;
        cin>>secend;
        cin>>cls;
        v.push_back({first,secend});
    }
    
    sort(v.begin(),v.end(),cmp);

    for (auto p:v)
    {
        cout<<'('<<get<0>(p)<<','<<get<1>(p)<<") ";
    }
    
    

    return 0;
}