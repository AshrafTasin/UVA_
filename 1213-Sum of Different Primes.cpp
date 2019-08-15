/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   08.04.19   |
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
#define mx 1200+10
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

bool prime[mx];
ll dp[mx][mx][18];
int N,K;
vector<int> v;

void sv()
{
	for(int i=2;i<=1200;i+=2) prime[i]=1;

	prime[2]=0;

	for(int i=3;i*i<=1200;i+=2)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=1200;j+=i) prime[j]=1;
		}
	}


	for(int i=2;i<=1200;++i) if(!prime[i]) v.pb(i);

}


ll solve(int index, int n, int k)
{
    if (k==0 and n==0) return 1;
    if(k==0 and n!=0) return 0;
    if(v[index]>N) return 0;

    if (dp[index][n][k]!=-1) return dp[index][n][k];

    int p1=0,p2=0;

    if(n-v[index]>=0) p1=solve(index+1,n-v[index],k-1);
    p2=solve(index+1,n,k);

	return dp[index][n][k]=p1+p2;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	flash

	sv();

	while(cin >> N >> K)
	{
		if(N==0 and K==0) break;

		memset(dp,-1,sizeof dp);
		cout << solve(0,N,K) << endl;

	}

	return 0;
}
