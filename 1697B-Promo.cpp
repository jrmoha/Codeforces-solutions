#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    long long n, q;
    std::cin>>n>>q;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    long long sum[n+1];
    for(long long i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i - 1];
    }
    while(q--)
    {
        long long x, y;
        std::cin>>x>>y;
        long long result = sum[n - x + y] - sum[n - x];
        std::cout<<result<<std::endl;
    }
    return 0;
}

