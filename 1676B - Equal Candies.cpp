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
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
          std::cin>>n;
        int a[n];
        int mini=INT_MAX;
        forr(i,n)
        {
            std::cin>>a[i];
            if(a[i]<mini)
                mini=a[i];
        }
        long long int sum=0;
        forr(i,n)
        {
            if(a[i]>mini)
            {
                sum+=(a[i]-mini);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

