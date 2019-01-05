/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.01.19   |
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



int main()
{
    ll n;
    cin >> n;
    vector<db> v;

    for(int i=0;i<n;i++)
    {
        db x;
        cin >> x;
        v.pb(x);
    }

    sort(all);
    n--;

    if(n%2!=0) cout << (v[n/2]+v[(n/2)+1])/2 << endl;
    else cout << v[(n/2)+1] << endl;

    return 0;
}
