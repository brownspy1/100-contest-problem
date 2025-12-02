// Created by M.Mahadi on 2025-12-02 Time:15-27-08
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> attendance = {60, 70, 80, 90};
    vector<int> score = {55, 60, 70, 78};

    int last_att,prev_att;
    last_att = attendance[attendance.size()-1];
    prev_att = attendance[attendance.size()-2];

    int last_score,prev_score;
    last_score = score[score.size()-1];
    prev_score = score[score.size()-2];


    int diff_att = last_att-prev_att;
    int diff_score = last_score-prev_score;
    float diff_point =(float) diff_score/diff_att;
    

    int predicted;cin>>predicted;

    int extra_attendence = predicted - last_att;
    int abcd = extra_attendence*diff_point;
    int pradicted_score = last_score+abcd;

    cout<<pradicted_score;


    return 0;
}