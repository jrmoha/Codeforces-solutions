#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#pragma GCC optmize(2)
#include <algorithm>
int main()
{
    int n;
    std::cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        int countt=0;
        for(int j=0; j<n; j++)
        {
            if(i-1>=0)
            {
                if(a[i-1][j]=='o')
                    countt++;
            }
            if(i+1<n)
            {
                if(a[i+1][j]=='o')
                    countt++;
            }
            if(j-1>=0)
            {
                if(a[i][j-1]=='o')
                    countt++;
            }
            if(j+1<n)
            {
                if(a[i][j+1]=='o')
                {
                    countt++;
                }
            }
            if(countt%2)
            {
                std::cout<<"NO"<<std::endl;
                return 0;
            }
        }
    }
    std::cout<<"YES"<<std::endl;
    return 0;
}

