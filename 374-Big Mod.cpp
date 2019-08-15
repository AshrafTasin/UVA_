/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.08.19   |
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
#define mx 100008
using namespace std;

/*King Moves
int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1}; */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

ll bigmod(ll base,ll power,ll mod)
{
    if(power==0) return 1%mod;
    ll x=bigmod(base,power/2,mod);
    x=(x*x)%mod;
    if(power%2) x=(x*base)%mod;
    return x;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    flash

    ll base,power,mod;

    while(cin >> base >> power >> mod)
    {
        cout << bigmod(base,power,mod) << endl;
    }

    return 0;
}
