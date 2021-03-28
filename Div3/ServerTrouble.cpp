/*
You are the Chief Engineer of a fast growing start-up. You wish to place K servers in some distinct locations from among N locations. The locations, numbered 1,2,…,N are arranged in a circular manner. The distance between every adjacent location is 1 unit. 1 and N are adjacent.

You want to place the servers such that the maximum shortest distance between any two adjacent servers is as less as possible. Find this minimum possible distance that can be achieved, and also the minimum number of pairs of adjacent servers separated by this distance.
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(n%k==0)
        {
            cout << n/k << " " << k << endl;
            continue;
        }

        int maxGap = n/k+1;
        int num = n%k;

        cout << maxGap << " " << num << endl;
    }

    return 0;
}
