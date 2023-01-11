#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    int n,b,d;
    std::cin>>n>>b>>d;
    int a[n];long sum=0;int empt=0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i]<=b){
            sum+=a[i];
            if(sum>d){
                empt++;sum=0;
            }
        }
    }
    std::cout<<empt<<std::endl;
    return 0;
}