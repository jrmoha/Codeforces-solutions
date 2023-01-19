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
        int a;
        int b;
        std::cin>>a>>b;
        int cnt=0;
        //while(a%b){cnt++;a++;}
        if(a%b)
        {
            if(a>b)
            {
                int tmp=(a/b)+1;
                cnt=std::abs((tmp*b)-a);
            }
            else
            {
                cnt=(b-a);
            }
        }
        printf("%d%n",cnt);
    }

    return 0;
}

