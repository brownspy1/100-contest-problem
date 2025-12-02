// Created by M.Mahadi on 2025-12-02 Time:14-10-08
#include <bits/stdc++.h>
using namespace std;
class obj{
    public:
        char name;
        int age;
    void add(char a, int b){
        name = a;
        age = b;
    }
};

bool cmp(const obj &a, const obj &b){
    return a.age < b.age;
}

int main(){
    int n;cin>>n;
    obj arr[n];
    for (int i = 0; i < n; i++)
    {
        char a;int b;
        cin>>a>>b;
        arr[i].add(a,b);
    }
    sort(arr,arr+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].age<<"\n";
    }
    
    return 0;
}