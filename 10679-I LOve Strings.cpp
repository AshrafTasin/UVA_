/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   30.03.19   |
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


char pat[100050];
char tar[100050];
int table[100050];


void piTable(char *pat)
{
    int n=strlen(pat);
    int j;
    table[0]=-1;

    for(int i=1;i<=n;++i)
    {
        j=table[i-1];

        while(j>=0 and pat[i-1]!=pat[j]) j=table[j];

        table[i]=j+1;
    }
}


bool kmp(char *tar, char *pat)
{
    int n=strlen(tar);
    int m=strlen(pat);
    int i=0,j=0;
    memset(table,0,sizeof table);

    piTable(pat);

    while(i<n)
    {
        while(j>=0 and tar[i]!=pat[j]) j=table[j];

        ++i;
        ++j;

        if(j>=m) return true;
    }

    return false;
}


int main()
{
    flash

    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%s",tar);

        int q;
        scanf("%d",&q);

        while(q--)
        {
            scanf("%s",pat);
            bool x=kmp(tar,pat);

            if(x) printf("y\n");
            else printf("n\n");

        }
    }

    return 0;
}
