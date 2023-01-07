#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    for (int k = 0; k < t; k++)
    {
        std::map<int, long long> hmap;
        int n;
        int q;
        std::cin >> n >> q;
        long long a[n];
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
            if (a[i] % 2 == 0)
            {
                hmap[0] += a[i];
                even++;
            }
            else
            {
                hmap[1] += a[i];
                odd++;
            }
        }
        for (int j = 0; j < q; j++)
        {
            int tmp;
            int tmp2;
            long long sum = 0;
            std::cin >> tmp >> tmp2;
            if (tmp == 0)
            {
                hmap[0] += (tmp2 * even);
            }
            else
            {
                hmap[1] += (tmp2 * odd);
            }
            if (tmp2 % 2 != 0)
            {
                if (tmp == 0)
                {
                    odd += even;
                    even = 0;
                    hmap[1] += hmap[0];
                    hmap[0] = 0;
                }
                else
                {
                    even += odd;
                    odd = 0;
                    hmap[0] += hmap[1];
                    hmap[1] = 0;
                }
            }
            sum = hmap[0] + hmap[1];
            std::cout << sum << std::endl;
        }
    }

    return 0;
}