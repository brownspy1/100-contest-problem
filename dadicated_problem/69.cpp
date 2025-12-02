// Created by @brownspy1 on 2025-12-01 Time:22-13-19
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()

float area(float r){
    return M_PI*pow(r,2);
}
int area(int length,int height){
    return length*height;
}
int main(){
    string s;
    while (getline(cin,s))
    {
        stringstream ss(s);
        float number;
        vector<float> v;
        for (;ss>>number;)
        {
            v.push_back(number);
        }
        if (v.size() == 1)
        {
            cout<<"Area(circle) = "<<area(v[0])<<'\n';
        }else
        {
            cout<<"Area(rectangle) = "<<area((int)v[0],(int)v[1])<<'\n';
        }
        
        
        
    }
    
    
    return 0;
}