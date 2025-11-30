    // Created by M.Mahadi on 2025-11-30 Time:15-11-40
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;cin>>n;
        int fn;cin>>fn;
        int a[n];
        for (int i = 0; i < n; i++)
            {
                cin>>a[i];
            }

        int *it = find(a,a+n,fn);
        if (it != a+n)
        {
            cout<<"Found it";
        }else
        {
            cout<<"Not found!";
        }
        
        
        return 0;
    }