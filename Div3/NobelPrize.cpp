#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        set<int> s;

        for(int i=0; i<n; i++) s.insert(a[i]);

        if(s.size()<m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
