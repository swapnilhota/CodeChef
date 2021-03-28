/*
There is only 1 TV in the common room, and as luck would have it, both the El Clasico football match and the India-Pakistan cricket match are happening simultaneously.

There is one football fan who is looking at the live commentary online and will scream whenever an 'important' event takes place in the El Clasico. Similarly, there is a cricket fan who will do so for every important event in the cricket match.

You are given two arrays - F1,F2,…,Fn, which denote the times when an important event happens in the football match. And similarly C1,C2,…,Cm for cricket. You sadly have the remote in hand. You start out by watching the El Clasico. But whenever an Important event happens in the sport which isn't on the TV right now, you will be forced to switch to that sport's channel, and this continues, i.e., you switch channels if and only if when an important event in the other sport happens. Find the total number of times you will have to switch between the channels.
*/


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
