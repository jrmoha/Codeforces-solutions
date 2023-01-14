#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long a,b;
        std::cin>>a>>b;
        long long diff=std::abs(a-b);
 
        if(diff%10!=0)
        {
            diff/=10;
            diff++;
        }else{diff/=10;}
        std::cout<<diff<<std::endl;
    }
 
    return 0;
}