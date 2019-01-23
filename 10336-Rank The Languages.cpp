/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   12.01.19   |
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
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

bool cmp(const pair<char,int> &a , const pair<char,int> &b)
{
    if(a.second > b.second) return a.second > b.second;
    else return a.first < b.first;
}

int r,c;

int main()
{
    int tc;
    cin >> tc;
    int cases=1;

    while(tc--)
    {
        cin >> r >> c;


        char grid[r+5][c+5];
        bool vis[r+10][c+10];

        memset(vis,0,sizeof vis);

        map<char,int> m;
        map<char,int> :: iterator it;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                char x;
                cin >> x;
                m[x]=0;
                grid[i][j]=x;
            }
        }

        for(it=m.begin();it!=m.end();it++)
        {
            char x=it->first;

            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]==x and vis[i][j]==0)
                    {
                        queue<int> rq;
                        queue<int> cq;

                        rq.push(i);
                        cq.push(j);
                        vis[i][j]=1;

                        while(!rq.empty())
                        {
                            int cr=rq.front();
                            rq.pop();
                            int cc=cq.front();
                            cq.pop();

                            for(int i=0;i<4;i++)
                            {
                                int nr=cr+dx[i];
                                int nc=cc+dy[i];

                                if(nr>=0 and nc>=0 and nr<r and nc<c and grid[nr][nc]==x and vis[nr][nc]==0)
                                {
                                    vis[nr][nc]=1;
                                    rq.push(nr);
                                    cq.push(nc);
                                }
                            }
                        }

                        m[x]++;
                    }
                }
            }

        }

        vector< pair<char,int> > v;

        for(it=m.begin();it!=m.end();it++) v.pb(mp(it->first,it->second));

        sort(all,cmp);

        cout << "World #" << cases << endl;
        cases++;

        for(int i=0;i<v.size();i++) cout << v[i].first << ": " << v[i].second << endl;
    }

    return 0;
}
