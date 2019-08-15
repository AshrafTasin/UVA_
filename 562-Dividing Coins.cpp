/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   06.04.19   |
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


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	flash

	int tc;
	cin >> tc;

	while(tc--)
	{
		int n,sum=0,cap;
		cin >> n;

		int ar[n+10],cmsm[n+10];
		for(int i=1;i<=n;++i)
		{
			cin >> ar[i];
			sum+=ar[i];
		}

		if(sum%2) cap=sum/2+1;
		else cap=sum/2;

		int dp[n+10][cap+10];

		for(int i=0;i<=n;++i)
		{
			for(int j=0;j<=cap;++j) 
			{
				if(i==0 or j==0) dp[i][j]=0;
				else if(ar[i]<=j) dp[i][j]=max(dp[i-1][j],ar[i]+dp[i-1][j-ar[i]]);
				else dp[i][j]=dp[i-1][j];
			}
		}

		cout << abs(dp[n][cap]-(sum-dp[n][cap])) << endl;

	}

	return 0;
}