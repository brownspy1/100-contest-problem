    // Created by M.Mahadi on 2025-11-30 Time:19-27-47
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;cin>>n;
        if (n >= 80 && n <= 100)
        {
            cout << "A+";
        }
        else if (n >= 70 && n <= 79)
        {
            cout << "A";
        }
        else if (n >= 60 && n <= 69)
        {
            cout << "B";
        }
        else if (n >= 50 && n <= 59)
        {
            cout << "C";
        }
        else if (n >= 40 && n <= 49)
        {
            cout << "D";
        }
        else
        {
            cout << "F";
        }
        
        
        return 0;
    }