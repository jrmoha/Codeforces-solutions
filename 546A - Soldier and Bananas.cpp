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
    int k,n,w;
    std::cin>>k>>n>>w;
    long sum=(k*(w*(w+1)/2));
    if(n>=sum){
        print<<0<<std::endl;
    }else{print<<sum-n<<std::endl;}
    return 0;
}

