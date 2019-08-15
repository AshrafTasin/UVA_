/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.07.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx 100004
using namespace std;


int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

bool grid[150][150];
int n,m;


void dfs(int x,int y)
{
    grid[x][y]=0;

    for(int i=0;i<8;++i)
    {
        int p=x+dx[i];
        int q=y+dy[i];

        if(p>=0 and q>=0 and p<n and q<m and grid[p][q]) dfs(p,q);
    }
}


int main()
{
    flash

    while(cin >> n >> m)
    {
        if(n==0 and m==0) break;

        memset(grid,0,sizeof grid);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                char x;
                cin >> x;
                if(x=='@') grid[i][j]=1;
                else grid[i][j]=0;
            }
        }

        int ans=0;

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j])
                {
                    dfs(i,j);
                    ++ans;
                }
            }
        }

        cout << ans << endl;
    }
}
