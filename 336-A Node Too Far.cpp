/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mx 10000
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

map<int,int> vis;
int node,cost;

void bfs(int node, map< int,vector<int> >m)
{
    queue<int> q;
    q.push(node);
    vis[node]=0;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        int sz=m[cur].size();

        for(int i=0;i<sz;i++)
        {
            int x=m[cur][i];

            if(vis.count(x)==0)
            {
                q.push(x);
                vis[x]=vis[cur]+1;
            }
        }
    }
}


int main()
{
    int n,cs=0;

    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        map<int,vector<int> > m;

        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            m[a].pb(b);
            m[b].pb(a);
        }

        while(1)
        {
            scanf("%d %d",&node,&cost);
            if(node==0 and cost==0) break;
            vis.clear();

            bfs(node,m);
            int cnt=0;
            map<int,int> :: iterator it;

            for(it=vis.begin();it!=vis.end();it++)
            {
                if(it->second > cost) cnt++;
            }

            cnt+=m.size()-vis.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cs,cnt,node,cost);
        }
    }
}
