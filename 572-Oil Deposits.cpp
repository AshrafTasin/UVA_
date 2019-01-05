/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   23.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


vector<string> v;
int r,c,cnt=0;


void dfs(int rr,int cc)
{
    if(rr<0 or cc<0 or rr==r or cc==c) return;
    if(v[rr][cc]=='0') return;
    if(v[rr][cc]=='1')
    {
        cnt++;
        v[rr][cc]='0';
    }

    dfs(rr,cc+1);
    dfs(rr,cc-1);
    dfs(rr+1,cc);
    dfs(rr-1,cc);
    dfs(rr+1,cc+1);
    dfs(rr+1,cc-1);
    dfs(rr-1,cc+1);
    dfs(rr-1,cc-1);

}


int main()
{
    int tc;
    string a;
    cin >> tc;
    getchar();
    getchar();

    for(int ii=0;ii<tc;ii++)
    {
        p=0;
        memset(grid,'\0',sizeof grid);

        if(ii!=0) cout << endl;

        while(gets(grid[p]))
        {
            if(grid[p][0]=='\0') break;
            p++;
        }

        r=p;
        c=v[0].size();
        int res=0;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(v[i][j]=='1')
                {
                    cnt=1;
                    dfs(i,j);
                    res=max(res,cnt);
                }
            }
        }

        cout << res << endl;
    }

}
