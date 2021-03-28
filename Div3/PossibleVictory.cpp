#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;

    int runNeeded = r-c;
    int overLeft = 20-o;

    if(runNeeded < 36*overLeft)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
