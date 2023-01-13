#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    long long n;
    std::cin>>n;
    long long t;
    t=((n+1)/2);
    if(n%2==0){
        std::cout<<t<<std::endl;
    }else{
    std::cout<<t*-1<<std::endl;
    }
 
    return 0;
}