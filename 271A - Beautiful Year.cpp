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
    int fst=n/1000%10;
    int scd=n/100%10;
    int thrd=n/10%10;
    int lst=n%10;
    while(true)
    {
        n++;
        fst=n/1000%10;
        scd=n/100%10;
        thrd=n/10%10;
        lst=n%10;if(fst!=scd&&scd!=thrd&&thrd!=lst&&fst!=thrd&&fst!=lst&&scd!=lst){break;}
    }

    std::cout<<n<<std::endl;
    return 0;
}

