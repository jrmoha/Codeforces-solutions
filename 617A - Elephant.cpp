#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int count = 0;
    cin >> x;
    int index;
    int steps[5] = {1, 2, 3, 4, 5};
    while (x >= 0)
    {
        for (int i = 0; i < 5 && steps[i] <= x; i++)
        {
            index = i;
        }
        if (x - steps[index] >= 0)
        {
            x -= steps[index];
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
