
#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#pragma GCC optmize(2)
#include<bits/stdc++.h>
int main()
{
    int n;
    int m;
    std::cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
    }
    std::sort(a,a+n);
    for(int i=0; i<m; i++)
    {
        std::cin>>b[i];
        int l=0,r=n;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(a[mid]<=b[i])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        std::cout<<l<<" ";
    }
    return 0;
}