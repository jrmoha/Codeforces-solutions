#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
void solve()
{
    int n;
    std::cin>>n;
    int a[n],b[n];
    int maxi=0;
    bool val=true;
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        std::cin>>b[i];
        maxi=std::max(maxi,a[i]-b[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]-b[i]!=maxi&&b[i]!=0||b[i]>a[i])
        {
            val=false;
        }
    }
    if(val)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
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

