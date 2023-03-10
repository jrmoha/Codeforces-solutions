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
#define YES std::cout<<"YES"<<std::endl
#define NO  std::cout<<"NO"<<std::endl
#define forr(i,n) for(int i=0;i<n;i++)
#include <iterator>
#define init std::ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0)
#define MAX 1000001
#include <bitset>
#include <cstring>
#include <cctype>
int main()
{
    init;
    int n;
    int h;
    std::cin>>n>>h;
    int a[n];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
        if(a[i]>h)
        {
            cnt+=2;
        }
        else
        {
            cnt++;
        }
    }
    std::cout<<cnt<<std::endl;
    return 0;
}

