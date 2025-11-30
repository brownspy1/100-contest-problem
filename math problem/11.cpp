// // Created by M.Mahadi on 2025-11-24 Time:01-11-34
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,sec_num,revers=0,lastdigit;cin>>num;

//     sec_num=num;

//     while (num)
//     {
//         lastdigit = num%10;
//         revers = lastdigit+(revers*10);
//         num = num/10;
//     }
    
//     if (sec_num == revers)
//     {
//         cout<<"YES";
//     }else
//     {
//         cout<<"NO";
//     }
    
//     return 0;
// }

// Created by M.Mahadi on 2025-11-26 Time:22-08-43
#include <bits/stdc++.h>
using namespace std;
int main(){
    char copy[50],ch[50];cin>>ch;
    strcpy(copy,ch);
    int len = strlen(ch);
    for (int i = 0; i < len/2; i++)
    {
        char temp = ch[i];
        ch[i] = ch[len-1-i];
        ch[len-1-i] = temp;
    }
    
    if (strcmp(copy,ch)==0)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}