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
    std::string str;
    std::cin>>str;
    int cnt=0;
    int n=str.length();
    for(int i=0; i<n-1; i++)
    {
        if(str[i]==str[i+1])
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        if(cnt>=6){
            cnt++;break;
        }
    }
    if(cnt>=7)
    {
        print<<"YES"<<std::endl;
    }
    else
    {
        print<<"NO"<<std::endl;
    }

}

