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
#define mx 35
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};

int n,eagles=0;
bool vis[mx][mx];
char grid[mx][mx];

void bfs(int sr,int sc)
{
    queue<int> rq;
    queue<int> cq;

    rq.push(sr);
    cq.push(sc);
    vis[sr][sc]=1;
    grid[sr][sc]='#';

    while(!rq.empty())
    {
        int cr=rq.front();
        rq.pop();
        int cc=cq.front();
        cq.pop();

        for(int i=0;i<8;i++)
        {
            int nr=cr+dx[i];
            int nc=cc+dy[i];

            if(nr>=0 and nc>=0 and nr<n and nc<n and vis[nr][nc]==0 and grid[nr][nc]=='.')
            {
                vis[nr][nc]=1;
                rq.push(nr);
                cq.push(nc);
                grid[nr][nc]='#';
            }
        }
    }
}


int main()
{
    int images=1;
    while(scanf("%d",&n)!=EOF)
    {
        memset(vis,0,sizeof vis);
        memset(grid,0,sizeof grid);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                char x;
                cin >> x;
                if(x=='0') grid[i][j]='#';
                else grid[i][j]='.';
            }
        }


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='.')
                {
                     bfs(i,j);
                     eagles++;
                }
            }
        }



        cout << "Image number " << images << " contains " << eagles << " war eagles." << endl;

        images++;
        eagles=0;
    }
}

