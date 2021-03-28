#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        long long ans1=0;

        ans1 += a[n-1];

        for(int i=n-1; i>0; i--)
        {
            if(a[i]<=a[i-1])
            {
                ans1 += a[i-1]-a[i]+1;
            }
        }

        long long ans2=0;

        ans2 += a[0];

        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]<=a[i])
            {
                ans2++;
            }
            else
            {
                ans2+=a[i+1]-a[i];
            }
        }

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}
