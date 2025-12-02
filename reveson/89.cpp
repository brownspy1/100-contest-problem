// Created by M.Mahadi on 2025-12-02 Time:23-11-45
#include <bits/stdc++.h>
using namespace std;
class obj{
    public:
        string name;
        int age;
    
    void add(string name, int age){
        this->name = name;
        this->age = age;
    }


};
bool cmp (obj &a,obj &b){
    return a.age < b.age;
}
int main(){
    int n;cin>>n;
    obj ar[n];

    char fr,bc,cm;
    string fst;
    int snd;
    for (int i = 0; i < n; i++)
    {
        cin>>fr;
        getline(cin,fst,',');
        cin>>snd;
        cin>>bc;

        ar[i].add(fst,snd);
        
    }
    

    sort(ar,ar+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout<<ar[i].age<<" ";
    }
    
    return 0;
}