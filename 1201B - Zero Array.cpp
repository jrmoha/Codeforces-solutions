#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
#define print std::cout
#define YES std::cout<<"YES"<<std::endl;
#define NO  std::cout<<"NO"<<std::endl;
#define forr(i,n) for(int i=0;i<n;i++)
#include <iterator>
#define MAX 1000001

int main()
{
    int n;
    std::cin>>n;
    long long int a[n];
    long long sum=0;
    long long int maxi=0;
             forr(i,n)
    {
        std::cin>>a[i];
        maxi=std::max(maxi,a[i]);
        sum+=a[i];
    }
    if(sum%2==0&&sum-maxi>=maxi)
    {
        YES
    }
    else
    {
        NO
    }
    return 0;
}

