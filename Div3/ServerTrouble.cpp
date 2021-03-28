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
