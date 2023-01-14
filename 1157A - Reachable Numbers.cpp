#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
int f(int x)
{
    x++;
    while(x%10==0)
    {
        x/=10;
    }
    return x;
}
int main()
{
    int n;
    std::cin>>n;

    std::set<int> sett;

    while(sett.count(n)==0)
    {
        sett.insert(n);
        n=f(n);
    }
    std::cout<<sett.size()<<std::endl;
    return 0;
}

