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
        int a,b,c;
        std::cin>>a>>b>>c;
        int diff=std::abs(a-b);
        int vals=diff*2;
        if(a>vals||b>vals||c>vals)
        {
            std::cout<<-1<<std::endl;
        }
        else
        {
            if(c+diff<=vals)
            {
                std::cout<<c+diff<<std::endl;
            }
            else
            {
                std::cout<<c-diff<<std::endl;
            }
        }
    }
    return 0;
}