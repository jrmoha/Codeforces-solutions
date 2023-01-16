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
    int bills[5]= {1,5,10,20,100};
    long long num=0;
    for(int i=4; i>=0&&n>0; i--)
    {

        if(n%bills[i]==0)
        {
            num+=(n/bills[i]);
            n=0;
            break;
        }
        else
        {
            if(n>=bills[i])
            {int tmp=(n/bills[i]);
                num+=tmp;
                n-=(bills[i]*tmp);
            }
        }
    }
    print<<num<<std::endl;
    return 0;
}

