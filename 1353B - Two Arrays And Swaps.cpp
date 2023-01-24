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
   std::cin>>t;while(t--){
   int n;int k;
   std::cin>>n>>k;
   int a[n];int b[n];
   forr(i,n)std::cin>>a[i];
   forr(i,n)std::cin>>b[i];
   long long int sum=0;
   std::sort(a,a+n);std::sort(b,b+n);
   for(int i=0,j=n-1;i<n&&j>=0&&k>0;i++){
    if(a[i]<b[j]){
        std::swap(a[i],b[j]);k--;j--;
    }
   }forr(i,n)sum+=a[i];
   printf("%d\n",sum);
   }
    return 0;
}

