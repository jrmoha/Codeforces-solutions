#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
#define print std::cout
#include <iterator>
int main()
{
    int n;
    std::cin>>n;
    long long int a[n];
    long long int b[n];
    long long int c[n];
    int startIndex=-1;
    int endIndex=-1;
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    std::sort(b,b+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            startIndex=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]!=b[i])
        {
            endIndex=i;
            break;
        }
    }
    if(startIndex==-1)
    {
        print<<"yes"<<std::endl;
        print<<1<<" "<<1<<std::endl;
        return 0;
    }
    for(int i=startIndex,j=endIndex;i<=endIndex;i++,j--)
        c[i]=b[j];
    bool val=true;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i]){
            val=false;break;
        }
    }
    if(val)
    {
        print<<"yes"<<std::endl;
        print<<startIndex+1<<" "<<endIndex+1<<std::endl;
    }
    else
    {
        print<<"no"<<std::endl;
    }
    return 0;
}

