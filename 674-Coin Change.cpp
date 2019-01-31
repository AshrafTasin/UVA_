/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.01.19   |
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


int coin[]={50,25,10,5,1};
int dp[25][75000];
int co;


int coin_(int index,int money)
{
    if(index>=5)
    {
        if(money==0) return 1;
        else return 0;
    }

    if(dp[index][money]!=-1) return dp[index][money];

    int l=0,r=0;

    if(money-coin[index]>=0) l=coin_(index,money-coin[index]);
    r=coin_(index+1,money);

    return dp[index][money]=l+r;

}


int main()
{
    memset(dp,-1,sizeof dp);

    while(scanf("%d",&co)==1)
    {

        cout << coin_(0,co) << endl;
    }
}
