#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
void solve()
{
    int n,l,r,k;
    std::cin>>n>>l>>r>>k;
    int total=0;
    std::vector<int> a;
 
    for(int i=0; i<n; i++)
    {
        int tmp;
        std::cin>>tmp;
        if(tmp>=l&&tmp<=r)
        {
            a.push_back(tmp);
        }
 
    }
    sort(a.begin(),a.end());
    for(auto num:a)
    {
        if(num<=k&&k-num>=0)
        {
            total++;
            k-=num;
 
        }
    }
    std::cout<<total<<std::endl;
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