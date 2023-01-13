#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    int n,k;
    std::cin>>n>>k;
    while(k--)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
    }
    std::cout<<n<<std::endl;
    return 0;
}

