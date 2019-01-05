/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   07.11.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 20005
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

ll cost[mx];


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t=1;t<=tc;t++)
    {
        vector<pair<int,int>> v[mx];
        priority_queue<mnm> q;

        int node,edge,st,en;
        scanf("%d%d%d%d",&node,&edge,&st,&en);

        for(int i=1;i<=edge;i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);

            v[a].pb(mp(b,c));
            v[b].pb(mp(a,c));
        }

        for(int i=0;i<mx;i++) cost[i]=INT_MAX;

        q.push(mp(0,st));
        cost[st]=0;

        while(!q.empty())
        {
            pair<int,int> cur=q.top();
            q.pop();
            int sz=v[cur.second].size();

            for(int i=0;i<sz;i++)
            {
                int child=v[cur.second][i].first;
                int c=v[cur.second][i].second;

                if(cost[cur.second]+c < cost[child])
                {
                    cost[child]=cost[cur.second]+c;
                    q.push(mp(cost[child],child));
                }
            }
        }

        if(cost[en]==INT_MAX) printf("Case #%d: unreachable\n",t);
        else printf("Case #%d: %lld\n",t,cost[en]);

    }

    return 0;
}

