// Created by M.Mahadi on 2025-11-30 Time:01-51-15
#include <bits/stdc++.h>
using namespace std;

void remove_panc(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        if (ispunct(s[i]))
        {
            s[i] = ' ';
        }
    }
}

int main(){
    map<string,int> frq;

    string text;getline(cin,text);
    remove_panc(text);   

    stringstream ss(text);
    string word;

    while (ss>>word)
    {
        word[0] = toupper(word[0]); 
        frq[word] +=1;
    }

    for (auto &&i : frq)
    {
        cout<<i.first<<"="<<i.second<<'\n';
    }
    
    
    return 0;
}