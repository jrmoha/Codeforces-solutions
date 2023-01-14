#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    int n;
    std::cin>>n;
    int a[n];
    int maxi=INT_MIN;
    double tmp;
    long tmp2;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        tmp=std::sqrt(a[i]);
        tmp2=std::sqrt(a[i]);
        if(tmp!=tmp2){
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
    }
    std::cout<<maxi<<std::endl;
    return 0;
}