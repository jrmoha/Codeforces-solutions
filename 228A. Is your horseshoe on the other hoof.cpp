#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    std::set<int> sett;
    int colors[4];
    for(int i=0; i<4; i++)
    {
        std::cin>>colors[i];
        sett.insert(colors[i]);
    }
    std::cout<<4-sett.size()<<std::endl;

    return 0;
}

