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
    std::string wordA,wordB;
    bool val=true;
    std::cin>>wordA>>wordB;
    int n=wordB.length();
    if(wordA.length()==n)
    {
        for(int i=0,j=n-1; i<n&&j>=0; i++,j--)
        {
            if(wordA[i]!=wordB[j])
            {
                val=false;
                break;
            }
        }
        if(val)
            YES
            else
                NO
            }
    else NO
        return 0;
}

