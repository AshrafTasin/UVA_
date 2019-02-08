/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.02.18   |
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


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

string s,ss;

int dp[10050][10050];

int lcs()
{
    int s_size=s.size();
    int ss_size=ss.size();

    for(int i=0;i<=s_size;i++) dp[i][0]=0;

    for(int i=0;i<=ss_size;i++) dp[0][i]=0;

    for(int i=1;i<=s_size;i++)
    {
        for(int j=1;j<=ss_size;j++)
        {
            if(s[i-1]==ss[j-1]) dp[i][j]=1+dp[i-1][j-1];

            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[s_size][ss_size];
}


int main()
{
    while(getline(cin,s))
    {
        getline(cin,ss);
        cout << lcs() << endl;
    }

    return 0;

}
