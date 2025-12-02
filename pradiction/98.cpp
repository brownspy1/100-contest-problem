// Created by M.Mahadi on 2025-12-02 Time:15-46-19
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> fb = {200, 300, 350, 400};
    vector<int> tv = {300, 350, 400, 450};
    vector<int> conv = {50, 65, 72, 80};
    int ifb,itv;cin>>ifb>>itv;

    bool flag = false;

    for (int i = 0; i < conv.size(); i++)
    {
        if (fb[i] == ifb && tv[i] == itv)
        {
            cout<<conv[i];
            flag = true;
            break;
        }
        
    }
    

    if (!flag)
    {
        int last = fb[fb.size()-1]+tv[tv.size()-1];
        int prev = fb[fb.size()-2]+tv[tv.size()-2];;
        
        int last_cov = conv[conv.size()-1];
        int prev_cov = conv[conv.size()-2];

        int diff_add = last-prev;
        int diff_cov = last_cov-prev_cov;

        float score = (float)diff_cov/diff_add;
        
        
        int target_total = ifb+itv;
        int extra = target_total-last;

        int ans = last_cov+(extra*score);
        cout<<ans;

    }
    

    return 0;
}