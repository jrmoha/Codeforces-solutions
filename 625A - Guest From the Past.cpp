#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    long long int n,a,b,c;
    std::cin>>n>>a>>b>>c;
    long long int total=0;
    if(a<=b-c)
    {
        std::cout<<n/a<<std::endl;
        return 0;
    }
    if(n>=b)
    {
        total=((n-c)/(b-c));
        n-=(total*b);
        n+=(total*c);
 
    }
    if(n>=a)
    {
        total+=(n/a);
    }
    std::cout<<total<<std::endl;
    return 0;
}