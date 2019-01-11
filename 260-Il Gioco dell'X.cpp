/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   10.01.19   |
/----------------------*/


#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mx 250
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;



int dx[]={-1,-1,0,0,1,1};
int dy[]={-1,0,-1,1,0,1};
int n;
bool vis[mx][mx];
char grid[mx][mx];

bool bfs(int sc)
{
    queue<int> rq;
    queue<int> cq;
    set<int> s;

    rq.push(0);
    cq.push(sc);
    vis[0][sc]=1;

    while(!rq.empty())
    {
        int cr=rq.front();
        rq.pop();
        int cc=cq.front();
        cq.pop();

        for(int i=0;i<6;i++)
        {
            int nr=cr+dx[i];
            int nc=cc+dy[i];

            if(nr>=0 and nc>=0 and nr<n and nc<n and vis[nr][nc]==0 and grid[nr][nc]=='.')
            {
                vis[nr][nc]=1;
                rq.push(nr);
                cq.push(nc);
                s.insert(nr);
            }
        }
    }

    if(s.size()==n) return true;
    else return false;
}


int main()
{
    int cases=1;
    while(cin >> n)
    {
        if(n==0) break;
        bool is_=false;
        memset(vis,0,sizeof vis);
        memset(grid,0,sizeof grid);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                char x;
                cin >> x;
                if(x=='w')
                {
                    vis[i][j]=true;
                    grid[i][j]='#';
                }
                else grid[i][j]='.';
            }
        }

        for(int j=0;j<n;j++)
        {
            if(grid[0][j]=='.' and bfs(j)==true)
            {
               is_=true;
               break;
            }
            memset(vis,0,sizeof vis);
        }

        if(is_) cout << cases << " B" << endl;
        else cout << cases << " W" << endl;

        cases++;
    }
}

