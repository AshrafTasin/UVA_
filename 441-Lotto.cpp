/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.03.19   |
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


/*King  Moves
int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves
int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */


int ar[100];
bool vis[100];
int ans[100];
int n;

void track(int index)
{
    if(index==6)
    {
        int i;
        for(i=0;i<5;++i) cout << ans[i] << " ";
        cout << ans[i] << endl;
        return;
    }

    for(int i=0;i<n;++i)
    {
        if(vis[i]==0)
        {
            if(index>0 and ans[index-1]>=ar[i]) continue;
            vis[i]=1;
            ans[index]=ar[i];
            track(index+1);
            vis[i]=0;
        }
    }
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    flash

    bool c=0;

    while(cin >> n)
    {
        if(n==0) break;
        if(c) cout << endl;

        memset(ar,0,sizeof ar);
        memset(vis,0,sizeof vis);
        memset(ans,0,sizeof ans);

        for(int i=0;i<n;++i) cin >> ar[i];

        track(0);
        c=1;
    }
    
    return 0;
}
