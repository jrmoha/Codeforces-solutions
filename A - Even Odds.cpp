#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    long long int n;
    long long int k;
    std::cin>>n>>k;
    if(k<=(n+1)/2)
    {
        std::cout<<(k*2)-1<<std::endl;
    }
    else
    {
        std::cout<<(k-(n+1)/2)*2<<std::endl;
    }
    return 0;
}