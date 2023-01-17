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
#define MAX 1000001

int main()
{
    double n;
    std::cin>>n;
    double x;
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        std::cin>>x;
        sum+=(x*1.);
    }
    double avg=(double)sum/n;
    print<<avg<<std::endl;
    return 0;

}

