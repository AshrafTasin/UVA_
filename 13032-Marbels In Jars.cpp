/*------------------------|
/ Author :   Ashraf Tasin |
/ Date   :   20.09.18     |
/------------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1000010
#define md 1000000007
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        vector<ll> v;
        int n;
        scanf("%d",&n);

        while(n--)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }

        sort(all);

        ll mul=1;

        for(ll j=0;j<v.size();j++) v[j]=abs(j-v[j]);

        for(ll j=0;j<v.size();j++) mul=((mul%md)*(v[j]%md))%md;

        printf("Case %d: %lld\n",i,mul);

    }

    return 0;
}
