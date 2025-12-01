// Created by @brownspy1 on 2025-12-01 Time:23-34-54
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
class Myqueue{
    public:
        list<int> myList;
    void push(int v){
        myList.push_back(v);
    }
    void pop(){
        myList.pop_front();
    }
    int front(){
        return myList.front();
    }
    int size(){
        return myList.size();
    }
    bool isEmpty(){
        return myList.empty();
    }
};



int main(){
    fast
    Myqueue q;
    int n;
    while (cin>>n)
    {
        q.push(n);
    }
    int x = q.size();
    for (int i = 0; i <x; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
    return 0;
}

// NOTE: https://youtu.be/4mKKolshFD0?si=rYJjMzO8RcJyr330