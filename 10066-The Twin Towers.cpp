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
#define show for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
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


int dp[150][150];
int len_a,len_b;
int A[150];
int B[150];


int lcs()
{
    for(int i=0;i<=len_a;i++) dp[i][0]=0;

    for(int i=0;i<=len_b;i++) dp[0][i]=0;

    for(int i=1;i<=len_a;i++)
    {
        for(int j=1;j<=len_b;j++)
        {
            if(A[i]==B[j]) dp[i][j]=1+dp[i-1][j-1];

            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[len_a][len_b];
}


int main()
{
    int cases=0;

    while(1)
    {
        scanf("%d%d",&len_a,&len_b);

        if(len_a==0 and len_b==0) break;

        for(int i=1;i<=len_a;i++)
        {
            int x;
            scanf("%d",&x);
            A[i]=x;
        }

        for(int i=1;i<=len_b;i++)
        {
            int x;
            scanf("%d",&x);
            B[i]=x;
        }

        printf("Twin Towers #%d\n",++cases);
        printf("Number of Tiles : %d\n",lcs());
        printf("\n");

    }
}
