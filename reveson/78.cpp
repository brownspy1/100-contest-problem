// Created by M.Mahadi on 2025-12-02 Time:22-13-00
#include <bits/stdc++.h>
using namespace std;
bool cmp(const tuple<int,int>&a,tuple<int,int>&b){
    return get<1>(a) < get<1>(b);
}

int main(){
    vector<tuple<int,int>> v;
    char fr,bc,cm;
    int fst,snd;
    while (cin>>fr && fr =='(')
    {
        cin>>fst;
        cin>>cm;
        cin>>snd;
        cin>>bc;

        v.push_back({fst,snd});
    }
    sort(v.begin(),v.end(),cmp);

    for (auto &&i :v)
    {
        cout<<"("<<get<0>(i)<<","<<get<1>(i)<<") ";
    }
    
    return 0;
}