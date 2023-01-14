#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
void solve()
{
    int n,a,b;
    std::cin>>n>>a>>b;
    int x=((n+a-1)/a);
    a>b?x=1:1;
    std::cout<<x<<std::endl;
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}