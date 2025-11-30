// Created by M.Mahadi on 2025-11-30 Time:13-55-05
#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;getline(cin,text);
    for (int i = 0; i < text.size(); i++)
    {
        text[i]= tolower(text[i]);
    }
    cout<<text;
    return 0;
}