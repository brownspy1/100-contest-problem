// // Created by M.Mahadi on 2025-11-30 Time:01-26-46
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string ss;cin>>ss;
//     vector<char> v = {'A','E','I','O','U'};
//     int count = 0;
//     for (int i = 0; i < ss.size(); i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (ss[i] == char(v[j]+32) || ss[i] == v[j] )
//             {
//                 count++;
//             }
            
//         }
        
//     }
//     cout<<count;
    
//     return 0;
// }

// Optimize

// Created by M.Mahadi on 2025-11-30 Time:01-35-34
#include <bits/stdc++.h>
using namespace std;
bool is_valid(char a){
    a = tolower(a);
    return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
}
int main(){
    string ss;
    getline(cin,ss);
    int sum = 0;
    for (auto &&i : ss)
    {
        if (is_valid(i))
        {
            sum++;
        }
        
    };
    cout<<sum;
    return 0;
}