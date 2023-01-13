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
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    std::sort(a,a+n);
    int stewards=0;
    int fst=a[0];
    int lst=a[n-1];
    for(int i=1;i<n-1;i++)
        if(a[i]!=fst&&a[i]!=lst){
            stewards++;
        }
    std::cout<<stewards<<std::endl;
 
    return 0;
}