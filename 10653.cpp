#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
using namespace std;

int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};
int r,c,sr,sc,er,ec;
bool vis[1005][1005];

int bfs()
{
    queue<int> rq;
    queue<int> cq;
    bool endd=false;
    int ase=0,baki=1,cnt=0;

    rq.push(sr);
    cq.push(sc);
    vis[sr][sc]=1;

    while(!rq.empty())
    {
        int cr=rq.front();
        int cc=cq.front();
        rq.pop();
        cq.pop();

        if(cr==er && cc==ec)
        {
            endd=1;
            break;
        }

        for(int i=0;i<4;i++)
        {
            int nr=cr+dr[i];
            int nc=cc+dc[i];

            if((nr>=0 && nc>=0) && (nr<r && nc<c) && (vis[nr][nc]==0))
            {
                rq.push(nr);
                cq.push(nc);
                ase++;
                vis[nr][nc]=1;
            }
        }

        baki--;
        if(baki==0)
        {
            baki=ase;
            ase=0;
            cnt++;
        }
    }

    if(endd) return cnt;
}


int main()
{
    while(cin >> r >> c)
    {
        if(r==0 && c==0) return 0;
        memset(vis,0,sizeof(vis));

        int tc;
        cin >> tc;
        while(tc--)
        {
            int rr,bomb;
            cin >> rr >> bomb;
            while(bomb--)
            {
                int cc;
                cin >> cc;
                vis[rr][cc]=1;
            }
        }

        cin >> sr >> sc >> er >> ec;
        int cnt=bfs();
        cout << cnt << endl;
    }

    return 0;
}
