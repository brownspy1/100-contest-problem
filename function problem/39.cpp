// Created by M.Mahadi on 2025-11-30 Time:18-21-17
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int a[n];
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        return 0;

    if (n == 1)
    {
        cout << n;
        return 0;
    }
    fibonacci(n);

    return 0;
}