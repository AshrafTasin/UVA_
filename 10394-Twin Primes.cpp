/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   11.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps .000000001
using namespace std;

bool prime[1000005];

int main()
{
    vector <ll> v;

    for(ll i=2;i*i<=1000000;i++)
    {
        if(prime[i]==0)
        {
            v.pb(i);
            for(ll j=i*2;j<=1000000;j+=i) prime[j]=1;
        }

    }

    ll x;
    while(cin >> x)
    {
        if(x==0) break;

        ll cnt=0;
        int p=sqrt(x+1);
        for(ll i=0;i<=p;i++) if(x%v[i]==0) cnt++;

        cout << cnt << endl;
    }





    return 0;
}
