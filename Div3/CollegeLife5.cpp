#include<bits/stdc++.h>
#include<map>

using namespace std;

struct Game
{
    int time;
    char game;
};

bool compare(Game g1, Game g2)
{
    return g1.time<g2.time;
}

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int f[n];
        int c[m];

        for(int i=0; i<n; i++) cin>>f[i];

        for(int i=0; i<m; i++) cin>>c[i];

        map<int, char> mp;

        for(int i=0; i<n; i++) mp[f[i]]='f';
        for(int i=0; i<m; i++) mp[c[i]]='c';

        vector<int> v;

        for(int i=0; i<n; i++) v.push_back(f[i]);
        for(int i=0; i<m; i++) v.push_back(c[i]);

        sort(v.begin(), v.end());

        int ans=0;
        char currGame = 'f';

        for(int i=0; i<v.size(); i++)
        {
            if(currGame != mp[v[i]])
            {
                ans++;
                currGame = mp[v[i]];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
