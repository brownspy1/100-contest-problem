// Created by M.Mahadi on 2025-11-30 Time:18-02-16
#include <bits/stdc++.h>
using namespace std;

int bignumber(int a, int b, int c)
{
    int big = a;
    if (big < b)
    {
        big = b;
    }
    if (big < c)
    {
        big = c;
    }
    return big;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << bignumber(a, b, c);
    return 0;
}