#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
void solve()
{
    int n;
    std::string str;
    std::cin>>n>>str;
    bool turn=true;
    bool answer=true;
    int i=0;
    while(i<n)
    {
        if(!turn)
        {
            if(str[i]!=str[i+1])
            {
                answer=false;
            }
            turn=true;
            i+=2;
        }
        else
        {
            turn=false;i++;
        }
    }
    if(answer)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

